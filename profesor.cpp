#include "profesor.h"

#include <iostream>

#include <vector>

using namespace std;

profesor::profesor()
{

}

profesor::profesor(string nombre, string apellido, int dni)
{
    persona(nombre, apellido, dni);
}

profesor::~profesor(){}

void profesor::addAlumno(string nombre, string apellido, int dni){
   estudiante *alumno = new estudiante();

   alumno->setNombre(nombre);
   alumno->setApellido(apellido);
   alumno->setDNI(dni);

   this->alumnos.push_back(*alumno);
}

void profesor::asignarNota(float nota, int dni){
    for(auto &alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            alumno.setNota(nota);
            break;
        }
    }
}

float profesor::notaMedia(int dni){
    float suma = 0;
    int num_notas = 0;

    for(auto &alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            for(auto nota: alumno.getNotas()){
                num_notas += 1;
                suma = suma + nota;
            }
            break;
        }
    }

    return suma / num_notas;
}

void profesor::imprimeAlumno(int dni){
    for(auto &alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            cout << "-------------------------------" << endl;
            cout << alumno.getNombre() << " " << alumno.getApellido() << " DNI: " << alumno.getDNI() << endl;
            cout << "Notas: " << endl;
            alumno.imprimeNotas();
            cout << "Nota media: " << this->notaMedia(alumno.getDNI()) << endl;
            cout << "-------------------------------" << endl;
            break;
        }
    }
}

void profesor::imprimeAlumnos(){
    for(auto alumno: this->alumnos){
        cout << "-------------------------------" << endl;
        cout << alumno.getNombre() << " " << alumno.getApellido() << " DNI: " << alumno.getDNI() << endl;
        cout << "Notas: " << endl;
        alumno.imprimeNotas();
        cout << "Nota media: " << this->notaMedia(alumno.getDNI()) << endl;
        cout << "-------------------------------" << endl;
    }
}

void profesor::imprimeMejor(){
    estudiante *mejor_alumno = new estudiante();

    int max = 0;
    int dni = 0;

    for(auto &alumno: this->alumnos){
        if(this->notaMedia(alumno.getDNI()) > max && alumno.getNotas().size() == 3){
            max = this->notaMedia(alumno.getDNI());
            mejor_alumno = &alumno;
        }
    }

    cout << "-------------------------------" << endl;
    cout << "Mejor alumno" << endl;
    cout << mejor_alumno->getNombre() << " " << mejor_alumno->getApellido() << " DNI: " << mejor_alumno->getDNI() << endl;
    mejor_alumno->imprimeNotas();
    cout << "Nota media: " << this->notaMedia(mejor_alumno->getDNI()) << endl;
    cout << "-------------------------------" << endl;
}




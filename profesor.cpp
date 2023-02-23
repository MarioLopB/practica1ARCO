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

    this->not_exist.setNombre(nombre);
    this->not_exist.setApellido(apellido);
    this->not_exist.setDNI(dni);
}

profesor::~profesor(){}

void profesor::addAlumno(string nombre, string apellido, int dni){
   estudiante *alumno = new estudiante();

   alumno->setNombre(nombre);
   alumno->setApellido(apellido);
   alumno->setDNI(dni);

   this->alumnos.push_back(*alumno);
}

estudiante& profesor::search(int dni){
    for(auto &alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            return alumno;
            break;
        }
    }

    return this->not_exist;
}

int profesor::existEstudiante(int dni){
    for(auto &alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            return 1;
            break;
        }
    }

    return 0;
}

void profesor::asignarNota(float nota, int dni){
    this->search(dni).getNotas().push_back(nota);
}

float profesor::notaMedia(int dni){
    float suma = 0;
    int num_notas = 0;


    for(auto nota: this->search(dni).getNotas()){
        num_notas += 1;
        suma = suma + nota;
    }

    return suma / num_notas;
}

void profesor::imprimeAlumno(int dni){

    cout << "-------------------------------" << endl;
    cout << search(dni).getNombre() << " " << search(dni).getApellido() << " DNI: " << search(dni).getDNI() << endl;
    search(dni).imprimeNotas();
    cout << "Nota media: " << this->notaMedia(search(dni).getDNI()) << endl;
    cout << "-------------------------------" << endl;

}

void profesor::imprimeAlumnos(){
    for(auto &alumno: this->alumnos){
        cout << alumno.getNombre() << " " << alumno.getApellido() << " DNI: " << alumno.getDNI() << endl;
        cout << "Notas: " << endl;
        alumno.imprimeNotas();
        cout << "Nota media: " << this->notaMedia(alumno.getDNI()) << endl;
        cout << "-------------------------------" << endl;
    }
}

void profesor::imprimeMejor(){
    estudiante *mejor_alumno;

    int max = 0;

    for(auto &alumno: this->alumnos){
        if(this->notaMedia(alumno.getDNI()) > max && alumno.getNotas().size() == 3){
            max = this->notaMedia(alumno.getDNI());
            mejor_alumno = &alumno;
        }
    }

    cout << "-------------------------------" << endl;
    cout << "Mejor alumno:" << endl;
    cout << mejor_alumno->getNombre() << " " << mejor_alumno->getApellido() << " DNI: " << mejor_alumno->getDNI() << endl;
    mejor_alumno->imprimeNotas();
    cout << "Nota media: " << this->notaMedia(mejor_alumno->getDNI()) << endl;
    cout << "-------------------------------" << endl;
}




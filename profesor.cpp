#include "profesor.h"

#include <iostream>

#include <vector>

using namespace std;

profesor::profesor(string nombre, string apellido, int dni)
{
    persona(nombre, apellido, dni);
}

profesor::~profesor(){}

void profesor::addAlumno(string nombre, string apellido, int dni){
   estudiante alumno(nombre, apellido, dni);

   this->alumnos.push_back(alumno);
}

estudiante profesor::search(int dni){
    for(auto alumno: this->alumnos){
        if (alumno.getDNI() == dni){
            return alumno;
        } else{
            return NULL;
        }
    }
}

void profesor::asignarNota(float nota, int dni){
    this->search(dni).getNotas().push_back(nota);
}

float profesor::notaMedia(int dni){
    float suma = 0;

    int num_notas = 0;

    for(auto nota: this->search(dni).getNotas()){
        suma += nota;
    }

    return suma / num_notas;
}

void profesor::imprimeAlumnos(){
    for(auto alumno: this->alumnos){
        cout << "-------------------------------" << endl;
        cout << alumno.getNombre() << " " << alumno.getApellido() << " DNI: " << alumno.dni << endl;
        cout << "Notas: " << alumno.imprimeNotas() << endl;
        cout << "Nota media: " << this->notaMedia(alumno.dni) << endl;
        cout << "-------------------------------" << endl;
    }
}

estudiante profesor::mejorEstudiante(){
    int max = 0;
    int dni = 0;

    for(auto alumno: this->alumnos){
        if(this->notaMedia(alumno.getDNI()) > max && alumno.getNotas().size() == 3){
            max = this->notaMedia(alumno.getDNI());
            dni = alumno.getDNI();
        }
    }

    return this->search(dni);
}

void profesor::imprimeMejor(){
    cout << "-------------------------------" << endl;
    cout << "Mejor alumno" << endl;
    cout << alumno.getNombre() << " " << alumno.getApellido() << " DNI: " << alumno.dni << endl;
    cout << "Notas: " << alumno.imprimeNotas() << endl;
    cout << "Nota media: " << this->notaMedia(alumno.dni) << endl;
    cout << "-------------------------------" << endl;
}




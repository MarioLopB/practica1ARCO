#include "profesor.h"

#include "estudiante.h"

#include <iostream>

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

void profesor::asignarNota(float nota, int dni){

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


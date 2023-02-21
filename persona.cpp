#include "persona.h"

#include <iostream>

using namespace std;

persona::persona(string nombre, string apellido, int dni)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;

}

persona::~persona(){}

string getNombre(){
    return this->nombre;
}

string getApellido(){
    return this->apellido;
}

int getDNI(){
    return this->dni;
}

#include "persona.h"

#include <iostream>

using namespace std;

persona::persona()
{

}

persona::persona(string nombre, string apellido, int dni)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;

}

persona::~persona(){}

void persona::setNombre(string nombre){
    this->nombre = nombre;
}

void persona::setApellido(string apellido){
    this->apellido = apellido;
}

void persona::setDNI(int dni){
    this->dni = dni;
}

string persona::getNombre(){
    return this->nombre;
}

string persona::getApellido(){
    return this->apellido;
}

int persona::getDNI(){
    return this->dni;
}

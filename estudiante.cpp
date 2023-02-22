#include "estudiante.h"

#include <list>

#include <iostream>

using namespace std;

estudiante::estudiante()
{

}

estudiante::estudiante(string nombre, string apellido, int dni)
{
    persona(nombre, apellido, dni);
}

estudiante::~estudiante()
{

}

list<float> notas;

vector<float> estudiante::getNotas()
{
    return this->notas;
}

void estudiante::imprimeNotas()
{
    cout << "Notas";

    for(auto nota: this->notas)
    {
        cout << nota << " ";
    }
}





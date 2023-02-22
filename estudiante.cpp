#include "estudiante.h"

#include <vector>

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

vector<float*> estudiante::getNotas()
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





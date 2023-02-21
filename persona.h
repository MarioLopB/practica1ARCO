#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class persona
{
public:
    persona();

    string getNombre();

    string getApellido();

    int getDNI();

private:
    string nombre, apellido;
    int dni;
};

#endif // PERSONA_H

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class persona
{
public:
    persona();

    persona(string nombre, string apellido, int dni);

    ~persona(void);

    void setNombre(string nombre);

    void setApellido(string apellido);

    void setDNI(int dni);

    string getNombre();

    string getApellido();

    int getDNI();

private:
    string nombre, apellido;
    int dni;
};

#endif // PERSONA_H

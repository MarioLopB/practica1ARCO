#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"

#include <vector>

#include <iostream>

using namespace std;

class estudiante : public persona
{
private:
    vector<float*> notas;

public:
    estudiante();

    estudiante(string nombre, string apellido, int dni);

    ~estudiante(void);

    vector<float*> getNotas();

    void imprimeNotas();
};

#endif // ESTUDIANTE_H

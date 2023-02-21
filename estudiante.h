#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"

#include <vector>

#include <iostream>

using namespace std;

class estudiante : public persona
{
private:
    vector<float> notas;

public:
    estudiante();

    vector getNotas();

    void imprimeNotas();
};

#endif // ESTUDIANTE_H

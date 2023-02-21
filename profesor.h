#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include "estudiante.h"

#include <vector>

#include <iostream>

using namespace std;


class profesor : public persona
{
private:
    vector<estudiante> alumnos;

public:
    profesor();

    void addAlumno(string nombre, string apellido, int dni);

    void asignarNota();

    float notaMedia();

    void imprimeAlumnos();

    void imprimeMejor();

};

#endif // PROFESOR_H

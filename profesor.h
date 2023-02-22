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

    estudiante search(int dni);

    void asignarNota(float nota, int dni);

    float notaMedia(int dni);

    void imprimeAlumnos();

    estudiante mejorEstudiante();

    void imprimeMejor();

};

#endif // PROFESOR_H

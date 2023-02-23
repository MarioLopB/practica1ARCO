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

    profesor(string nombre, string apellido, int dni);

    ~profesor(void);

    void addAlumno(string nombre, string apellido, int dni);

    estudiante& search(int dni);

    void asignarNota(float nota, int dni);

    float notaMedia(int dni);

    void imprimeAlumno(int dni);

    void imprimeAlumnos();

    void imprimeMejor();

};

#endif // PROFESOR_H

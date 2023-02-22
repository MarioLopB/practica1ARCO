#include "mainwindow.h"

#include <QApplication>

#include "persona.h"
#include "estudiante.h"
#include "profesor.h"

#include <vector>

#include <iostream>

using namespace std;

void imprimeProfesor(profesor *profe)
{
    cout << profe.getNombre() << " " << profe.getApellido() << " DNI: " << profe.getDNI() << endl;

    profe->imprimeAlumnos();

    profe->imprimeMejor();
}

int main()
{
    vector<profesor> profesores;

    profesores[0] = new profesor("David", "Martínez Martínez", 1234567);

    profesores[0].addAlumno("Diego", "Rivas Rodríguez", 2345678);

    profesores[0].asignarNota(7.5, 2345678);
    profesores[0].asignarNota(7, 2345678);
    profesores[0].asignarNota(8.9, 2345678);

    imprimeProfesor(profesores[0]);
}


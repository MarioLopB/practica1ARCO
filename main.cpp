#include "mainwindow.h"

#include <QApplication>

#include <list>

class Persona {
public:
    string nombre, apellido, DNI;
};

class Estudiante: private Persona
{
    list<int> notas;
};

class Profesor: private Persona
{
    list<Estudiante> alumnos;
};

int main()
{

}


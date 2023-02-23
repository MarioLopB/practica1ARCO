#include "persona.h"
#include "estudiante.h"
#include "profesor.h"

#include <vector>

#include <iostream>

using namespace std;

void imprimeProfesor(profesor profe)
{
    cout << "PROFESOR:" << endl;
    cout << profe.getNombre() << " " << profe.getApellido() << " DNI: " << profe.getDNI() << endl;

    cout << "-------------------------------" << endl;

    profe.imprimeAlumnos();

    profe.imprimeMejor();
}

int main()
{

    vector<profesor> profesores;

    profesor *profe1 = new profesor();

    profe1->setNombre("David");
    profe1->setApellido("Martínez Martínez");
    profe1->setDNI(1234567);

    profesores.push_back(*profe1);

    profesores[0].addAlumno("Diego", "Rivas Rodríguez", 2345678);

    float nota1 = 7.5f;
    profesores[0].asignarNota(nota1, 2345678);
    float nota2 = 7.0f;
    profesores[0].asignarNota(nota2, 2345678);
    float nota3 = 8.9f;
    profesores[0].asignarNota(nota3, 2345678);

    imprimeProfesor(profesores[0]);

    profesores[0].imprimeAlumno(2345678);
}


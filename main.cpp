#include "persona.h"
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

    cout << endl;

    profe.imprimeMejor();

    cout << endl;
}

int main()
{

    vector<profesor> profesores;

    //Profesor 1
    profesor *profe1 = new profesor();

    profe1->setNombre("David");
    profe1->setApellido("Martínez Martínez");
    profe1->setDNI(1234567);

    profesores.push_back(*profe1);

    //Alumno 1
    profesores[0].addAlumno("Diego", "Rivas Rodríguez", 2345678);
    profesores[0].asignarNota(7.5f, 2345678);
    profesores[0].asignarNota(7.0f, 2345678);
    profesores[0].asignarNota(8.9f, 2345678);

    //Alumno 2
    profesores[0].addAlumno("Daniel", "Rivas Rodríguez", 2345679);
    profesores[0].asignarNota(4.0f, 2345679);
    profesores[0].asignarNota(2.6f, 2345679);

    //Alumno 3
    profesores[0].addAlumno("Francisco", "Rivera Rodríguez", 2345680 );
    profesores[0].asignarNota(10.0f, 2345680);

    //Alumno 4
    profesores[0].addAlumno("Ángela", "de la Riva Rodríguez", 2345682);
    profesores[0].asignarNota(9.0f, 2345682);
    profesores[0].asignarNota(10.0f, 2345682);

    //Alumno 5
    profesores[0].addAlumno("Esther", "Díaz Fernández", 2345690);
    profesores[0].asignarNota(2.0f, 2345690);
    profesores[0].asignarNota(6.0f, 2345690);
    profesores[0].asignarNota(4.0f, 2345690);

    //Profesor 2
    profesor *profe2 = new profesor();

    profe2->setNombre("Ramón");
    profe2->setApellido("Fernández Díaz");
    profe2->setDNI(1234568);

    profesores.push_back(*profe2);

    //Alumno 6
    profesores[1].addAlumno("Laura", "Gómez García", 2345578);
    profesores[1].asignarNota(8.5f, 2345578);

    //Alumno 7
    profesores[1].addAlumno("Ignacio", "Fernández Robles", 2345579);
    profesores[1].asignarNota(8.0f, 2345579);
    profesores[1].asignarNota(9.5f, 2345579);

    //Alumno 8
    profesores[1].addAlumno("María", "Rivera Rodríguez", 2345580);
    profesores[1].asignarNota(10.0f, 2345580);
    profesores[1].asignarNota(10.0f, 2345580);
    profesores[1].asignarNota(2.0f, 2345580);

    //Alumno 9
    profesores[1].addAlumno("Víctor", "Cisneros Conde", 2345582);
    profesores[1].asignarNota(5.0f, 2345582);
    profesores[1].asignarNota(4.0f, 2345582);

    //Alumno 10
    profesores[1].addAlumno("Kevin", "Sánchez Díaz", 2345590);
    profesores[1].asignarNota(2.0f, 2345590);
    profesores[1].asignarNota(6.0f, 2345590);
    profesores[1].asignarNota(4.0f, 2345590);

    //Profesor 3
    profesor *profe3 = new profesor();

    profe3->setNombre("Lidia");
    profe3->setApellido("Núñez Sánchez");
    profe3->setDNI(1934567);

    profesores.push_back(*profe3);

    //Alumno 11
    profesores[2].addAlumno("Diego", "Martínez Carrera", 2945678);
    profesores[2].asignarNota(2.0f, 2945678);
    profesores[2].asignarNota(2.0f, 2945678);
    profesores[2].asignarNota(2.0f, 2945678);


    //Alumno 12
    profesores[2].addAlumno("Olga", "García García", 2945679);
    profesores[2].asignarNota(2.5f, 2945679);

    //Alumno 13
    profesores[2].addAlumno("Vanessa", "De la Torre López", 2945680);
    profesores[2].asignarNota(10.0f, 2945680);

    //Alumno 14
    profesores[2].addAlumno("Rogelio", "Alonso Morales", 2945682);
    profesores[2].asignarNota(9.0f, 2945682);
    profesores[2].asignarNota(10.0f, 2945682);

    //Alumno 15
    profesores[2].addAlumno("Sergio", "García Alonso", 2945690);
    profesores[2].asignarNota(2.0f, 2945690);
    profesores[2].asignarNota(6.0f, 2945690);
    profesores[2].asignarNota(1.0f, 2945690);

    for(auto &profe: profesores){
        imprimeProfesor(profe);

        cout << endl;
    }

    int dni = -1;

    while(dni != 0){
        cout << "Por favor, introduzca un DNI (número de 8 cifras) sin letra" << endl;
        cout << "Si desea salir de la aplicación introduzca un 0" << endl;
        dni = cin.get();
        cout << endl;

        int exist = 0;

        if(dni != 0){
            for(auto &profe: profesores){
                if(profe.getDNI()==dni){
                    imprimeProfesor(profe);
                    exist = 1;
                    break;
                } else if(profe.existEstudiante(dni)==1){
                    profe.imprimeAlumno(dni);
                    exist = 1;
                    break;
                }
            }

            if(exist == 0){
                cout << "El DNI introducido no pertenece a ningun alumno o profesor" << endl;
            }
        }
    }

    return 0;
}


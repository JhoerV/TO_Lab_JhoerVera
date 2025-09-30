#include <iostream>
#include "Profesor.h"
#include "Estudiante.h"
#include "Curso.h"
#include "Horario.h"
#include "Universidad.h"
#include "Reporte.h"
using namespace std;

int main() {
    // Profesores
    Profesor prof1("Carlos", 45, "Matemáticas");
    Profesor prof2("Ana", 38, "Programación");

    // Estudiantes
    Estudiante est1("Luis", 20, "E001");
    Estudiante est2("María", 22, "E002");
    Estudiante est3("Pedro", 19, "E003");

    // Cursos con horarios
    Curso* curso1 = new Curso("POO", new Horario("Lunes", "10:00 AM"));
    Curso* curso2 = new Curso("Bases de Datos", new Horario("Miércoles", "2:00 PM"));

    // Universidad
    Universidad uni("UNSA");
    uni.agregarCurso(curso1);
    uni.agregarCurso(curso2);

    // Reporte de un estudiante
    Reporte reporte;
    reporte.generarReporte(est1);

    // Mostrar datos
    cout << "\nProfesores:\n";
    cout << prof1.toString() << endl;
    cout << prof2.toString() << endl;

    cout << "\nEstudiantes:\n";
    cout << est1.toString() << endl;
    cout << est2.toString() << endl;
    cout << est3.toString() << endl;

    cout << "\n" << uni.toString() << endl;

    // liberar memoria de cursos (horarios se destruyen en ~Curso)
    delete curso1;
    delete curso2;

    return 0;
}

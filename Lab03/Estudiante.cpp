#include "Estudiante.h"

Estudiante::Estudiante(string nombre, int edad, string codigo)
    : Persona(nombre, edad) {
    this->codigo = codigo;
}

string Estudiante::getCodigo() const { return codigo; }
void Estudiante::setCodigo(string codigo) { this->codigo = codigo; }

string Estudiante::toString() const {
    return "Estudiante -> " + Persona::toString() + ", Código: " + codigo;
}

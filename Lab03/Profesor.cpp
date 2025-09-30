#include "Profesor.h"

Profesor::Profesor(string nombre, int edad, string especialidad)
    : Persona(nombre, edad) {
    this->especialidad = especialidad;
}

string Profesor::getEspecialidad() const { return especialidad; }
void Profesor::setEspecialidad(string especialidad) { this->especialidad = especialidad; }

string Profesor::toString() const {
    return "Profesor -> " + Persona::toString() + ", Especialidad: " + especialidad;
}

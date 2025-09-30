#include "Persona.h"

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

string Persona::getNombre() const { return nombre; }
void Persona::setNombre(string nombre) { this->nombre = nombre; }
int Persona::getEdad() const { return edad; }
void Persona::setEdad(int edad) { this->edad = edad; }

string Persona::toString() const {
    return "Nombre: " + nombre + ", Edad: " + to_string(edad);
}

#include "Curso.h"

Curso::Curso(string nombre, Horario* horario) {
    this->nombre = nombre;
    this->horario = horario;
}

Curso::~Curso() {
    delete horario; // composición → si el curso muere, el horario también
}

string Curso::getNombre() const { return nombre; }
void Curso::setNombre(string nombre) { this->nombre = nombre; }
Horario* Curso::getHorario() const { return horario; }
void Curso::setHorario(Horario* horario) { this->horario = horario; }

string Curso::toString() const {
    return "Curso: " + nombre + " | " + horario->toString();
}

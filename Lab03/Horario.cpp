#include "Horario.h"

Horario::Horario(string dia, string hora) {
    this->dia = dia;
    this->hora = hora;
}

string Horario::getDia() const { return dia; }
void Horario::setDia(string dia) { this->dia = dia; }
string Horario::getHora() const { return hora; }
void Horario::setHora(string hora) { this->hora = hora; }

string Horario::toString() const {
    return "Día: " + dia + ", Hora: " + hora;
}

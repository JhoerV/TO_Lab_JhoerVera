#include "Universidad.h"

Universidad::Universidad(string nombre) {
    this->nombre = nombre;
}

void Universidad::agregarCurso(Curso* curso) {
    cursos.push_back(curso);
}

vector<Curso*> Universidad::getCursos() const {
    return cursos;
}

string Universidad::toString() const {
    string resultado = "Universidad: " + nombre + "\nCursos:\n";
    for (auto curso : cursos) {
        resultado += " - " + curso->toString() + "\n";
    }
    return resultado;
}

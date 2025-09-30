#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <string>
#include <vector>
#include "Curso.h"
using namespace std;

class Universidad {
private:
    string nombre;
    vector<Curso*> cursos; // agregación

public:
    Universidad(string nombre);
    void agregarCurso(Curso* curso);
    vector<Curso*> getCursos() const;
    string toString() const;
};

#endif

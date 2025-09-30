#ifndef CURSO_H
#define CURSO_H
#include <string>
#include "Horario.h"
using namespace std;

class Curso {
private:
    string nombre;
    Horario* horario; // Composición

public:
    Curso(string nombre, Horario* horario);
    ~Curso(); // destructor para liberar memoria
    string getNombre() const;
    void setNombre(string nombre);
    Horario* getHorario() const;
    void setHorario(Horario* horario);
    string toString() const;
};

#endif

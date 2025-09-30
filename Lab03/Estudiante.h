#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Persona.h"

class Estudiante : public Persona {
private:
    string codigo;

public:
    Estudiante(string nombre, int edad, string codigo);
    string getCodigo() const;
    void setCodigo(string codigo);
    string toString() const override;
};

#endif

#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"

class Profesor : public Persona {
private:
    string especialidad;

public:
    Profesor(string nombre, int edad, string especialidad);
    string getEspecialidad() const;
    void setEspecialidad(string especialidad);
    string toString() const override;
};

#endif

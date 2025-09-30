#include "Reporte.h"

void Reporte::generarReporte(const Estudiante& estudiante) {
    cout << "=== REPORTE DE ESTUDIANTE ===" << endl;
    cout << estudiante.toString() << endl;
}

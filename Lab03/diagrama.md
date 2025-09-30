```mermaid
classDiagram
    class Persona {
      - string nombre
      - int edad
      + getNombre()
      + setNombre()
      + getEdad()
      + setEdad()
      + toString()
    }

    class Profesor {
      - string especialidad
      + getEspecialidad()
      + setEspecialidad()
      + toString()
    }

    class Estudiante {
      - string codigo
      + getCodigo()
      + setCodigo()
      + toString()
    }

    class Horario {
      - string dia
      - string hora
      + getDia()
      + setDia()
      + getHora()
      + setHora()
      + toString()
    }

    class Curso {
      - string nombre
      - Horario horario
      + getNombre()
      + setNombre()
      + getHorario()
      + setHorario()
      + toString()
    }

    class Universidad {
      - string nombre
      - List~Curso~ cursos
      + agregarCurso()
      + getCursos()
      + toString()
    }

    class Reporte {
      + generarReporte(Estudiante)
    }

    Persona <|-- Profesor
    Persona <|-- Estudiante
    Curso *-- Horario : composición
    Universidad o-- Curso : agregación
    Reporte ..> Estudiante : dependencia

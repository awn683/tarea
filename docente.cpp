#include "Persona.h"

class Docente : public Persona {
private:
    string codigo;
    string nit;
    float salario;
    string profesion;

public:
    Docente();

    void setDatos(string c, string n, float s, string p);
    void getDatos();
    void leerDocente();
};

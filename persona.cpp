#include <iostream>
using namespace std;

class Persona {
protected:
    string cui;
    string nombres;
    string apellidos;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    bool genero;

public:
    Persona();

    void crear();
    void leer();
    void actualizar();
    void borrar();
};

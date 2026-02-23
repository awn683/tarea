#include "Persona.h"

class Estudiante : public Persona {
private:
    string carnet;

public:
    Estudiante();

    void setCarnet(string c);
    void getCarnet();
    void leerEstudiante();
};

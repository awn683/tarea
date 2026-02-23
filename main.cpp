#include "Persona.h"
#include "Docente.h"
#include "Estudiante.h"

// ================= PERSONA =================

Persona::Persona() {
    cui = "";
    nombres = "";
    apellidos = "";
    direccion = "";
    telefono = 0;
    fecha_nacimiento = "";
    genero = true;
}

void Persona::crear() {
    cout << "Ingrese CUI: ";
    cin >> cui;
    cout << "Ingrese nombres: ";
    cin >> nombres;
    cout << "Ingrese apellidos: ";
    cin >> apellidos;
    cout << "Ingrese direccion: ";
    cin >> direccion;
    cout << "Ingrese telefono: ";
    cin >> telefono;
    cout << "Ingrese fecha de nacimiento: ";
    cin >> fecha_nacimiento;
    cout << "Genero (1=Masculino, 0=Femenino): ";
    cin >> genero;
}

void Persona::leer() {
    cout << "\n--- Datos Persona ---\n";
    cout << "CUI: " << cui << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Fecha Nacimiento: " << fecha_nacimiento << endl;
    cout << "Genero: " << (genero ? "Masculino" : "Femenino") << endl;
}

void Persona::actualizar() {
    crear();
}

void Persona::borrar() {
    cui = "";
    nombres = "";
    apellidos = "";
    direccion = "";
    telefono = 0;
    fecha_nacimiento = "";
    genero = true;
}

// ================= DOCENTE =================

Docente::Docente() {
    codigo = "";
    nit = "";
    salario = 0;
    profesion = "";
}

void Docente::setDatos(string c, string n, float s, string p) {
    codigo = c;
    nit = n;
    salario = s;
    profesion = p;
}

void Docente::getDatos() {
    leer();
    cout << "\n--- Datos Docente ---\n";
    cout << "Codigo: " << codigo << endl;
    cout << "NIT: " << nit << endl;
    cout << "Salario: " << salario << endl;
    cout << "Profesion: " << profesion << endl;
}

void Docente::leerDocente() {
    crear();
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese NIT: ";
    cin >> nit;
    cout << "Ingrese salario: ";
    cin >> salario;
    cout << "Ingrese profesion: ";
    cin >> profesion;
}

// ================= ESTUDIANTE =================

Estudiante::Estudiante() {
    carnet = "";
}

void Estudiante::setCarnet(string c) {
    carnet = c;
}

void Estudiante::getCarnet() {
    leer();
    cout << "\n--- Datos Estudiante ---\n";
    cout << "Carnet: " << carnet << endl;
}

void Estudiante::leerEstudiante() {
    crear();
    cout << "Ingrese carnet: ";
    cin >> carnet;
}

// ================= MAIN =================

int main() {

    Docente d;
    Estudiante e;

    cout << "=== DOCENTE ===\n";
    d.leerDocente();
    d.getDatos();

    cout << "\n=== ESTUDIANTE ===\n";
    e.leerEstudiante();
    e.getCarnet();

    return 0;
}

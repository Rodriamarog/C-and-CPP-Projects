#include <iostream>
#include <string>
using namespace std;

class Empleado{
public:
    int ID;
    string nombre;

    // Constructor
    Empleado(int ID, string nombre){
        this -> ID = ID;
        this -> nombre = nombre;
    }

    // Sets y gets
    void setID(int ID){
        this -> ID = ID;
    }

    void setNombre(string nombre){
        this -> nombre = nombre;
    }

    int getID(){return ID;}

    string getNombre(){return nombre;}
};

class EmpleadoTiempoCompleto : public Empleado{
public:
    int salario_comp;

    // Constructor
    EmpleadoTiempoCompleto(int ID, string nombre, int salario_comp) : Empleado(ID, nombre) {
        this -> salario_comp = salario_comp;
    }

    // Sets y gets
    void setSalario(int salario_comp){this -> salario_comp = salario_comp;}
    int getSalario(){return salario_comp;}
};

class EmpleadoMedioTiempo : public Empleado{
public:
    int salario_med;

    // Constructor
    EmpleadoMedioTiempo(int ID, string nombre, int salario_med) : Empleado(ID, nombre) {
        this -> salario_med = salario_med;
    }

    // Sets y gets
    void setSalarioMed(int salario_med){this -> salario_med = salario_med;}
    int getSalarioMed(){return salario_med;}
};

int main(){
    EmpleadoTiempoCompleto woody(5, "woody", 50000);
    EmpleadoMedioTiempo buzz(6, "buzz", 25000);

    cout << woody.getNombre() << " " << woody.getID() << " tiene salario de: " << woody.getSalario() << endl;
    cout << buzz.getNombre() << " " << buzz.getID() << " tiene salario de: " << buzz.getSalarioMed() << endl;
    return 0;
}

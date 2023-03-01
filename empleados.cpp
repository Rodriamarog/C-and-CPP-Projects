dv#include <iostream>
#include "empleados.h"
using namespace std;
//Consructor y destructor
Empleados::Empleados(){
  nombre = " ";
  salario = 0;
  num_empleado = 0;
}
Empleados::~Empleados(){
  cout << "Destructor de empleado #" << num_empleado << endl;
}

//Sets y gets
void Empleados::setNombre(string nombre){
  this -> nombre = nombre;
}
void Empleados::getNombre(){
  cout << nombre;
}

void Empleados::setNumEmpleado(int num_empleado){
  this -> num_empleado = num_empleado;
}
void Empleados::getNumEmpleado(){
  cout << num_empleado;
}

void Empleados::setSalario(double salario){
  while (salario <= 0){
    salario = 0;
    cout << "ERROR: El salario no puede ser menor o igual a 0, dime un salario valido: ";
    cin >> salario;
  }
  this -> salario = salario;
  
}
void Empleados::getSalario(){
  cout << salario;
}

//Funcion importante
double Empleados::salarioAnual(){
  double salario_anual = salario * 12;
  return salario_anual;
} 

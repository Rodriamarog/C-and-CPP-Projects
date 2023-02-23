#include "libreria.h" 
#include <iostream>
#include <string>
using namespace std;

//constructor y destructor
Factura::Factura(){
this -> num_parte = 1;
this -> desc_articulo = "Calculadora";
this ->cantidad = 0;
this ->precio = 300; 
}

Factura::~Factura(){
  cout << "Destructor funciona" << endl;
}

//Sets y gets
void Factura::setNumParte(int num_parte){
  this -> num_parte = num_parte;
}

void Factura::getNumParte(){
  cout << "El num de parte es: " << num_parte << endl;
}

void Factura::setDescArticulo(string desc_articulo){
  this -> desc_articulo = desc_articulo;
}
void Factura::getDescArticulo(){
  cout << "La desc del articulo es: "<< desc_articulo << endl;
}

void Factura::setCantidad(){
  int cantidad = 0;
  cout << "Dime la cantidad de " << desc_articulo << "s que desea comprar: " << endl;
  cin >> cantidad;
  this -> cantidad = cantidad;
  if (cantidad <= 0){
    do {
      cout << "ERROR: cantidad no puede ser 0, dime una cantidad mayor a 0" << endl;
      cin >> cantidad;
      this -> cantidad = cantidad;
    }
      while ( cantidad <= 0);
  }
}

void Factura::getCantidad(){
  cout << "La cantidad a comprar es: " << cantidad << endl;
}

void Factura::setPrecio(int precio){
  this -> precio = precio;
  if (precio <= 0){
    do {
      cout << "ERROR: precio unitario no puede ser 0, dime un precio mayor a 0" << endl;
      cin >> precio;
      this -> precio = precio;
    }
      while (precio <= 0);
  }
}

void Factura::getPrecio(){
  cout << "El precio unitario es de: " << precio << endl;
}

//Funcion Importante
int Factura::MontoCobrar(){
  int total = cantidad*precio;
  cout <<"---FACTURA---"<< endl << "El monto a cobrar es: $" << total << " pesos." << endl;
  return total;
}

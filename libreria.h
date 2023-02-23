#include <string>
using namespace std;
#ifndef CREATE_H
#define CREATE_H

class Factura{
private:
int num_parte;
string desc_articulo;
int cantidad;
int precio;

public:
//constructor y destructor
Factura();
~Factura();

//Sets y gets
void setNumParte(int);
void getNumParte();

void setDescArticulo(string);
void getDescArticulo();

void setCantidad();
void getCantidad();

void setPrecio(int);
void getPrecio();

//Funcion Importante
int MontoCobrar();
};
#endif

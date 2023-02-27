#include <string>
#include <iostream>
#include "rcm_imc.h"
using namespace std;

//Constructores y destructores
Paciente::Paciente(){
  nombre = " ";
  genero = " ";
  edad = 0;
  peso = 0;
  rc = 0;
  altura = 0;
}
Paciente::~Paciente(){
  cout << "Se destruye el objeto con nombre: " << nombre << endl;
}

//Sets y gets
void Paciente::setNombre(string nombre){
  this -> nombre = nombre;
}
string Paciente::getNombre(){
  return nombre;
}

void Paciente::setGenero(string genero){
  this -> genero = genero;
}
string Paciente::getGenero(){
  return genero;
}

void Paciente::setEdad(int edad){
  this -> edad = edad;
}
int Paciente::getEdad(){
  return edad;
}

void Paciente::setPeso(double peso){
  this -> peso = peso;
}
double Paciente::getPeso(){return peso;}

void Paciente::setRC(double rc){
  this -> rc = rc;
}
double Paciente::getRC(){return rc;}

void Paciente::setAltura(double altura){
  this -> altura = altura;
}
double Paciente::getAltura(){return altura;}

//Funciones importantes
//La clase debe calcular y regresar el ritmo cardiaco máximo (RCM = 220-edad para hombres y RCM= 227-edad para mujeres).
int Paciente::RCM(){
  int rcm = 0;
  if (genero == "hombre"){
    rcm = 220-edad;
  }else if(genero == "mujer"){
    rcm = 227-edad;
  }
  return rcm;
}

//Otra función que calcule y regrese el ritmo cardiaco objetivo (rango del ritmo que debería detener (Rango: RCM*0.5– RCM*0.85)
void Paciente::RCO(double rcm){
  cout << "El ritmo cardiaco objetivo es de: " << rcm*0.5 << "-" << rcm*0.85 << endl;
}

//Una función que calcule y regrese el índice de masa corporal (IMC = peso/altura2) , indicandodentro de qué nivel se encuentra.
double Paciente::IMC(){
  double imc = peso/(altura*altura);
  if (imc < 18.5){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de PESO BAJO";
  }
  else if(imc < 25){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de PESO IDEAL";
  }
  else if(imc < 30){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de SOBREPESO";
}
  else if(imc < 35){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de OBESIDAD";
    }
  else if(imc <= 40){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de OBESIDAD SEVERA";
    }
  else if(imc > 40){
    cout << "Su IMC es de: " << imc << ". Se encuentra en el rango de OBESIDAD MORBIDA";
    }
return imc;
  }

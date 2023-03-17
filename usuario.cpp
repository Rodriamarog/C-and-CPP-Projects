#include <string>
#include <iostream>
#include "usuario.h" 

Usuario::Usuario() {
  nombre = "";
  direccion = "";
  telefono = 0;
  ID = 0;
}

Usuario::~Usuario() {
  std::cout << "Destructor clase USUARIO\n" << std::endl;
}

//FUNCIONES SET
void Usuario::setNombre(std::string nombre){
  this->nombre = nombre.substr(0, 20);
}
void Usuario::setDireccion(std::string direccion){
  this->direccion = direccion.substr(0, 20);
}
void Usuario::setTelefono(int telefono){
  std::string telefonoStr = std::to_string(telefono);
  while (telefonoStr.length() != 10) {
    std::cout << "Error: el telefono debe tener exactamente 10 digitos. Intente nuevamente." << std::endl;
    std::cin >> telefonoStr;
  }
  for (char c : telefonoStr) {
    if (!isdigit(c)) {
      std::cout << "Error: el telefono debe contener solo digitos. Intente nuevamente." << std::endl;
      setTelefono(0); // Call the function again with a 0 argument to prompt the user to try again
      return;
    }
  }
  this->telefono = std::stoi(telefonoStr);
}
void Usuario::setID(int ID){
  this-> ID = ID;
}

//FUNCIONES GET
std::string Usuario::getNombre() const {
  return nombre;
}
std::string Usuario::getDireccion() const {
  return direccion;
}
int Usuario::getTelefono() const {
  return telefono;
}
int Usuario::getID() const {
  return ID;
}
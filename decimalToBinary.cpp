#include <iostream>
#include "libreria.h"
#include <math.h>
using namespace std;

//Constructor y Destructor
Binario::Binario(){
  cout << "Constructor funciona" << endl;
}
Binario::~Binario(){
  cout << "Destructor funciona" << endl;
}

//Set y get
void Binario::setDec(int dec){
  this -> dec = dec;
}
void Binario::getDec(){
  cout << dec << endl;
}

void Binario::setBin(int bin){
  this -> bin = bin;
}
void Binario::getBin(){
  cout << bin << endl;
}

//Funciones importantes
//funcion para convertir de binario a decimal
void Binario::bin_to_dec(){
  int power = 0;
  int bin1 = bin;
  int decimal = 0;
  while (bin1 > 0){
    if (bin1%10 == 1){
      decimal += pow(2,power);
    }
    power += 1;
    bin1 /= 10;
  }
  cout << decimal << endl;
}

//funcion para convertir de decimal a binario
void Binario::dec_to_bin(){
  int dec1 = dec;
  int binario[16];
  int counter = 0;
  while (dec1 > 0){
    binario[counter] = dec1 % 2;
    dec1 /= 2;
    counter += 1;
  }
  for (int i = counter-1; i >= 0; i--){
    cout << binario[i];
  }
  cout << endl;
}
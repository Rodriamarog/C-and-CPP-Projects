#include <iostream>
#include "libreria.h"

int main() {
  Factura usuario1;
  usuario1.getDescArticulo();
  usuario1.setCantidad();

  usuario1.getDescArticulo();
  usuario1.getCantidad();
  usuario1.getNumParte();
  usuario1.getPrecio();

  usuario1.MontoCobrar();
  return 0;
}

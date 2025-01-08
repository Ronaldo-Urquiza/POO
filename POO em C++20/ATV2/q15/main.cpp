//
// Created by Ronaldo Urquiza on 30/11/2024.
//

#include "ViraTempo.h"
#include <iostream>
using namespace std;

int main() {
  ViraTempo vt(5);
  vt.mostrarTempo();//0
  vt.avancarTempo();//0+1
  vt.mostrarTempo();//1
  vt.virarTempo();//<-
  vt.avancarTempo();//1-1
  vt.mostrarTempo();//0
  vt.virarTempo();//->

  for (int i = 0; i < 6; i++){
	vt.avancarTempo(); // 0+1 1+1 2+1 3+1 4+1 5+1
	vt.mostrarTempo(); // 1 2 3 4 5 5 (continua pois limite é 5)
  }

  vt.virarTempo(); //<-

  for (int i = 0; i < 7; i++){
	vt.avancarTempo();
	vt.mostrarTempo();
  }

  return 0;
}

/*
A saída esperada é:
0
1
0
1
2
3
4
5
5
4
3
2
1
0
0
0

*/
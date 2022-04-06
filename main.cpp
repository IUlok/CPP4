#include <iostream>
using namespace std;
#include "header.h"
#include "release.cpp"

int main() {
  matrix pepe;
  float m[4][4];
  cout << "Enter matrix m[4][4]:" << endl;
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      cout << "m[" << i << "][" << j << "]: ";
      cin >> m[i][j];
    }
  }
  cout << "Matrix:" << endl;
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      cout << m[i][j] << "\t";
    }
    cout << endl;
  }
  trans_m(m);
  mult_m(m);
  pepe.getPepe();
  return 0;
}
//тут должно быть меню с вызовами методов, хэдер должен вызываться только в релизе

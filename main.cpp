#include <iostream>
#include "release.cpp"
using namespace std;

int main() {
  matrix Matrix;
  float m[4][4];
  while (1) {
    int x;
    cout << "Enter the punct of menu:" << endl;
    cout << "1\tEnter the Matrix 4x4" << endl;
    cout << "2\tChange element of Matrix" << endl;
    cout << "3\tGet Transposed Matrix" << endl;
    cout << "4\tMultiplicate Matrix" << endl;
    cout << "5\tExit" << endl;
    cout << "Punct: ";
    cin >> x;
    switch (x) {
      case 1: m[4][4] = Matrix.SetMatrix(m);
      case 2: m[4][4] = Matrix.SetElem(m);
      case 3: m[4][4] = Matrix.GetTrans(m);
      case 4: m[4][4] = Matrix.GetMult(m);
      case 5: return 0;
    }
  }
}

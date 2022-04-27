#include <iostream>
#include "release.cpp"
using namespace std;

int main() {
  matrix Matrix;
  float m[4][4];
  for (int i = 0;i<4;i++) {
    for (int j=0;j<4;j++) {
      m[i][j]=0;
    }
  }
  while (1) {
    int x;
    cout << "Enter the punct of menu:" << endl;
    cout << "1\tEnter the Matrix 4x4" << endl;
    cout << "2\tChange element of Matrix" << endl;
    cout << "3\tGet Transposed Matrix" << endl;
    cout << "4\tMultiplicate Matrix" << endl;
    cout << "5\tCopy matrix" << endl;
    cout << "6\tExit" << endl;
    cout << "Punct: ";
    cin >> x;
    switch (x) {
      case 1: {m[4][4] = Matrix.setMatrix(m); break;}
      case 2: {m[4][4] = Matrix.setElem(m); break;}
      case 3: {m[4][4] = Matrix.getTrans(m); break;}
      case 4: {
        int num;
        cout << "Enter number for multiplication: " << endl;
        cout << "Number: ";
        cin >> num;
        m[4][4] = Matrix.getMult(m, num);
        break;
      }
      case 5: {
        matrix copyM=m;
        break;
      }
      case 6: return 0;
      default: cout << "Error: Uncorrect punct" << endl;
    }
  }
}

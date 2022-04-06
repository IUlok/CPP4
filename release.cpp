#include <iostream>
using namespace std;

class matrix {
private:

public:
  SetMatrix(float m[4][4]) {
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
    return m[4][4];
  }
  SetElem(float m[4][4]) {
    int x,y;
    cout << "Enter element to change: m[x][y]:" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "Enter number for change:" << endl;
    cout << "m[" << x << "][" << y << "]: ";
    cin >> m[x][y];
    cout << "Matrix with changes: " << endl;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << m[i][j] << "\t";
      }
      cout << endl;
    }
    return m[4][4];
  }
  GetTrans(float m1[4][4]) {
    float m2[4][4];
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m2[i][j]=m1[j][i];
      }
    }
    cout << "Transposed matrix:" << endl;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << m2[i][j] << "\t";
      }
      cout << endl;
    }
    return m2[4][4];
  }
  GetMult(float m1[4][4]) {
    float num;
    float m2[4][4];
    cout << "Enter number for multiplication: " << endl;
    cout << "Number: ";
    cin >> num;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m2[i][j]=m1[i][j]*num;
      }
    }
    cout << "Multiplicated matrix:" << endl;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << m2[i][j] << "\t";
      }
      cout << endl;
    }
    return m2[4][4];
  }
};

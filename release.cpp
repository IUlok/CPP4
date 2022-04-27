#include <iostream>
#include "header.h"
using namespace std;

float displayMatrix(float m[4][4]) {
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      std::cout << m[i][j] << "\t";
    }
    std::cout << std::endl;
  }
  return 0;
};

  matrix::matrix()
  { }
  matrix::matrix(float m[4][4]) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m1[i][j]=m[i][j];
        m2[i][j]=m[i][j];
      }
    }
    cout << "Constructor called" << endl;
  }
  float matrix::setMatrix(float m[4][4]) {
    cout << "Enter matrix m[4][4]:" << endl;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << "m[" << (i+1) << "][" << (j+1) << "]: ";
        cin >> m[i][j];
      }
    }
    displayMatrix(m);
    return m[4][4];
  };
  float matrix::setElem(float m[4][4]) {
    cout << "Enter element to change: m[x][y]:" << endl;
    cout << "x: ";
    cin >> x;
    x--;
    cout << "y: ";
    cin >> y;
    y--;
    cout << "Enter number for change:" << endl;
    cout << "m[" << (x+1) << "][" << (y+1) << "]: ";
    cin >> m[x][y];
    cout << "Matrix with changes: " << endl;
    displayMatrix(m);
    return m[4][4];
  };
  float matrix::getTrans(float m1[4][4]) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m2[i][j]=m1[j][i];
      }
    }
    cout << "Transposed matrix:" << endl;
    displayMatrix(m2);
    cout << "!!! Matrix was back to Untransposed !!!" << endl;
    return m2[4][4];
  };
  float matrix::getMult(float m1[4][4], int num) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m2[i][j]=m1[i][j]*num;
      }
    }
    cout << "Multiplicated matrix:" << endl;
    cout << "!!! Matrix was back to Unmultiplicated !!!" << endl;
    displayMatrix(m2);
    return m2[4][4];
  };

  matrix::matrix(const matrix &obj) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j] = obj.m[i][j];
      }
    }
    cout << "Matrix has copied" << endl;
  }

  matrix::~matrix() {
    cout << "Destructor called" << endl;
  }

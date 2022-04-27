#include "header.h"
using namespace std;

void matrix::displayMatrix() {
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      cout << m[i][j] << "\t"; // вывод матрицы поэлементно
    }
    cout << endl;
  }
};

  matrix::matrix() {
    for (int i = 0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=0; // заполнение матрицы класса нулями
      }
    }
    cout << "Constructor called" << endl;
  }
  matrix::matrix(float zeroMatrix[4][4]) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=zeroMatrix[i][j]; // присвоение матрице класса значений нулевой матрицы
      }
    }
    cout << "Constructor params called" << endl;
  }
  void matrix::setMatrix() {
    cout << "Enter matrix m[4][4]:" << endl;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << "m[" << (i+1) << "][" << (j+1) << "]: ";
        cin >> m[i][j]; // заполнение матрицы поэлементно
      }
    }
    displayMatrix(); // ее отображение
  };
  void matrix::setElem() { // ф-ция замены  элемента
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
    displayMatrix(); // отображение матрицы
  };
  void matrix::getTrans() { // транспонирование через третью переменную
    int a=0;
    for (int i=0;i<4;i++) {
      for (int j=i;j<4;j++) {
        a=m[i][j];
        m[i][j]=m[j][i];
        m[j][i]=a;
      }
    }
    cout << "Transposed matrix:" << endl;
    displayMatrix(); // отображение матрицы
    cout << "!!! Matrix was back to Untransposed !!!" << endl;
  };
  void matrix::getMult(int num) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=m[i][j]*num; // умножение матрицы поэлементно
      }
    }
    cout << "Multiplicated matrix:" << endl;
    cout << "!!! Matrix was back to Unmultiplicated !!!" << endl;
    displayMatrix(); // её отображение
  };

  matrix::matrix(const matrix &obj) { // ф-ция копирования матрицы
    for (int i=0;i<4;i++)
      for (int j=0;j<4;j++)
        m[i][j] = obj.m[i][j]; // присвоение поэлементно значений м-цы класса значениям м-цы другого класса
    cout << "Matrix has copied" << endl;
  }

  matrix::~matrix() { // вызов деструктора
    cout << "Destructor called" << endl;
  }

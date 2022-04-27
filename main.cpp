#include <iostream>
#include "release.cpp"
using namespace std;

int main() {
  matrix Matrix; //создание объекта
  float zeroMatrix[4][4]; //создание нулевой матрицы
  for (int i=0;i<4;i++) //заполнение нулевой матрицы
   for (int j=0;j<4;j++)
     zeroMatrix[i][j]=0;
  matrix M(zeroMatrix); //вызов конструктора с параметром
  Matrix.displayMatrix(); //отображение текущей матрицы
  while (1) {
    int x;
    cout << "Enter the punct of menu:" << endl; //меню
    cout << "1\tEnter the Matrix 4x4" << endl;
    cout << "2\tChange element of Matrix" << endl;
    cout << "3\tGet Transposed Matrix" << endl;
    cout << "4\tMultiplicate Matrix" << endl;
    cout << "5\tCopy matrix" << endl;
    cout << "6\tExit" << endl;
    cout << "Punct: ";
    cin >> x;
    switch (x) {
      case 1: {Matrix.setMatrix(); break;} //заполнение матрицы
      case 2: {Matrix.setElem(); break;} //замена элемента
      case 3: {Matrix.getTrans(); break;} //транспонирование
      case 4: {
        int num;
        cout << "Enter number for multiplication: " << endl;
        cout << "Number: ";
        cin >> num;
        Matrix.getMult(num); //умножение на число
        break;
      }
      case 5: {
        matrix cpBuf=Matrix; //копирование текущего объекта в новый объект cpBuf
        break;
      }
      case 6: return 0; // выход из программы
      default: cout << "Error: Uncorrect punct" << endl; // если введен некорректный п. меню
    }
  }
}

class matrix { // описание класса
private: // описание переменных
  int x,y;
public: // описание методов
  float m[4][4]; // создание матрицы, паблик из-за перегрузки
  matrix(); // конструктор без параметра
  matrix(float zeroMatrix[4][4]); // конструктор с параметром
  void displayMatrix(); // ф-ция отображения матрицы
  void setMatrix(); // ф-ция ввода матрицы
  void setElem(); // замена элемента
  void getTrans(); // транспонирование
  void getMult(int num); // умножение матрицы
  matrix(const matrix &obj); // конструктор копирования
  ~matrix(); // деструктор класса
};

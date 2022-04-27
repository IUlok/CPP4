class matrix {
private:
  float num;
  int x,y;
  float m2[4][4];
  float m1[4][4];
  float m[4][4];
public:
  matrix();
  matrix(float m[4][4]);
  float setMatrix(float m[4][4]);
  float setElem(float m[4][4]);
  float getTrans(float m1[4][4]);
  float getMult(float m1[4][4], int num);
  matrix(const matrix &obj);
  ~matrix();
};

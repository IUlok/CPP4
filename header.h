float trans_m (float m1[4][4]) {
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
  return 0;
}
float mult_m (float m1[4][4]) {
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
  return 0;
}

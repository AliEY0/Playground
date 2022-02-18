#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

vector<vector<int>> MatrixVermernigvuldigen(vector<vector<int>> A,
                                            vector<vector<int>> B) {
  int rowA_size = A.size();
  int colA_size = A[0].size();
  int rowB_size = B.size();
  int colB_size = B[0].size();

  if (colA_size != rowB_size) {
    throw std::invalid_argument("Matrix A en B zijn niet vermenigvuldigbaar "
                                "omdat de dimensies niet kloppen");
  }
  vector<vector<int>> C(rowA_size, vector<int>(colB_size, 0));

  for (int i = 0; i < rowA_size; i++)
    for (int j = 0; j < colB_size; j++)
      for (int k = 0; k < rowB_size; k++)
        C[i][j] += (A[i][k] * B[k][j]);

  return C;
}

void printMatrix(vector<vector<int>> C) {
  for (int i = 0; i < C.size(); i++) {
    for (int j = 0; j < C[i].size(); j++)
      cout << C[i][j] << " ";
    cout << "\n";
  }
}

int main() {
  /*vector<vector<int>> A = {{1, 2}, {4, 3}};
  vector<vector<int>> B = {{1, 2, 3}, {1, 2, 3}, {3, -4, 7}};
  vector<vector<int>> C = MatrixVermernigvuldigen(A, B);
  printMatrix(C);
  *//*
  vector<vector<int>> A = {{1, 2}, {4, 3}};
  vector<vector<int>> B = {{1, 2, 3}, {3, -4, 7}};
  vector<vector<int>> C = MatrixVermernigvuldigen(A, B);
  printMatrix(C);
  */
  return 0;
}

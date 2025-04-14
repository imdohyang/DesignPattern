#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main() {
    // 3x2 행렬 A
    Matrix<double, 3, 2> A;
    A << 1, 2,
         3, 4,
         5, 6;

    // 2x3 행렬 B
    Matrix<double, 2, 3> B;
    B << 7, 8, 9,
         10, 11, 12;

    // 결과 행렬 C = A * B
    Matrix<double, 3, 3> C = A * B;

    // 결과 출력
    cout << "행렬 A:\n" << A << "\n\n";
    cout << "행렬 B:\n" << B << "\n\n";
    cout << "A * B 결과:\n" << C << endl;

    return 0;
}

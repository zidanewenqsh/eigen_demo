#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXd m(2,2); // 创建一个2x2的double矩阵
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << "Here is the matrix m:\n" << m << std::endl;
    return 0;
}

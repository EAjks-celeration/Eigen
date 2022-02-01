#include <iostream>
#include <Eigen/Dense>

int main()
{
   MatrixXf A = MatrixXf::Random(3, 2);
   cout << "Here is the matrix A:\n" << A << endl;
   VectorXf b = VectorXf::Random(3);
   cout << "Here is the right hand side b:\n" << b << endl;
   cout << "The least-squares solution is:\n"
        << A.template bdcSvd<ComputeThinU | ComputeThinV>().solve(b) << endl;
}

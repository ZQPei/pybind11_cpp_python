#include <pybind11/embed.h>
#include <pybind11/eigen.h>
#include <Eigen/LU>
#include <iostream>

namespace py = pybind11;

int main(){
    py::scoped_interpreter guard{};

    // you should have eigen installed first
    py::module m = py::module::import("algo");
    Eigen::MatrixXd a = Eigen::MatrixXd::Random(3,3);
    std::cout<<"a[0,0] = "<<a(0,0)<<std::endl;
    std::cout<<"det of a = "<<a.determinant()<<std::endl;
    std::cout<<"inv of a = "<<a.inverse()<<std::endl;
    
    // in pybind11, eigen MatrixXd type will convert to python numpy ndarray automaticly
    py::print("det of a =",m.attr("det")(a));
    py::print(m.attr("inv")(a));

    return 0;
}
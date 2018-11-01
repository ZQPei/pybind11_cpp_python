#include <pybind11/embed.h>
#include <iostream>

namespace py=pybind11;

PYBIND11_EMBEDDED_MODULE(fast_calc, m){
    m.def("add", [](int i, int j){
        return i+j;
    });
}

int main(){
    py::scoped_interpreter guard{};

    // import python module 
    py::module m = py::module::import("human");
    // Human is a python class
    py::object Human = m.attr("Human");
    // create a Human instance named jack
    py::object jack = Human("Jack");
    // call jack's methods
    jack.attr("set_age")(18);
    py::print(jack.attr("get_name")(),"'s age:", jack.attr("get_age")());

    // automatic type convertion of python's generic types
    auto fast_calc = py::module::import("fast_calc");
    auto result = fast_calc.attr("add")(1,2).cast<int>();
    if (result == 3){
        std::cout<<true<<std::endl;
    }

    return 0;
}
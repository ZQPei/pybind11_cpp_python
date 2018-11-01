#include <string>
#include <pybind11/pybind11.h>

namespace py=pybind11;

class DOG
{
public:
    DOG( const std::string & name): name(name){}
    void set_age(int _age) {
        age = _age;
    }
    int get_age();
private:
    std::string name;
    int age;
};


int DOG::get_age(){
    return age;
}

PYBIND11_MODULE(dog, m){
    py::class_<DOG>(m,"DOG")
        .def(py::init<const std::string &>())
        .def("set_age", &DOG::set_age)
        .def("get_age", &DOG::get_age);
}
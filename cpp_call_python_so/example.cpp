#include "human.h"

int main(){
    py::scoped_interpreter guard{};

    py::object jack = py::module::import("human").attr("Human")("Jack");
    print_age(jack);
    return 0;
}

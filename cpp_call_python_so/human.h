#include <pybind11/embed.h>

namespace py=pybind11;

// if you want set py::object as arg of a func, you should add PYBIND11_EXPORT before.
PYBIND11_EXPORT void print_age(py::object human);
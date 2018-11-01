# Pybind11 cpp python hybrid programming

## Introduction

This repository shows how to hybrid programming with cpp and python using pybind11.

It includes two main topic,

- extend python with c++ (python_call_cpp)
- extend c++ with python (cpp_call_python)

This repository contains several folders. 

Each folder cooresponds to an specific topic with all source code privided and shows how to compile them.

**The hardest part is how to convert opencv Mat type in cpp to numpy ndarray and vice versa.**



## 1 extend python with c++

- python_call_cpp
- python_call_cpp_opencv_numpy

## 2 extend c++ with python

- cpp_call_python
- cpp_call_python_numpy (eigen)
- cpp_call_python_opencv_numpy
- cpp_call_python_so




## References

- [pybind11](https://github.com/pybind/pybind11)
- [edmBernard/pybind11_opencv_numpy](https://github.com/edmBernard/pybind11_opencv_numpy)
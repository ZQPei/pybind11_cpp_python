#include <pybind11/embed.h>
#include <pybind11/numpy.h>

#include <opencv2/opencv.hpp>

#include "ndarray_converter.h"

#include <string>
#include <iostream>

namespace py=pybind11;

int main(){
    py::scoped_interpreter guard{};
    py::module m = py::module::import("algo");
    NDArrayConverter::init_numpy();

    cv::Mat img = cv::imread("lena.jpg");
    py::array result = m.attr("func")(img);
    cv::Mat img_out(512,512, CV_8UC3, (void *)result.data(0,0));
    cv::imwrite("result.jpg",img_out);

    return 0;
}
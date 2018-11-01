##  compile human.cpp to .so file first
g++ -std=c++11 -fPIC -shared human.cpp -o libhuman.so -I/home/pzq/anaconda3/include/python3.6m -I/usr/local/include -L/home/pzq/anaconda3/lib -lpython3.6m

##  then compile example.cpp executable 
g++ -std=c++11 example.cpp -o example -I/home/pzq/anaconda3/include/python3.6m -I/usr/local/include -L/home/pzq/anaconda3/lib -lpython3.6m -L. -lhuman

## run example
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)
./example

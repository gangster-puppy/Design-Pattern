mkdir build 
cd build 
cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS="-std=c++11" -DUSE_TEMPLATE=1
make
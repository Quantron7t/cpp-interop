g++ -c -DBUILD_CPP_DLL runner.cpp
g++ -shared -o shared_lib.dll runner.o -Wl,--out-implib,libshared_lib.a
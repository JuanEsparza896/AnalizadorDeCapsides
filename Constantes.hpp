#ifndef CONSTANTES_HEADER
#define CONSTANTES_HEADER
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <algorithm>

#define PI M_PI
typedef std::string str;
enum distro{
    ubuntu,
    windows
};

#define PAbrioArchivo(arch,farch) if(!farch){std::cout<<"error al abrir archivo "<<arch<<std::endl;exit(EXIT_FAILURE);}

#endif
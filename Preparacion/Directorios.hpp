#ifndef HEADER_DIRECTORIOS
#define HEADER_DIRECTORIOS
#include "../Constantes.hpp"

void DirPath(enum distro &wu,str &wus)
{
    #ifdef _WIN32
        wu = windows; wus = "\\";
    #elif __linux__
        wu = ubuntu; wus = "/";
    #else
        std::cout << "Sistema operativo no detectado\n";
        exit(0);
    #endif
}

#endif
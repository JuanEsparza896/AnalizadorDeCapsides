#ifndef HEADER_DIRECTORIOS
#define HEADER_DIRECTORIOS
#include "../Constantes.hpp"
#include <algorithm>

void DirPath(str path,str &dDocs,uint &isys,enum distro &wu,str &wus)
{

    str st;     //string para buscar Doc en ubuntu o windows
    uint len;   //longitud del path

    #ifdef _WIN32
        wu = windows; wus = "\\";
    #elif __linux__
        wu = ubuntu; wus = "/";
    #else
        std::cout << "Sistema operativo no detectado\n";
        exit(0);
    #endif
    
    st = wus + "Doc";
    len=path.length();
    
    isys = path.find(st);
    dDocs=path;
    dDocs = dDocs.erase(isys,len-isys);
    std::cout << "dDocs " << dDocs << std::endl;

}

#endif
#include "Constantes.hpp"
#include "Preparacion/Directorios.hpp"

int main()
{
    std::cout << "Lectura de Datos\n";

    str dir;                //directorio
    enum distro wu;         //si es windows o linux
    str wus;                // se usa / si es distro de linux o \\si es de windows
    uint isys;              //parametro para localizar los directorios principales
    str dDocs;              //localización de los documentos
    
    DirPath(dir,dDocs,isys,wu,wus);
    
    return 0;
}
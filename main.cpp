#include "Constantes.hpp"
#include "Preparacion/Directorios.hpp"

int main()
{
    std::cout << "Lectura de Datos\n";

    str dir;                //directorio
    enum distro wu;         //si es windows o linux
    str wus;                //se usa / si es distro de linux o \\ si es de windows
    uint isys;              //parametro para localizar los directorios principales
    str dDocs;              //localización de los documentos
    str aUC;                //String que contiene la ultima corrida
    bool iprt;              //si es false no se imprimen las cosas en terminal
    str aDatos;             //Archivo de Datos
    str aPos;               //Archivo de Posiciones
    str aParter;            //Archivo de Parejas y Ternas
    str aPols;              //Archivo de Poligonos
    str aCaps;              //Archivo de Capsides

    iprt=false;
    DirPath(dir,dDocs,isys,wu,wus);
    aUC=UltimaCor(dir,dDocs,wu,wus);
    str temp = ImprimirDirectorios(aUC,wus,iprt);
    Archivos(aUC,wus,temp,aDatos,aPos,aParter,aPols,aCaps,iprt);
    
    return 0;
}
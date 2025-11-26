#include "Constantes.hpp"
#include "Preparacion/Directorios.hpp"
#include "Preparacion/Datos.hpp"

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
    uint na;
    uint nm;
    uint np;
    uint nparm;
    uint nparchm;
    uint nparcha;
    double L;
    double diamb[50];
    double ang[50];
    int parmat[50][50];
    double angg[3];
    double LL[3];
    double L2[3];
    int nconf;

    iprt=false;

    //Inicialización de archivos y directorios.
    DirPath(dir,dDocs,isys,wu,wus);
    aUC=UltimaCor(dir,dDocs,wu,wus);
    str temp = ImprimirDirectorios(aUC,wus,iprt);
    Archivos(aUC,wus,temp,aDatos,aPos,aParter,aPols,aCaps,iprt);

    LeerYEscribir(aDatos,na,nm,np,nparm,nparchm,nparcha,L,diamb,ang,parmat,angg,LL,L2,nconf);
    CalcularParmatp(na,nparcha,parmat,nparm,nparchm);
    
    return 0;
}
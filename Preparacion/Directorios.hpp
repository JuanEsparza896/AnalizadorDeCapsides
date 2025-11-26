#ifndef HEADER_DIRECTORIOS
#define HEADER_DIRECTORIOS
#include "../Constantes.hpp"
#include <algorithm>
#include <fstream>

void DirPath(str dir,str &dDocs,uint &isys,enum distro &wu,str &wus)
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
    len=dir.length();
    
    isys = dir.find(st);
    dDocs=dir;
    dDocs = dDocs.erase(isys,len-isys);
    std::cout << "dDocs " << dDocs << std::endl;
}

str UltimaCor(str dir,str dDocs,enum distro wu,str wus)
{
    str aUCdir;
    str temp;
    str aUC;

    aUCdir = dDocs + wus + "archLogU.txt";
    std::ifstream ifarchLog(aUCdir);
    PAbrioArchivo(aUCdir,ifarchLog);
    ifarchLog >> temp;
    aUC = temp;
    ifarchLog.close();

    str archCBs = dDocs + wus + "archCB.txt";

    std::ofstream ofarchCB; 
    ofarchCB.open(archCBs.c_str()); //Se crea un stream para escribir a este archivo
    ofarchCB << dir;                //Se escribe el path en este archivo?
    return aUC;
}

str ImprimirDirectorios(str aUC,str wus,bool iprt)
{
    str dMod;
    int i, l;
    str aUCC;

    aUCC = aUC;
    l = aUCC.length();
    i = aUCC.rfind(wus);
    str dCor = aUCC;
    if(iprt)std::cout << "dCor " << dCor << std::endl;

    aUCC = aUCC.erase(i,l);
    l = aUCC.length();
    i = aUCC.rfind(wus);
    dMod = aUCC;
    if(iprt)std::cout << "dMod " << dMod << std::endl;

    aUCC = aUCC.erase(i,l);
    l = aUCC.length();
    i = aUCC.rfind(wus);
    str dProy = aUCC;
    
    if(iprt)std::cout << "dProy " << dProy << std::endl;
    if(iprt)std::cout << "l " << l << std::endl;
    if(iprt)std::cout << "i " << i << std::endl;
    

    aUCC = aUCC.erase(i,l);
    l = aUCC.length();
    i = aUCC.rfind(wus);
    str dProg = aUCC;
    if(iprt)std::cout << "dProg " << dProg << std::endl;
    if(iprt)std::cout << "l " << l << std::endl;
    if(iprt)std::cout << "i " << i << std::endl;

    aUCC = aUCC.erase(i,l);
    l = aUCC.length();
    i = aUCC.rfind(wus);
    str dHOOMD = aUCC;
    if(iprt)std::cout << "dHOOMD " << dHOOMD << std::endl;

    return dMod;
}

void Archivos(str aUC,str wus,str dMod,str &aDatos,str &aPos,str &aParTer,str &aPols,str &aCaps,bool iprt)
{

    int i, l;
    str aUCC;

    if(iprt) {
      std::cout << "\naUC " << aUC << std::endl;
    }

    aUCC = aUC;
    l = aUCC.length();
    i = aUCC.rfind(wus + "L_");
    str nCor = aUCC;
    nCor = nCor.erase(0,i);

    if(iprt) {
      std::cout << "\nwus " << wus << std::endl;
      std::cout << "l " << l << std::endl;
      std::cout << "i " << i << std::endl;
      std::cout << "nCor " << nCor << std::endl;
    }

    aUCC = aUCC.erase(i,l);
    l = aUCC.length();
    i = aUCC.rfind(wus + "M_");

    if(iprt) {
      std::cout << "aUCC " << aUCC << std::endl;
      std::cout << "l " << l << std::endl;
      std::cout << "i " << i << std::endl;
    }
    if(i > 0) {
      str nMod = aUCC;
      nMod = nMod.erase(0,i);
      aUCC = aUCC.erase(i,l);
      if(iprt) std::cout << "nMod " << nMod << std::endl;
    }

    l = aUCC.length();
    i = aUCC.rfind(wus + "AMGM");
    if(i > 0) {
      str nProy = aUCC;
      nProy = nProy.erase(0,i);
      if(iprt) std::cout << "nProy " << nProy << std::endl;
    }

    l = aUCC.length();
    i = aUCC.rfind(wus + "AAMGB");
    if(i > 0) {
      str nProg = aUCC;
      nProg = nProg.erase(0,i);
      if(iprt) std::cout << "nProg " << nProg << std::endl;
      if(iprt) std::cout << "l " << l << std::endl;
      if(iprt) std::cout << "i " << i << std::endl;
    }

    l = aUCC.length();
    i = aUCC.rfind(wus + "AAMG");
    if(i > 0) {
      aUCC = aUCC.erase(i,l);
      l = aUCC.length();
      i = aUCC.rfind(wus + "AAMG");
      str nHOOMD = aUCC;
      nHOOMD = nHOOMD.erase(0,i);
      if(iprt) std::cout << "nHOOMD " << nHOOMD << std::endl;
    }

    l = aUCC.length();
    i = aUCC.rfind(wus + "AM");
    if(i > 0) {
      aUCC = aUCC.erase(i,l);
      l = aUCC.length();
      i = aUCC.rfind(wus + "AM");
      str nHOOMD = aUCC;
      nHOOMD = nHOOMD.erase(0,i);
      if(iprt) std::cout << "nHOOMD " << nHOOMD << std::endl;
    }

    if(iprt) {
      std::cout << "aDatos " << aDatos << std::endl;
      std::cout << "nCor " << nCor << std::endl;
    }

//    cout << endl;
    aDatos = nCor;
    aDatos = aDatos.replace(1,1,"D1");
    l = aDatos.length();
    aDatos = aDatos.replace(l-3,l,"txt");
    aDatos = dMod + aDatos;
    if(iprt) {
      std::cout << "dMod " << dMod << std::endl;
      std::cout << "aDatos " << aDatos << std::endl;
    }

    str aLog = nCor;
    aLog = aLog.replace(1,1,"L");
    aLog = dMod + aLog;
    if(iprt) std::cout << "aLog " << aLog << std::endl;

    str aOTiempo = nCor;
    aOTiempo = aOTiempo.replace(1,1,"O");
    l = aOTiempo.length();
    aOTiempo = aOTiempo.replace(l-3,l,"txt");
    aOTiempo = dMod + aOTiempo;
    if(iprt) std::cout << "aOTiempo " << aOTiempo << std::endl;

    str aParmat = wus + "parmat";
//    aParmat = "/parmat.txt";
    aParmat = dMod + aParmat;
    if(iprt) std::cout << "aParmat " << aParmat << std::endl;

    str nCor1 = nCor;
    aPos = nCor;
    aPos = aPos.replace(1,1,"P");
    l = aPos.length();
    aPos = aPos.replace(l-3,l,"txt");
    aPos = dMod + aPos;
    if(iprt) std::cout << "aPos " << aPos << std::endl;

//    cout << endl;
    aParTer = nCor;
    aParTer = aParTer.replace(1,1,"ParTer");
    l = aParTer.length();
    aParTer = aParTer.replace(l-3,l,"txt");
    aParTer = dMod + aParTer;
    if(iprt) std::cout << "aParTer " << aParTer << std::endl;

//    cout << endl;
    aPols = nCor;
    aPols = aPols.replace(1,1,"Pols");
    l = aPols.length();
    aPols = aPols.replace(l-3,l,"txt");
    aPols = dMod + aPols;
    if(iprt) std::cout << "aPols " << aPols << std::endl;

//    cout << endl;
    aCaps = nCor;
    aCaps = aCaps.replace(1,1,"Caps");
    l = aCaps.length();
    aCaps = aCaps.replace(l-3,l,"txt");
    aCaps = dMod + aCaps;
    if(iprt) std::cout << "aCaps " << aCaps << std::endl;
//    cout << endl;
}

#endif
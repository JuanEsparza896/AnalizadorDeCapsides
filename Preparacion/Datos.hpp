#ifndef HEADER_DATOS
#define HEADER_DATOS

#include "../Constantes.hpp"
#include <fstream>

void LeerYEscribir(str aDatos,uint &na,uint &nm,uint &np,uint &nparm,uint &nparchm,uint &nparcha,double &L,double *diamb,double *ang,int (*parmat)[50],double *angg
                  ,double *LL,double *L2,int &nconf)
{
    int i,j,n;
    int and1, npaxyz[3];
    str s;
    str temps;
    uint tempi;
    double tempd;
    uint nd;
    double diama[50],dela[50],epsa[50],anga[50],rcuta[50],qa[50],ka[50];
    str espa[50];
    double delb[50],epsb[50],angb[50],rcutb[50],qb[50],kb[50];
    str espb[50];
    double diam[50],dell[50],eps[50],rcut[50],qq[50],kkk[50];
    str esp[50];

    and1 = 0;

//    cout << "aDatos " << aDatos << endl;

    std::ifstream ifarch(aDatos);
    PAbrioArchivo(aDatos,ifarch);

    ifarch >> temps; ifarch >> s;
    std::cout << "proyecto "<< temps <<std::endl;
    ifarch >> tempd;     ifarch >> s;
    std::cout << "temp: "<< tempd <<std::endl;
    ifarch >> tempd;     ifarch >> s;
    std::cout << "dens: "<< tempd <<std::endl;
    ifarch >> tempd;     ifarch >> s;
    std::cout << "densa: "<< tempd <<std::endl;

    ifarch >> na;     ifarch >> s;
    std::cout << "na: "<< na <<std::endl;
    ifarch >> nm;     ifarch >> s;
    std::cout << "nm: "<< nm <<std::endl;
    ifarch >> np;     ifarch >> s;
    std::cout << "np: "<< np <<std::endl;
    ifarch >> nd;     ifarch >> s;
    std::cout << "nd: "<< nd <<std::endl;
    ifarch >> nparm;  ifarch >> s;
    std::cout << "nparm: "<< nparm <<std::endl;
    ifarch >> tempi;   ifarch >> s;
    std::cout << "npas: "<< tempi <<std::endl;
    if(and1 == 1) {
      for (i = 0; i < nd; i++)
        ifarch >> npaxyz[i];
        ifarch >> s;
    }
    ifarch >> tempi;  ifarch >> s;
    std::cout << "nparlig: "<< tempi <<std::endl;
    ifarch >> nparchm;  ifarch >> s;
    std::cout << "nparchm " << nparchm << std::endl;
    ifarch >> nparcha;  ifarch >> s;
    std::cout << "nparcha " << nparcha << std::endl;
    ifarch >> tempi;   ifarch >> s;
    std::cout << "nparchm " << tempi << std::endl;

    ifarch >> tempd;  ifarch >> s;
    std::cout << "dtt " << tempd << std::endl;

    ifarch >> tempi;  ifarch >> s;
    std::cout << "perImag " << tempi << std::endl;
    ifarch >> tempi;  ifarch >> s;
    std::cout << "perProp " << tempi << std::endl;

    ifarch >> L;  ifarch >> s;
    std::cout << "L " << tempi << std::endl;
    ifarch >> tempd; ifarch >> s;
    std::cout << "aa " << tempd << std::endl;
    if(na>50){printf("na es mayor que el tamano del buffer\n");exit(0);}

    for (i = 0; i < na; i++)
      ifarch >> diama[i];
    ifarch >> s;
    for (i = 0; i < na; i++) std::cout << diama[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> espa[i];
    ifarch >> s;
    std::cout << "espa " << " ";
    for (i = 0; i < na; i++) std::cout << espa[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> dela[i];
    ifarch >> s;
    std::cout << "dela " << " ";
    for (i = 0; i < na; i++) std::cout << dela[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> epsa[i];
    ifarch >> s;
    std::cout << "epsa " << " ";
    for (i = 0; i < na; i++) std::cout << epsa[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> anga[i];
    ifarch >> s;
    std::cout << "anga " << " ";
    for (i = 0; i < na; i++) std::cout << anga[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> rcuta[i];
    ifarch >> s;
    std::cout << "rcuta " << " ";
    for (i = 0; i < na; i++) std::cout << rcuta[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> qa[i];
    ifarch >> s;
    std::cout << "qa " << " ";
    for (i = 0; i < na; i++) std::cout << qa[i] << " ";
    printf("\n");
    for (i = 0; i < na; i++)
      ifarch >> ka[i];
    ifarch >> s;
    std::cout << "ka " << " ";
    for (i = 0; i < na; i++) std::cout << ka[i] << " ";
    printf("\n");

    n = nparchm;
    if(n>50){printf("na es mayor que el tamano del buffer\n");exit(0);}
    for (i = 0; i < n; i++) ifarch >> diamb[i];
    ifarch >> s;
    std::cout << "diamb " << " ";
    for (i = 0; i < n; i++) std::cout << diamb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> espb[i];
    ifarch >> s;
    std::cout << "espb " << " ";
    for (i = 0; i < n; i++) std::cout << espb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> delb[i];
    ifarch >> s;
    std::cout << "delb " << " ";
    for (i = 0; i < n; i++) std::cout << delb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> epsb[i];
    ifarch >> s;
    std::cout << "epsb " << " ";
    for (i = 0; i < n; i++) std::cout << epsb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> angb[i];
    ifarch >> s;
    std::cout << "angb " << " ";
    for (i = 0; i < n; i++) std::cout << angb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> rcutb[i];
    ifarch >> s;
    std::cout << "rcutb " << " ";
    for (i = 0; i < n; i++) std::cout << rcutb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> qb[i];
    ifarch >> s;
    std::cout << "qb " << " ";
    for (i = 0; i < n; i++) std::cout << qb[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> kb[i];
    ifarch >> s;
    std::cout << "kb " << " ";
    for (i = 0; i < n; i++) std::cout << kb[i] << " ";
    printf("\n");

    n = nparm;
    for (i = 0; i < n; i++) ifarch >> diam[i];
    ifarch >> s;
    std::cout << "diam " << " ";
    for (i = 0; i < n; i++) std::cout << diam[i] << " ";
    printf("\n");

    for (i = 0; i < n; i++) ifarch >> esp[i];
    ifarch >> s;
    std::cout << "esp " << " ";
    for (i = 0; i < n; i++) std::cout << esp[i] << " ";
    printf("\n");

    for (i = 0; i < n; i++) ifarch >> dell[i];
    ifarch >> s;
    std::cout << "dell " << " ";
    for (i = 0; i < n; i++) std::cout << dell[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> eps[i];
    ifarch >> s;
    std::cout << "eps " << " ";
    for (i = 0; i < n; i++) std::cout << eps[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> ang[i];
    ifarch >> s;
    std::cout << "ang " << " ";
    for (i = 0; i < n; i++) std::cout << ang[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> rcut[i];
    ifarch >> s;
    std::cout << "rcut " << " ";
    for (i = 0; i < n; i++) std::cout << rcut[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> qq[i];
    ifarch >> s;
    std::cout << "qq " << " ";
    for (i = 0; i < n; i++) std::cout << qq[i] << " ";
    printf("\n");
    for (i = 0; i < n; i++) ifarch >> kkk[i];
    ifarch >> s;
    std::cout << "kkk " << " ";
    for (i = 0; i < n; i++) std::cout << kkk[i] << " ";
    printf("\n");

    ifarch >> tempi;      ifarch >> s;
    std::cout << "nnn: " << tempi << std::endl;
    ifarch >> tempd;       ifarch >> s;
    std::cout << "kk: " << tempd << std::endl;
    ifarch >> tempi;   ifarch >> s;
    std::cout << "nlados: " << tempi << std::endl;

    for (i = 0; i < nparm; i++)
      for (j = 0; j < nparm; j++)
        ifarch >> parmat[i][j];
    ifarch >> s;

    ifarch >> temps;     ifarch >> s;
    std::cout << "mg: " << temps << std::endl;
    ifarch >> tempi;   ifarch >> s;
    std::cout << "imod: " << tempi << std::endl;
    ifarch >> temps; ifarch >> s;
    std::cout << "modelo: " << temps << std::endl;
    ifarch >> temps;    ifarch >> s;
    std::cout << "pot: " << temps << std::endl;
    ifarch >> temps;  ifarch >> s;
    std::cout << "molec: " << temps << std::endl;
    ifarch >> temps;    ifarch >> s;
    std::cout << "gpu: " << temps << std::endl;

    if(and1 == 0) {
      for (i = 0; i < 3; i++) ifarch >> angg[i];
      ifarch >> s;
    }

    if(and1 == 1) {
      ifarch >> temps;  ifarch >> s;
    }

    ifarch >> temps; ifarch >> s;
    std::cout << "ees: " << temps << std::endl;
    ifarch >> tempd;  ifarch >> s;
    std::cout << "ax: " << tempd << std::endl;
    ifarch >> tempd;  ifarch >> s;
    std::cout << "ay: " << tempd << std::endl;
    ifarch >> tempd;  ifarch >> s;
    std::cout << "az: " << tempd << std::endl;
    ifarch >> tempd;  ifarch >> s;
    std::cout << "LX: " << tempd << std::endl;
    LL[0] = tempd;
    std::cout << "LL[0]: " << LL[0] << std::endl;
    L2[0] = tempd / 2.0;
    std::cout << "L2[0]: " << L2[0] << std::endl;
    
    ifarch >> tempd;  ifarch >> s;
    std::cout << "LY: " << tempd << std::endl;
    LL[1] = tempd;
    std::cout << "LL[1]: " << LL[1] << std::endl;
    L2[1] = tempd / 2.0;
    std::cout << "L2[1]: " << L2[1] << std::endl;
    
    ifarch >> tempd;  ifarch >> s;
    std::cout << "LZ: " << tempd << std::endl;
    LL[2] = tempd;
    std::cout << "LL[2]: " << LL[2] << std::endl;
    L2[2] = tempd / 2.0;
    std::cout << "L2[2]: " << L2[2] << std::endl;

    ifarch >> temps;  ifarch >> s;
    std::cout << "aoo: " << temps << std::endl;
    ifarch >> temps;  ifarch >> s;
    std::cout << "tmm: " << temps << std::endl;
    ifarch >> temps;  ifarch >> s;
    std::cout << "aca: " << temps << std::endl;

    ifarch >> tempd;  ifarch >> s;
    std::cout << "kYu: " << tempd << std::endl;
    ifarch >> tempd;  ifarch >> s;
    std::cout << "kRe: " << tempd << std::endl;
    int nparchap;
    ifarch >> nparchap;  ifarch >> s;
    std::cout << "nparchap: " << nparchap << std::endl;
    int nparchat = nparcha - nparchap;
    std::cout << "nparchat: " << nparchat << std::endl;

    ifarch >> tempi;     ifarch >> s;
    std::cout << "capst: " << tempi << std::endl;
    ifarch >> nconf;     ifarch >> s;
    std::cout << "nconf: " << nconf << std::endl;
    ifarch >> temps;        ifarch >> s;
    std::cout << "mg: " << temps << std::endl;
    ifarch >> temps;       ifarch >> s;
    std::cout << "ens: " << temps << std::endl;
    ifarch >> temps;      ifarch >> s;
    std::cout << "rein: " << temps << std::endl;
}

void CalcularParmatp(uint na,uint nparcha,int (*parmat)[50],uint nparm,uint nparchm)
{
    int i,j;
  int i1, i2, i3, i4;
  int parmatp[50][50];

  i1 = na + 0; i2 = na + 1;
  i3 = na + 0 + nparcha; i4 = na + 1 + nparcha;
  parmat[i1][i2] = 2; parmat[i2][i1] = 2;
  parmat[i3][i4] = 2; parmat[i4][i3] = 2;

  parmat[0][0] = 3; parmat[1][1] = 3;
  parmat[0][1] = 3; parmat[1][0] = 3;

  int ii = nparm * na;
  for (i = 0; i < nparchm; i++) {
    for (j = 0; j < nparchm; j++) {
      if(j == 1) ii = ii + na;
      parmatp[i][j] = parmat[i + na][j + na];
    };
  };
}

#endif
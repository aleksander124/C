#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main()
{
    char znak; // do tej zmiennej przypiszemy nasz wybór

    const float pi=3.1415;
    float wys_t, podst_t, prom_kola, boka_prost, bokb_prost, wynik;

    cout<<"MENU"<<endl<<endl;
    cout<<"1 - Pole trojkata"<<endl;
    cout<<"2 - Pole kola"<<endl;
    cout<<"3 - Pole prostokata"<<endl<<endl;

    znak=getch();

    if(znak=='1'){
      cout<<"Program obliczy pole trojkata"<<endl<<endl;
      cout<<"Podaj wysokosc: ";
      cin>>wys_t;
      cout<<"Podaj dlugosc podstawy: ";
      cin>>podst_t;

      if(wys_t>0 && podst_t>0){
        wynik=(wys_t*podst_t)/2;
        cout<<"Pole trojkata wynosi "<<wynik<<endl;
      }
      else{
        cout<<"Wymiary nie moga byc ujemne!"<<endl;
      }
    }

    if(znak=='2'){
      cout<<"Program obliczy pole kola"<<endl<<endl;
      cout<<"Podaj promien: ";
      cin>>prom_kola;

      if(prom_kola>0){
        wynik=prom_kola*prom_kola*pi;
        cout<<"Pole kola wynosi "<<wynik<<endl;
      }
      else{
        cout<<"Wymiary nie moga byc ujemne!"<<endl;
        }
    }

    if(znak=='3'){
      cout<<"Program obliczy pole postokata"<<endl<<endl;
      cout<<"Podaj dlugosc boku a: ";
      cin>>boka_prost;
      cout<<"Podaj dlugosc boku b: ";
      cin>>bokb_prost;

      if(boka_prost>0 && bokb_prost>0){
        wynik=boka_prost*bokb_prost;
        cout<<"Pole prostokata wynosi "<<wynik<<endl;
      }
      else{
        cout<<"Wymiary nie moga byc ujemne!"<<endl;
      }
    }

    if(znak!='1' && znak!='2' && znak!='3' ){
      cout<<"Nie ma takiej opcji"<<endl;
    }

    getch();
    return 0;
}

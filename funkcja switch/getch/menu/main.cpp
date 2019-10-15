#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main()
{
    char znak; // do tej zmiennej przypiszemy nasz wybór

    cout<<endl <<"      MENU        "<<endl<<endl; // piszemy menu u¿ytkownika
    cout<<"1) Pole trojkata"<<endl;
    cout<<"2) Pole kola"<<endl;
    cout<<"3) Pole prostokata"<<endl<<endl;

    znak=getch(); // pobieramy znak

    if(znak=='1'){ // i po kolei sprawdzamy wszystkie mo¿liwoœci wyboru
      cout<<"Program obliczy pole trojkata"<<endl;
    }

    if(znak=='2'){
      cout<<"Program obliczy pole kola"<<endl;
    }

    if(znak=='3'){
    cout<<"Program obliczy pole postokata"<<endl;
    }

    if(znak!='1' && znak!='2' && znak!='3' ){
      cout<<"Nie ma takiej opcji"<<endl;
    }

    getch();
    return 0;
}

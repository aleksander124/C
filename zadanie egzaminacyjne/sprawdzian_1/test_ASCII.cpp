#include <iostream>
using namespace std;

char znak;
int liczba;

int main(){
  cout<<"Witaj!"<<'\n'
  <<"Podaj dowolna litere: ";
  cin >> znak ;
  liczba = znak ;
  cout << '\n' << '\n';

  if(liczba > 64 && liczba < 91){
    cout << "Podana przez Ciebie litera jest duza\n";
    if (znak== 'A' || znak== 'E' || znak== 'I' || znak== 'O' || znak== 'U'){
      cout << "Podana przez Ciebie litera > " << znak << " < Jest samogloska\n" ;
    }
    else{
      cout << "Podana przez Ciebie litera > "<< znak << " < Nie jest samogloska\n" ;
    }
  }
  else if(znak > 96 && znak < 123){
    cout << "Podana przez Ciebie litera jest mala\n";
    if (znak== 'a' || znak== 'e' || znak== 'i' || znak== 'o' || znak== 'u'){
      cout << "Podana przez Ciebie litera > " << znak << " < Jest samogloska\n" ;
    }
    else{
      cout << "Podana przez Ciebie litera > "<< znak << " < Nie jest samogloska\n" ;
    }
  }
  else{
    cout << "Blad! > " << znak << " < To nie jest litera";
  }
}

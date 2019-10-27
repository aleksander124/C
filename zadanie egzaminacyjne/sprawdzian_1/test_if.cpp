#include <iostream>
using namespace std;

char znak;
int liczba;

int main(){
  cout<<"Witaj!"<<'\n'
  <<"Podaj dowolna litere\n"
  <<"Pamietaj o tym zeby byla duza litera: ";
  cin >> znak ;
  cout << '\n' << '\n';

 if (znak== 'A' || znak== 'E' || znak=='I' || znak=='O' || znak=='U') {
    cout << "Podana przez Ciebie litera > " << znak << " < Jest samogloska\n" ;
  }
  else{
    cout << "Podana przez Ciebie litera > "<< znak << " < Nie jest samogloska\n" ;
  }
  return 0;

}

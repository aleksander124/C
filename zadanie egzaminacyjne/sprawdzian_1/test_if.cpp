#include <iostream>
using namespace std;

char znak;

int main(){
  cout<<"Witaj!"<<'\n'
  <<"Podaj dowolna samogloske"<<'\n'
  <<"Pamietej o wpisaniu jej duza litera: ";
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

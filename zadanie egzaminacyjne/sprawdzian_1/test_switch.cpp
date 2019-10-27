#include <iostream>
using namespace std;

char znak;

int main(){
  cout<<"Witaj!"<<'\n'
  <<"Podaj dowolna samogloske"<<'\n'
  <<"Pamietej o wpisaniu jej duza litera: ";
  cin >> znak ;
  cout << '\n' << '\n';

  switch(znak){
    case 'A':{
      cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'E':{
      cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'I':{
      cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'O':{
      cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'U':{
      cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }

    default:{
      cout << "Podana Litera nie jest samogloska" << '\n';
      break;
    }
  }
}

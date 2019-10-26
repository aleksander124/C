#include <iostream>
using namespace std;

char znak;

int main(){
  std::cout<<"Witaj!"<<'\n'
  <<"Podaj dowolna samogloske"<<'\n'
  <<"Pamietej o wpisaniu jej duza litera: ";
  std::cin >> znak ;
  std::cout << '\n' << '\n';

  switch(znak){
    case 'A':{
      std::cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'E':{
      std::cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'I':{
      std::cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'O':{
      std::cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }
    case 'U':{
      std::cout << "Podales litere " << znak << " Podana litera jest samogloska"<< '\n' ;
      break;
    }

    default:{
      std::cout << "Podana Litera nie jest samogloska" << '\n';
      break;
    }
  }
}

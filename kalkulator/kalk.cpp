#include <iostream>

using namespace std;

int a, b, polecenie;

int main(void)
{
    setlocale(LC_ALL,"");
    do {
        std::cout << "[1] Dodawanie"
        << endl << "[2] Odejmowanie"
        << endl << "[3] Mnozenie"
        << endl << "[4] Dzielenie"
        << endl << "[5] Rezygnuj"
        << endl << "Twoje polecenie: ";
        cin >> polecenie;

        if ( polecenie == 5){
            break;
        }
        cout << "Podaj pierwsza liczbe:";
        cin >> a;
        cout << "Podaj druga liczbe:";
        cin >> b;

        switch ( polecenie ) {
        case 1:{
            cout << "Wynik: " << a + b << endl;
            break;
          }
        case 2:{
            cout << "Wynik: " << a - b << endl;
            break;
          }
        case 3:{
            cout << "Wynik: " << a * b << endl;
            break;
          }
        case 4:{
            cout << "Wynik: " << a / b << endl;
            break;
          }
        default:{
            cout << "Nieprawidlowe polecenie." << endl;
          }
        }
    } while( polecenie != 5 );{
    cout << "Do zobaczenia";
  }
    return 0;
}

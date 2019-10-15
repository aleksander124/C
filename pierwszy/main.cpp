#include <iostream>

using namespace std;

int liczba;

int main()
{
    cout << "Podaj dowolna liczbe parzysta: " ;
    cin >> liczba;
    if(liczba%2==0 && liczba>0){
        cout << "liczba jest parzysta" << endl;

        if(liczba/9){
            cout << "Liczba jest podzielna przez 9" << endl;
        }
        else if(liczba/11){
            cout << "Liczba jest podzielna przez 11" << endl;
        }
        else if(liczba/9 && liczba/11){
            cout << "Liczba jest podzielna przez 9 i 11" << endl;
        }
        else{
            cout << "Podana liczba nie jest podzielna przez 9 ani 11" << endl;
        }
    }
    else if(liczba < 0){
        cout << "Podana przez Ciebie liczba nie jest liczba naturalna" << endl;
    }
    else if(liczba %2!=0){
        cout << "Liczba nie jest parzysta" << endl;
    }
    return 0;
}

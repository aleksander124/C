#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int liczba;
    std::cout << "podaj liczb� ca�kowit�: ";
    std::cin >> liczba;

    if (liczba > 0 ){
        std::cout << "Liczba jestes wi�ksza od zera" ;
    }
    else if(liczba == 0){
        std::cout << "Liczba r�wna zero" ;
    }
    else {
        std::cout << "Liczba mniesza od zera";
    }
    return 0;
}

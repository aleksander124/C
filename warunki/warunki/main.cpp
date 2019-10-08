#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int liczba;
    std::cout << "podaj liczbê ca³kowit¹: ";
    std::cin >> liczba;

    if (liczba > 0 ){
        std::cout << "Liczba jestes wiêksza od zera" ;
    }
    else if(liczba == 0){
        std::cout << "Liczba równa zero" ;
    }
    else {
        std::cout << "Liczba mniesza od zera";
    }
    return 0;
}

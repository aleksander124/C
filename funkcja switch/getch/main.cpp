#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

char znak;

int main()
{
    char znak; // zmienna typu char o nazwie znak

    cout<<"Wcisnij dowolny klawisz: "; // pro�ba o wci�ni�cie klawisza
    znak=getch(); // za zmienn� znak podstawiamy warto�� zwracan� przez getch()
    cout<<"Zostal wcisniety klawisz "<<znak<<endl; // wypisujemy warto�� zmiennej znak

    if(znak=='a')
    {
      cout<<"Pelny dostep"<<endl;
    }
    else
    {
      cout<<"Brak dostepu"<<endl;
    }

    getch();
    return 0;
}

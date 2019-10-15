#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

char znak;

int main()
{
    char znak; // zmienna typu char o nazwie znak

    cout<<"Wcisnij dowolny klawisz: "; // proœba o wciœniêcie klawisza
    znak=getch(); // za zmienn¹ znak podstawiamy wartoœæ zwracan¹ przez getch()
    cout<<"Zostal wcisniety klawisz "<<znak<<endl; // wypisujemy wartoœæ zmiennej znak

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

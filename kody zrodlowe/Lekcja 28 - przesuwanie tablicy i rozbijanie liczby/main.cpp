#include <iostream>
#include <string>

using namespace std;

void Wypisac();

string liczba;
short int t;
    
int main()
{
    cout <<"Podaj liczbe a ja ja rozbije!!:\n";
    cin >>liczba;
    cin.ignore();
    
    for (int i = 0; i < liczba.length(); i++)
    {
        if (liczba[i] == 44 || liczba[i] == 46)
          t = i;
    }
    
    cout <<"Przed znakiem:\n";
    
    if(liczba[0] != '-')
    {
       Wypisac();
    }
    else
    {
        for (int i = 1; i <liczba.length(); i++)
        {
            liczba[i-1] = liczba[i];
        }
        
        t--;
        liczba[liczba.length()-1] = '\0';
        Wypisac();
    }
    
  
    getchar();
    return 0;
}

void Wypisac()
{
     for (int i = 0; i < liczba.length(); i++)
     {
         if (i < t || i > t)
           cout <<liczba[i]<<"\n";
         else if (i == t)
           cout <<"Po znaku:\n";
     }
     
}

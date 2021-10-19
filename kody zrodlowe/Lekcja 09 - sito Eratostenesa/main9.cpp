// Sito Eratostenesa
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  bool tab[10000];
  unsigned int i, w, ile;

  cout <<"Do jakiej liczby mam wypisywac liczby pierwsze? ";
  cin >> ile;
  cin.ignore();

  if (ile > 10000)
    cout <<"Podales ich zbyt duzo";
  else
  {
    for (i = 2; i <= ile; i++)
      tab[i] = true;

    for (i = 2; i <= ile; i++) // i = 7, ile = 100
    {
        if ( (i != 2) &&  (i % 2 == 0) )
          i++;

        w = i + i;
        while (w <= ile)
        {
          tab[w] = false;
          w += i;
        }
    }
  }


    for (i = 2; i <= ile; i++)
     if (tab[i])
       cout <<i<<", ";


  getchar();
  return 0;
}


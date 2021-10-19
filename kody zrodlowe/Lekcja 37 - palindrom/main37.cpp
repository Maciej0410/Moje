#include <iostream>
#include <string>

using namespace std;

bool palindrom(int, int);

string slowo;
short dl;

int main()
{ 
    // [0]  [1]  [2] [3] [4]
    // k    a    j   a   k, ala, zaraz 13531  - palindrom, ciag znakow, ktory czyta sie tak samo od lewej jak i od prawej strony
    
    cout <<"Podaj slowo a ja sprawdze czy jest ono palindromem:\n";    
    cin >>slowo;
    cin.ignore();
    
    dl = (slowo.length() / 2); // dl = 2 dla kajak
    
    int lewa = dl - 1; // lewa wskazuje na [1] w kajaku (a)
    int prawa = dl + 1;// prawa wskazuje na [3] w kajaku (a)
    

    if (palindrom(lewa, prawa))
      cout <<slowo<<" jest palindromem";
    else 
      cout <<slowo<<" nie jest palindromem";
      

    getchar();
    return 0;
}

bool palindrom(int i, int j)
{
     for(; i >= 0; i--, j++)
     {
           if (!(slowo[i] == slowo[j]))
            return false;
     }
     
     return true;
} 

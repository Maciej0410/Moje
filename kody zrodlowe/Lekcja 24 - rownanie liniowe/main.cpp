#include <iostream>

using namespace std;

int main()
{ 
    double a, b;
    
    /* f(x) = ax + b => 0 = ax + b => x = (-b/a)  - równanie oznaczone
       
       a == 0
       b == 0
       0 == 0
       Rownanie tozsamosciowe (nieoznaczone) nieskonczenie wiele rozw.
       
       a == 0
       b !=0
       b = 0 = > równanie te jest sprzeczne - BRAK ROZWIAZANIE     
     */
     
     cout <<"Podaj a i b:\n ";
     cin >>a>>b;
     cin.ignore();
     
     
     if (a!=0)
       cout <<"Rownanie jest oznaczone i posiada rozw.: "<<(-b/a);
     else if (a == 0 && b == 0)
       cout <<"Rownanie jest tozsamosciowe 0 == 0 (nieoznaczone - niesk. wiele rozw.)";
     else if (a == 0 && b !=0)
       cout <<"Rownanie jest sprzeczne!!! - BRAK ROZWIAZANIA!!!";
     else
       cout <<"Cos skombinowales ;)";
     

    getchar();
    return 0;
}

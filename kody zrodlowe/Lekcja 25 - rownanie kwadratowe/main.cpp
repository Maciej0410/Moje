#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
       a*x^2 + b*x + c = 0
       
       delta = b ^ 2 - 4 * a * c
       
       delta > 0 = > ist. dwa rozw.
       x1 = (-b - sqrt(delta) / 2 * a)
       x2 = (-b + sqrt(delta) / 2 * a)
       
       delta == 0
       x1 = (-b  / 2 * a)
       x2 = (-b  / 2 * a)
       
       delta < 0  = > brak rozw.    
    */
    
    double a, b, c, delta, x1, x2;
    
    cout <<"Podaj parametry w kolejnosci: a : b : c:\n";
    cin >>a>>b>>c;
    cin.ignore();
    
    delta = (b * b - 4 * a * c);
    cout <<"\n\n";
    
    if (delta > 0)
    {  
      cout <<"Rownanie posiada dwa rozw:\n\n";
      x1 = (-b - sqrt(delta) / 2 * a);
      x2 = (-b + sqrt(delta) / 2 * a);
      cout <<"x1 = "<<x1<<"\n";
      cout <<"x2 = "<<x2<<"\n";      
    }
    else if (delta == 0)
    {
      cout <<"Rownanie posiada jedno rozw.:\n";
      x1 = (- b / 2 * a);
      cout <<"x = "<<x1<<"\n";      
    }
    else if (delta < 0)
      cout <<"BRAK ROZWIAZANIA!!\n";
    else
      cout <<"WYKOMBINOWALES COS ;)\n";    
    
    getchar();
    return 0;
}

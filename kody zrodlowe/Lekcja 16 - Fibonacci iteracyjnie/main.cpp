#include <iostream>

using namespace std;

//wart. 0, 1, 2, 3, 4, 5, 6, 7,  8,  9,  10, 11, 12,  13,  14,  15,  16,  ...
//wynik 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ... 

int main()
{
    unsigned int ktora, w;
    
    cout <<"Ktora liczbe z ciagu Fibonacciego chcesz zobaczyc? ";
    cin >>ktora;
    cin.ignore();
    
    int a = 1, b = 1;
    
    if (ktora == 0)
      w = 0;
    else if (ktora == 1 || ktora == 2)
      w = 1;
    else
    {
        for (int i = 3; i <= ktora; i++) // i = 7, ktora = 6
        {
            w = a + b; // w = 8, a = 5, b = 8
            a = b;
            b = w;
        }
    }
    
    cout <<"Fib ("<<ktora<<") = "<<w;    

    getchar();
    return 0;
}

#include <iostream>

using namespace std;
//wart. 0, 1, 2, 3, 4, 5, 6, 7,  8,  9,  10, 11, 12,  13,  14,  15,  16,  ...
//wynik 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ... 

int fib(int);

int main()
{
    int n;
    
    cout <<"Podaj wart. co ciagu Fibonacciego: ";
    cin >>n;
    cin.ignore();
    
    cout <<"Fib ("<<n<<") = "<<fib(n);

    
    getchar();
    return 0;
    
}

int fib(int n)
{
    if (n == 0)
      return 0;
    else if (n == 1)
      return 1;
    else if (n > 1)
      return fib(n - 1) + fib(n - 2);
}

 


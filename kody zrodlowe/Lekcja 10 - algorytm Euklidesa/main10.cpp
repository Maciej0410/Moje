#include <iostream>

using namespace std;

int NWD(int, int);

int main()
{
    int a, b;
    
    cout <<"Podaj dwie liczby z ktorych mam znalesc NWD: \n";
    cin >>a >>b;
    cin.ignore();
    
    cout <<NWD(a,b);
    
    getchar();
    return 0;
}

int NWD(int a, int b)
{
    while(a != b)
    {
       if (a > b)
          a = a - b;
       else // else if ( b < a)
          b = b - a;
    }
    
    return a;
}

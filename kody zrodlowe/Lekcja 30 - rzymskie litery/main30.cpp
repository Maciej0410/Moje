#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int w[] = { 1000, 900,  500,  400, 100,  90,  50,  40,  10,    9,   5,    4,    1};
    char *s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int n, r;

    cout <<"Podaj mi liczbe calkowita dodatnia: ";
    cin >>n;
    cin.ignore();

    if (n < 0)
      return 0;

    cout <<"Postac rzymska liczby: "<<n<<": ";

    for (r = 0; n > 0;)
    {
        if (n >= w[r]) // n = 0, r = 9;  MCDXX
        {
          cout <<s[r];
          n -= w[r];
        }
        else
          r++;
    }

    getchar();
    return 0;
}

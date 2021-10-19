#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cout <<"Zal. c > a && c > b\n";
    cout <<"Podaj dlugosci bokow a ja powiem Ci czy trojkat jest prostokatny:\n";
    cin >>a>>b>>c;
    cin.ignore();
    
    if ((a < b + c) && (b < a + c) && (c < b + a))
    {
           if ((a * a + b * b) == (c * c) ) // || (c * c + b * b) == (a * a) || (a * a + c * c) == (b * b)
             cout <<"Trojkat jest prostokatny";
           else
             cout <<"TRojkat nie jest prostokatny";
    }
    else
      cout <<"To nie jest trojkat";
    
    getchar();
    return 0;
}

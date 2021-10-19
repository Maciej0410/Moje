#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cout <<"Podaj 3 dl. bokow a ja powiem czy moga one stworzy tojkat!:\n";
    cin >>a>>b>>c;
    cin.ignore();
    
    if ((a < b + c) && (b < a + c) && (c < b + a))
      cout <<"To jest trojkat!";
    else
      cout <<"To nie jest trojkat!";

    
    getchar();
    return 0;
}

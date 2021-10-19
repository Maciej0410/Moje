#include <iostream>
#include <string>

using namespace std;

int main()
{

    string slowo;
    
    cout <<"Podaj slowo a ja wypisze je wspak!:\n";
    cin >>slowo;
    cin.ignore();
    
    cout <<"Wspak "<<slowo<<"to:\n";
    
    for (short i = slowo.length() - 1; i >= 0; i--)
       cout <<slowo[i];
    
    getchar();
    return 0;
}

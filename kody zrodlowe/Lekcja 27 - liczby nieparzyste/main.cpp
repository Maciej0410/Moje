#include <iostream>

using namespace std;

int main()
{
    int a, j = 0;
    
    cout <<"Ile mam wypisac roznych nieparzystych liczb??\n";
    cin >>a;
    cin.ignore();
    
    for (int i = 1; i <= a*2; i++)
    {
        if (!(i % 2 == 0))
        {
           j++;
           cout <<j<<". = "<<i<<"\n";
        }
    }
       
    getchar();
    return 0;
}

// Generacja liczb pierwszych!
#include <iostream>
#include <cmath>

using namespace std;
bool Test(int);

int main()
{
    int a = 2, ile;
    
    cout <<"Ile liczb pierwszych mam wygenerowac? ";
    cin >>ile;
    cin.ignore();
    
    for (unsigned int i = 0; i < ile; i++)
    {
        if(Test(a))
        {
           cout <<i+1<<". = "<<a<<"\n";
        }
        else i--;
        a++;
    }
    
    
    getchar();
    return 0;
}

bool Test(int a)
{
    if (a <= 1) return false;
    
    for (unsigned int i = 2; i <= sqrt(a); i++)
    {
        if (!(a % i))
          return false;
    } 
    
    return true;
}

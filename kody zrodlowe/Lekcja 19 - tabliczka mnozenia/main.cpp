#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
           cout.width(4);
           cout <<i*j;     
        }
        cout <<"\n";
    }
    
  

    getchar();
    return 0;
}

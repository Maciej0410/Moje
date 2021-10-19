#include <iostream>
#include <cstdio>
using namespace std;

//5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 = 120

unsigned int silnia(int);

int main()
{
    int ile;

    cout <<"Z ilu chcesz obliczyc silnie ?? ";
    cin >>ile;
    cin.ignore();

    cout <<"Silnia z  "<<ile<<" to "<<silnia(ile);



    getchar();
    return 0;
}

unsigned int silnia(int n) // n = 4 , nn = 3, nnn = 2, nnnn = 1
{
   if (n == 0 || n == 1)
     return 1;
   else
     return n * silnia(n - 1); // 4 * silnia ( 3) // 3 * silnia ( 2 ) // 2 * silnia (1) // 1 * silnia (0 )
}

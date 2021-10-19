#include <iostream>

using namespace std;


int main()
{
    int ile, w = 1;
    
    cout <<"Z ilu chcesz obliczyc silnie ??\n";
    cin >>ile;
    cin.ignore();
    
    for (int i = 1; i <= ile; i++) // ile = 5, i = 5
    {
        w *= i; // w = w * i; //  w = 120
    }

    cout <<"Silnia z "<<ile<<" to "<<w;
    
    
    getchar();
    return 0;
}

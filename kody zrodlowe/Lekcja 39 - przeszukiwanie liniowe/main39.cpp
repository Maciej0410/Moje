#include <iostream>

using namespace std;

int main()
{ 
    int min, max, tab[5] = { 4, -3, 30, 40, 20 };
    
    
    min = tab[0];
    max = tab[0];
    
    for (int i = 1; i < 5; i++)
    {
        if (tab[i] > max)
          max = tab[i];
        if (tab[i] < min)
          min = tab[i];        
    }
    
    cout <<"Min: "<<min<<"\n";
    cout <<"Max: "<<max<<"\n";

    getchar();
    return 0;
}

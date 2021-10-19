#include <iostream>

using namespace std;

int main()
{
    // 1 1 0 1 0 1 = 1 * 2 ^ 5 + 1 * 2 ^ 4 + 0 * 2 ^ 3 + 1 * 2 ^ 2 + 0 * 2 ^ 1 + 1 * 2 ^ 0 = 53
    
    int a, w;
    int tab[100];
    
    cout <<"Podaj liczbe ktora mam zamienic na kod binarny: ";
    cin >>a;
    cin.ignore();
    
    int i = 0;
    
    do{
       i++;
       tab[i] = a % 2; 
       a = a / 2;
       w = 2 * a + tab[i];
    }while (w >= 2);
    
    cout <<"Liczba w systemie dwojkowym wyglada: ";
    
    for (; i > 0; i--)
    {
        cout <<tab[i];
    }    
    
    getchar();
    return 0;
}

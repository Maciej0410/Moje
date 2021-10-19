#include <iostream>

using namespace std;

int NWD(int, int);

int main()
{
    int a, b;
    
    cout <<"Podaj dwie liczby z ktorych mam znalezc NWD: \n";
    cin >> a >> b;
    cin.ignore();
    
    cout <<NWD(a, b);
    
    getchar();
    return 0;
}

int NWD(int a, int b)
{
  int r;
  
  while (r = a % b) //a = 222, b = 1,  r = 0
  {
     a = b;
     b = r;   
  }  
  
  return b;  
}

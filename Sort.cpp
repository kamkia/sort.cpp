#include <iostream>

using namespace std;
const int N = 10;
int a[N];

void wprowadz_dane()
{
    for(int i = 0; i < N; i++)
    {
     std::cout << "Podaj dana nr " << i << ": ";
     std::cin >> a[i];
     }
}
void wyprowadz_dane()
{
     for(int i = 0; i < N; i++)
    {
     std::cout << "a[" << i << "] = " << a[i] << std::endl;
     }
}
main()
{
     wprowadz_dane();
     wyprowadz_dane();
     
     return 0;
}

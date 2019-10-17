#include <iostream>
#include <string>

int main()
{
    int x;
    std::cout<<"Vvedite 4islo: ";
    std::cin>>x;
  
    int y = x/10;
    int z = x%10;
    
    int i = y + z;
    int t = z * y;
    
    std::cout <<"Dobutoq: ";
    std::cout << t;
    std::cout <<  std::endl;
    std::cout<<"Summa: ";
    std::cout<< i;


}

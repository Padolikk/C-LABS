#include <iostream>
#include <string>

int main()
{
    int x;
    std::cout<<"Vvedite 4islo: ";
    std::cin>>x;
  
    int y = x/100;
    int i = (x%100)/10;
    int z = (x%100)%10;
    
    std::cout <<"Obernene 4islo: ";
    std::cout << z;
    std::cout << i;
    std::cout << y;

}

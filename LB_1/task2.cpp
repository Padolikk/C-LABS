#include <iostream>
#include <string>

int main()
{
    int A;
    std::cout<<"Vvedite 1-e 4islo";
    std::cin>>A;
    int B;
    std::cout<<"Vvedite 2-e 4islo";
    std::cin>>B;
    
    int C = A;
    A = B;
    B = C;
    
    std::cout<<A;
    std::cout<<B;
}

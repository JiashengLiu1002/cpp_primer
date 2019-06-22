#include <iostream>

int main()
{
    int v1=0, v2=0, v=0;
    int min=0, max=0;
    std::cout << "enter 2 number" << std::endl;
    std::cin >> v1 >> v2;

    if(v1 < v2)
    {
        min = v1;
        max = v2;
    }
    else
    {
        min = v2;
        max = v1;
    }
    std::cout << "print numbers: " << std::endl;
    v = min;
    while(v <= max)
    {
       std::cout << v << std::endl;
       v ++ ;
    }
}

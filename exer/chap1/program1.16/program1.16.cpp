#include <iostream>

int main()
{
    int sum=0, val=0;
    std::cout << "enter numbers : " << std::endl;
    while(std::cin >> val)
    {
        sum += val;
    }
    std::cout << "sum = " << sum << std::endl;
}

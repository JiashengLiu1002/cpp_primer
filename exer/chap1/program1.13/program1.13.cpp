#include <iostream>

int main()
{
    // program 1.9
    int sum = 0;
    for(int i=50; i<=100; i++)
    {
        sum += i;
    }
    std::cout << "program1.9 sum=" << sum << std::endl;

    // program 1.10
    std::cout << " program1.10 from 10 to 0 " << std::endl;
    for(int i=10; i>=0; i--)
    {
        std::cout << i << std::endl;
    }

    // program 1.11
    int v1=0, v2=0;
    int min=0, max=0;
    std::cout << "program1.11 enter 2 numbers:" << std::endl;
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
    std::cout << "numbers of program1.11" << std::endl;
    for(int i = min; i <= max ; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}

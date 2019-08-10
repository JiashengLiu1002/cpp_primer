#include <iostream>

int i = 42;
int main()
{
    int i = 100;
    int j = i;

    std::cout << j << std::endl;


    int m, &rm = m;
    m = 5; rm = 10;
    std::cout << m << " " << rm << std::endl;
    return 0;
}

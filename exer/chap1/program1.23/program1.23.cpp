#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, item_curr;
    // std::cin >> item1 >> item2;
    if (std::cin >> item_curr)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
       	    if (item.isbn == item_curr.isbn)
            {
                item_curr = item_curr + item;
                cnt ++;
            }
            else
            {
                std::cout << item_curr<< " occurs " << cnt << " times " << std::endl; 
                item_curr = item;
                cnt = 1;
            }
        }

        std::cout << item_curr << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}

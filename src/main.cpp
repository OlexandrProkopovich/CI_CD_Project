#include <iostream>
#include "sum.h"

int main()
{
    std::vector<int> vector{1, 2, 3, 4, 5};
    std::cout << "Sum of vector's elements: " << my_app::array_sum(vector);
    
    return 0;
}
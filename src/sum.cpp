#include "sum.h"

namespace my_app 
{
    int array_sum(const std::vector<int>& vector) 
    {
        int sum = 0;
        for (std::size_t idx = 0; idx < vector.size(); idx++) 
        {
            sum += vector[idx];
        }
        return sum;
    }
}
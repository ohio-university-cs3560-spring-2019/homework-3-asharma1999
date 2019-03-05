#include <iostream>
#include <cstdarg>
#include <complex>
#include <vector>
#include <cmath>
#include "homework7.h"

double stddev(int n, ...)
{
    double total = 0;
    int count = 0;
    double u = 0;
    double x = 0;
    double y = 0;
    double std = 0;
    
    va_list bruh;
    va_start(bruh, n);
    
    std::vector<int> numbers(n);
    
    for(int i = 0; i < n; ++i)
    {
        int num = va_arg(bruh, int);
        numbers[i] = num;
        count++;
        total += num;
        u = total / count;
    }
    
    for(int j = 0; j < n; ++j)
    {
        x = pow(numbers[j] - u, 2); 
        y += x;
    }
    std = sqrt(y / count);
    
    return std;
}
#include <iostream>
#include <vector>
#include <array>
#include "hw_broken.cc"

double deviation(int* &a, int &n);

int main()
{
	int n;
	std::cout << "Enter in the size of the array." << std::endl;
	std::cin >> n;
	std::cout << "Enter in the " << n << " numbers that you want in your array." << std::endl;
	
	int *a = new int[n];
	
	for(int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	
  	std::cout << "The standard deviation is: " << deviation(a, n) << std::endl;
}


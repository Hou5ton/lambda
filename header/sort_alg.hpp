#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include "print_lambda.hpp"

class sort_alg
{
private:

	std::vector<int> vec{ 2,1,5,4,3,6,7,9,8,0 };

	int x = 3;

public:
	void parsing_vec(unsigned i)
	{
		switch (i)
		{
		case 0:
			std::sort(vec.begin(), vec.end(), std::greater<int>());
			std::for_each(vec.begin(), vec.end(), print);
			std::cout << std::endl;
			break;

		case 1:
			std::sort(vec.begin(), vec.end(), [](int a, int b)
				{
					return a < b;
				});
			std::for_each(vec.begin(), vec.end(),print);
			std::cout << std::endl;
			break;
		}
	}
};


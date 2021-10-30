#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include "print_lambda.hpp"

class for_each_alg
{
private:
	std::vector<int> vec{ 1,2,3,4,5,6,7,8 };

public:
	void parsing_vec(unsigned i)
	{
		switch (i)
		{
		case 0:
			for_each(vec.begin(), vec.end(), print);
			std::cout << std::endl;
			break;

		case 1:
			for_each(vec.begin(), vec.end(), [](int x)
				{
					std::cout << x*x << " ";
				});
			std::cout << std::endl;
			break;
		}
	}
};


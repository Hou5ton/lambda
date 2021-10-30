#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
#include "print_lambda.hpp"


class copy_alg
{
private:
	std::vector<int> vec{ 1, 2, -3, 4, -4, 3, -7, 8, 9, -10 };
	std::vector<int> new_vec;

public:
	void parsing_vec(unsigned i)
	{
		auto count_num = 0;
		int number_to_compare_to = 0;

		switch (i)
		{
		case 0:
			std::copy(vec.begin(), vec.end(), std::back_inserter(new_vec));
			std::for_each(new_vec.begin(), new_vec.end(), print);
			std::cout << "\n";
			new_vec.clear();
			break;

		case 1:
			std::copy_if(vec.begin(), vec.end(), std::back_inserter(new_vec), [number_to_compare_to](int i) {return i < number_to_compare_to; });
			std::for_each(new_vec.begin(), new_vec.end(), print);
			std::cout << "\n";
			break;
		}
	}
};
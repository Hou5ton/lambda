#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include "print_lambda.hpp"


class count_if_al
{
private:
    std::vector<int> vec{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

public:
	void parsing_vec(unsigned i)
	{
		auto count_num = 0;

		switch (i)
		{
		case 0:
			count_num = std::count_if(vec.begin(), vec.end(), [](int i) {return i % 4 == 0; });
			std::cout << "Count num %4: " << count_num << std::endl;
			break;

		case 1:
			count_num = std::count_if(vec.begin(), vec.end(), [](int i) {return i%2 == 0; });
			std::cout << "Count num %2: " << count_num << std::endl;
			break;
		}
	}
};
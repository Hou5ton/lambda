#include <algorithm>
#include <iostream>
#include <vector>

class find_alg
{
private:
	std::vector<int> vec{ 3,1,5,4,3,6,7,9,8,0 };

public:
	void parsing_vec(unsigned i)
	{
		int x = 7;

		switch (i)
		{
		case 0:
			std::find_if(begin(vec), end(vec), [x](int i) {return i = x;});
			break;
		case 1:
			auto result2 = std::find_if(vec.begin(), vec.end(), [](const int& n){ return n % 2 == 0; });
			
			break;
		}
	}
};


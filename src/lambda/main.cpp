#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>


#include <copy_alg.hpp>
#include <count_if.hpp>
#include <for_each_alg.hpp>
#include <find_alg.hpp>
#include <sort_alg.hpp>
#include <max_element.hpp>


bool predicat(int& a)
{
    return a > 0;
}



int main()
{
    /*std::array<Student, 8> arr{
    { { "Albert", 3 },
      { "Ben", 5 },
      { "Christine", 2 },
      { "Dan", 8 },
      { "Enchilada", 4 },
      { "Francis", 1 },
      { "Greg", 3 },
      { "Hagrid", 5 } }
    };

    auto best{
    std::max_element(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
      return (a.points < b.points);
    })
    };

    std::cout << best->name << " is the best student\n";

    std::vector<double> vec{ -1,2,-3,4 };

    auto result = std::count_if(vec.begin(), vec.end(), predicat);

    std::cout << result << "\n";*/


    for_each_alg fea;
    fea.parsing_vec(0);
    fea.parsing_vec(1);

    find_alg fa;
    fa.parsing_vec(0);
    fa.parsing_vec(1);

    sort_alg sa;
    sa.parsing_vec(0);
    sa.parsing_vec(1);

    count_if_al cia;
    cia.parsing_vec(0);
    cia.parsing_vec(1);


    copy_alg ca;
    ca.parsing_vec(0);
    ca.parsing_vec(1);


    

	return 0;
}
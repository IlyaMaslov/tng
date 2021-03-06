#include <iostream>
#include <climits>

int main()
{
    int int_max = INT_MAX;
    int int_min = INT_MIN;

    std::cout << "Int max = " << int_max << std::endl;
    std::cout << "Int min = " << int_min << std::endl;

    if(int_max + 1 == int_min){

        std::cout << "int_max + 1 == int_min" << std::endl;
    }
    else{
        std::cout << "int_max + 1 != int_min" << std::endl;
    }

    if(int_min - 1 == int_max){

        std::cout << "int_min + 1 == int_max" << std::endl;
    }
    else{
        std::cout << "int_min + 1 != int_max" << std::endl;
    }

    int_max += 1;
    int_min -= 1;

    std::cout << "Int max + 1 = " << int_max << std::endl;
    std::cout << "Int min - 1 = " << int_min << std::endl;

    return 0;
}

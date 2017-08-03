#include <iostream>

int main()
{
    int erray[10] = {1,1,1,1,1,1,1,2,3};
    int erray_2[10] = {NULL};

    std::cout << erray << std::endl;
    std::cout << erray_2 << std::endl;

    std::cout << erray[9] << std::endl << erray[8] << std::endl;
    std::cout << erray_2[4] << std::endl;

    std::cout << sizeof(erray) << std::endl;
    std::cout << sizeof(erray[1]) << std::endl;

    return 0;
}

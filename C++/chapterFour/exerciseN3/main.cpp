#include <iostream>

int goodys();

struct CandyBar {
    std::string name;
    double weight;
    int calories;
};

int main()
{
    int * arrLeinght =  new int;

    std::cout << "How much unic goodys do you have ? ";
    std::cin >> *arrLeinght;

    CandyBar * goody = new CandyBar[*arrLeinght];



    for (int i = 0; i < *arrLeinght; i++){

        std::cin.get();

        std::cout << "Enter name of the candy bar: ";
        std::getline(std::cin, (goody + 1)->name);

        std::cout << std::endl
                  << "Enter weight of the candy bar: ";
        std::cin >> (goody + 1)->weight;

        std::cout << std::endl
                  << "Enter calories of the candy bar: ";
        std::cin >> (goody + 1)->calories;

        std::cout << std::endl
                  << "Name: " << (goody + 1)->name << std::endl
                  << "Weight: " << (goody + 1)->weight << std::endl
                  << "Calories: " << (goody + 1)->calories << std::endl;
    }

    delete arrLeinght;
    delete goody;

    return 0;
}

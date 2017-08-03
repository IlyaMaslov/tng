#include <iostream>

struct CandyBar {
    std::string name;
    double weight;
    int calories;
};

int main()
{
    CandyBar * goody = new CandyBar;

    std::cout << "Enter name of the candy bar: ";
    std::getline(std::cin, goody->name);

    std::cout << std::endl
              << "Enter weight of the candy bar: ";
    std::cin >> goody->weight;

    std::cout << std::endl
              << "Enter calories of the candy bar: ";
    std::cin >> goody->calories;

    std::cout << std::endl
              << "Name: " << goody->name << std::endl
              << "Weight: " << goody->weight << std::endl
              << "Calories: " << goody->calories << std::endl;

    delete goody;

    return 0;
}

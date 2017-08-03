#include <iostream>

struct person{

    std::string firstName;
    std::string lastName;
    char grade;
    int age;

};

int main()
{
    person * person_ = new person;

    std::cout << "What is your first name ? ";
    std::getline(std::cin, person_->firstName);

    std::cin.get();

    std::cout << "\nWhat is your last name ? ";
    std::getline(std::cin, person_->lastName);

    std::cout << "\nWhat letter grade do you deserve ? ";
    std::cin >> person_->grade;

    std::cout <<"\nWhat is your age ? ";
    std::cin >> person_->age;

    std::cout << "\nName: " << person_->lastName
              << " " << person_->firstName;
    std::cout << "\nGrade: " << person_->grade;
    std::cout << "\nAge: " << person_->age;

    delete person_;

    return 0;
}

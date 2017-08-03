#include <iostream>

int main()
{
    long long seconds{};
    long long minutes{};
    long long hours{};
    long long days{};
    long long weeks{};
    long long months{};
    long long years{};
    long long centures{};

    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    weeks = days / 7;
    months = days / 31.4375;
    years = days / 365.25;
    centures = years / 100;

    std::cout << seconds << " seconds equalent to\n" << minutes << " \t\tminutes\n";
    std::cout <<  hours << " \t\t\thours\n";

    if(days > 1){
        std::cout <<  days << " \t\t\tdays\n";
    }
    if(weeks > 1){
        std::cout <<  weeks << " \t\t\tweeks\n";
    }
    if(months > 1){
        std::cout <<  months << " \t\t\tmonths\n";
    }
    if(years > 1){
        std::cout <<  years << " \t\t\tyears\n";
    }
    if(centures > 1){
        std::cout <<  centures << " \t\t\tcentures\n";
    }

    return 0;
}

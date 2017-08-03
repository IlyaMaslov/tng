#include <iostream>

int years(long years);
int months(long months);
int weeks(long weeks);
int days(long days);
int hours(long long hours);
int minutes(long long minutes);
int normalV(long long seconds);

int main()
{
    long long seconds{};

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    std::cout << seconds << " seconds = ";

    minutes(seconds);

    return 0;
}

int minutes(long long minutes)
{
    minutes /= 60;
    std::cout << minutes << " minutes, ";

    hours(minutes);
    return 0;
}

int hours(long long hours)
{
    hours /= 60;
    std::cout << hours << " hours";

    if (hours > 24){
        std::cout << ", ";
        static_cast <long> (hours);
        days(hours);
    }
    else{
        std::cout << '.';
    }
    return 0;
}

int days(long days)
{
    days /= 24;
    std::cout << days << " days";

    if(days > 7){
        std::cout << ", ";
        weeks(days);
    }
    else{
        std::cout << '.';
        return 0;
    }
    if(days > 30.4375){
        std::cout << ", ";
        months(days);
    }
    else{
        std::cout << '.';
        return 0;
    }
    if(days > 365.25){
        std::cout << ", ";
        years(days);
    }
    else{
        std::cout << '.';
        return 0;
    }
    return 0;
}

int weeks(long weeks)
{
    weeks /= 7;
    std::cout << weeks << " weeks";
    return 0;
}

int months(long months)
{
    months /= 30.4375;
    std::cout << months << " months";
    return 0;
}

int years(long years)
{
    years /= 365.25;
    std::cout << years << " years.";
    return 0;
}




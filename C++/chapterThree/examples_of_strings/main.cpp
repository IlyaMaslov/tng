#include <iostream>

int main()
{
    std::string row_str = R"+((example of row string )"\n))+";
    std::u32string unicode_str = U"string that using unicode \n";
    std::string usual_str = "usual string";

    std::cout << row_str << std::endl;

    std::cout << usual_str << std::endl;

    std::cout << "sizeof row_str: " << row_str.length() <<std::endl;
    std::cout << "strlen row_str: " << row_str.size() <<std::endl;

    std::cout << "sizeof unicode_str: " << unicode_str.length() <<std::endl;
    std::cout << "strlen unicode_str: " << unicode_str.size() <<std::endl;


    return 0;
}

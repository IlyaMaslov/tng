/*    21.07.17.
    by Maslov Ilya
*/
#include <iostream>

int converter (int furlongs);

int main()
{
    int yards, distance;

    std::cout << "Enter distance in furlongs: ";
    std::cin >> distance;
    yards = converter(distance);
    std::cout << std::endl << "in yards: " << yards << std::endl;

    return 0;
}

int converter(int furlongs)
{
    return 220 * furlongs;
}

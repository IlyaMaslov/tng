#include <iostream>
#include <cmath>

int main()
{
    int CodValue [2];
    int Value;
    int CodOfTransfer;

    std::cout << "Codifiers: \n"
              << "1. mm\n"
              << "2. cm\n"
              << "3. dm\n"
              << "4. m\n"
              << "5. km" << std::endl;

    std::cout << "\nEnter codifier of first value: ";
    std::cin >> CodValue[0];
    std::cout << "\nEnter first value: ";
    std::cin >> Value;

    std::cout << "\nEnter codifier of second value: ";
    std::cin >> CodValue[1];

    for(int i = 0; i < 2; i++){

        if(CodValue[i] == 5){
            CodValue[i] = km;
        }
        else if (CodValue[i] > 5) {
            std::cout << "\nYou entered incorrect value";
            return 0;
        }
        else{
            CodValue[i] -= 4;
        }
    }

    CodOfTransfer = CodValue[0] - CodValue[1];

    std::cout << "\n: " << (double) Value * pow(10, CodOfTransfer);

    return 0;
}

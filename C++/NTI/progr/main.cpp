#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector <int> programms;

    int n;
    std::cin >> n;

    int i;
    int temp, temp1;
    while (n) {
        std::cin >> i;
        temp = 0;
        while (i) {
            std::cin >> temp1;
            temp += temp1;
            --i;
        }
        programms.push_back(temp);
        --n;
    }

    std::cin >> n;
    while (n) {
        std::cin >> temp;
        --n;
    }

    std::sort(programms.begin(), programms.end());

    std::remove(programms.begin(), programms.end(), 0);
    std::cout << programms[0];

    return 0;
}

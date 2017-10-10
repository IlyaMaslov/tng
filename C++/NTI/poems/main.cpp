#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string rhyme_determinantor(std::string & line);
bool rhyme_finder(std::vector <std::string> & rhymes);

int main() {
    int n = 1;
    std::cin >> n;

    std::string line;
    std::vector <std::string> rhymes;
    std::getline(std::cin, line);

    while (n && std::getline(std::cin, line)) {
        rhymes.push_back(rhyme_determinantor(line));
        n--;
    }

    std::cout << (rhyme_finder(rhymes) ? "YES" : "NO");

    return 0;
}

bool rhyme_finder (std::vector<std::string> & rhymes) {

    unsigned int n = 0;
    int crutch = 0;
    for(unsigned int i = rhymes.size() / 4; i > 0; i--){

        const int one = (4 * i) - 4;
        const int two = (4 * i) - 3;
        const int three = (4 * i) - 2;
        const int four = 4 * i - 1;


        if(rhymes[one] == rhymes[two] && rhymes[three] == rhymes[four] && (crutch == 1 || crutch == 0)) {
            crutch = 1;
            n++;
        }
        else if(rhymes[one] == rhymes[three] && rhymes[two] == rhymes[four] && (crutch == 2 || crutch == 0)) {
            crutch = 2;
            n++;
        }
        else if(rhymes[one] == rhymes[four] && rhymes[two] == rhymes[three] && (crutch == 3 || crutch == 0)) {
            crutch = 3;
            n++;
        }

    }

    return n == (rhymes.size() / 4) ? true : false;
}

std::string rhyme_determinantor(std::string & line) {
    line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
    return line.size() >= 2 ? line.substr(line.size() - 2) : line;
}

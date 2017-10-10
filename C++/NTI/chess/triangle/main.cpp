#include <iostream>
#include <vector>
#include <math.h>

double find_side(int x1, int x2, int y1, int y2);

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int dot_x, dot_y;
    std::cin >> dot_x >> dot_y;

    double side1 = find_side(x1, x2, y1, y2),
           side2 = find_side(x1, x3, y1, y3),
           side3 = find_side(x2, x3, y2, y3);

    if((dot_x - x1) == 1 && (dot_y - y1) == 1){

    }

    return 0;

}

double find_side(int x1, int x2, int y1, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}



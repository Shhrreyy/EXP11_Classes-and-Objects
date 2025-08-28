#include<iostream>
using namespace std;

class Cube {
    double side;
public:
    Cube(double s) {
        side = s;
    }

    double volume() {
        return side * side * side;
    }

    double getSide() {
        return side;
    }
};

double calculateVolume(Cube &c) {
    double side = c.getSide();
    return side * side * side;
}

int main() {
    Cube c1(3);
    cout << "Volume of the cube (inside class): " << c1.volume() << endl;
    cout << "Volume of the cube (outside class): " << calculateVolume(c1) << endl;
    return 0;
}

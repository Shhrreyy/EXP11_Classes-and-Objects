#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    void area() {
        float result = length * width;
        cout << "The area of the rectangle is: " << result << endl;
    }
};

int main() {
    Rectangle rect;
    rect.length = 18.0;
    rect.width = 4.0;
    rect.area();
    return 0;
}



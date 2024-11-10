#include <iostream>
using namespace std;
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};
class Rectangle : public Shape {
public:
    void display() {
        cout << "This is a rectangle." << endl;
    }
};
int main() 
{
    Rectangle rect;
    rect.display();
    Shape shape;
    shape.display();
    return 0;
}

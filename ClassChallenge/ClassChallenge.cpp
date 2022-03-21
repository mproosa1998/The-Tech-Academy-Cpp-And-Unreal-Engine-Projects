#include <iostream>
using namespace std;

class Shape {
public:
    string color{};
    float getArea() {
    }
};

class Triangle : public Shape {
public:
    float height{};
    float base{};
    void getArea() {
        cout << "Area of triangle equals: " << height * base / 2 << '\n';
    }
};

class Rectangle : public Shape {
public: 
    float height{};
    float width{};
    void getArea() {
        cout << "Area of rectangle equals: " << height * width << '\n';
    }
};

class Circle : public Shape {
public:
    float radius;
    void getArea() {
        cout << "Area of circle equals: " << 3.14 * pow(radius,2) << '\n';
    }
};


int main()
{
    Circle circle = Circle();
    circle.radius = 10;
    circle.getArea();
    circle.color = "blue";

}
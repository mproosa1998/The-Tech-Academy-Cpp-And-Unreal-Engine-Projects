#include <iostream>
using namespace std;

class Dog {
public:
    string breed{};
    string color{};
    string height{};
    string weight{};

    void shake() {
        cout << "Shaking\n";
    }

    void sit() {
        cout << "Sitting\n";
    }

    void layDown() {
        cout << "Laying down\n";
    }

};

int main()
{
    Dog dog = Dog();
    dog.breed = "Hound";
    dog.color = "Brown";
    dog.height = "2 feet";
    dog.weight = "60 pounds";
    dog.shake();
    dog.sit();
    dog.layDown();
}
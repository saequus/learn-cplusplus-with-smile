#include <iostream>
using namespace std;


class Animal {
public:
    Animal();
    string name;
    string kind;
    void sleep();
    void run();
    void showKind();
};

void Animal::sleep() {
    if (name.empty()) name = "It";
    cout << name << " sleeps!" << endl;
}

void Animal::run() {
    if (name.empty()) name = "It";
    cout <<  name << " runs!" << endl;
};

void Animal::showKind() {
    if (!kind.empty()) {
        cout << "It is a/an" << kind << "!" << endl;
    } else {
        cout << "The animal has no kind." << endl;
    }
}

Animal::Animal() = default;

#include <iostream>
#include "Animal.cpp"
#include "Cat.cpp"
#include "Dog.cpp"
#include "Output.cpp"
using namespace std;

int main() {

    // Creating basic implementation of an animal
    Animal first = Animal();
    first.name = "Basic Animal";
    first.kind = "animal";
    first.run();
    first.sleep();
    first.showKind();

    cout << endl;

    // Creating cat implementation of an animal
    Cat second = Cat();
    second.kind = "cat";
    second.name = "Tommy The Cat";
    second.run();
    second.sleep();
    second.meow();
    second.showKind();

    cout << endl;

    // Creating cat implementation of an animal
    Dog third = Dog();
    third.kind = "dog";
    third.name = "Garry The Dog";
    third.run();
    third.sleep();
    third.bark();
    third.showKind();

    cout << endl;

    // Polymorphism example
    makeOutput(5);
    makeOutput(42634333266);
    makeOutput(-0.23);
    makeOutput(9, 2.356);

    return 0;
}

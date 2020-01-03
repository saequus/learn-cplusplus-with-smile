#include <iostream>
#include "EquipmentSet.cpp"

using namespace std;

int main () {

    // Initialize equipment instance
    auto* first = new Equipment;
    first->name = "FIRST";
    first->number = 12;
    first->printNumber();

    // Initialize refrigerator instance
    auto* second = new Refrigerator;
    second->name = "SECOND";
    second->number = 14;
    second->printNumber();

    cout << endl;

    // Increasing number
    first->increaseNumberBy(2);
    second->increaseNumberBy(2);
    first->printNumber();
    second->printNumber();

    cout << endl;

    // Decreasing number
    first->decreaseNumberBy(5);
    second->decreaseNumberBy(5);
    first->printNumber();
    second->printNumber();

    return 0;
}
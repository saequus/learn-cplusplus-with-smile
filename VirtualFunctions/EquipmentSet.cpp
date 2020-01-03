#include <iostream>

using namespace std;

class Equipment {
public:
    string name;
    int number;
    void decreaseNumberBy(int i) {
        number = number - i;
    }
    void increaseNumberBy(int i) {
        number = number + i;
    }
    virtual void printNumber() {
        cout << "Equipment "<< name << " has number " << number << "." << endl;
    }
};

class Refrigerator: public Equipment {
public:
    void printNumber() override {
        cout << "Refrigerator " << name << " has number " << number << "." << endl;
    }
};
//Vectors are same as dynamic arrays with the ability to resize itself automatically
//when an element is inserted or deleted, with their storage being handled automatically
//by the container. Vector elements are placed in contiguous storage so that they
//can be accessed and traversed using iterators. In vectors, data is inserted at the end.

//Inserting at the end takes differential time, as sometimes there may be a need of extending
//the array. Removing the last element takes only constant time because no resizing happens.
//Inserting and erasing at the beginning or in the middle is linear in time.

// Methods of the vector class: begin, end, rbegin, rend, cbegin, cend, crbegin, crend
// size, max_size, capacity, resize, schrink_to_fit, reserve
// at, front, back, data

#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::cout << "Playing with vectors" << std::endl;
    vector<int> vec;
    vec.reserve(10);

    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }


    cout << "\nOutput of begin and end: ";
    for (auto i = vec.begin(); i < vec.end(); ++i) {
        cout << *i << " ";
    }

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = vec.cbegin(); i < vec.cend(); ++i) {
        cout << *i << " ";
    }

    cout << "\nOutput of rbegin and rend: ";
    for (auto i = vec.rbegin(); i < vec.rend(); ++i) {
        cout << *i << " ";
    }

    cout << "\nOutput of crbegin and crend: ";
    for (auto i = vec.crbegin(); i < vec.crend(); ++i) {
        cout << *i << " ";
    }

    cout << endl << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Max size: " << vec.max_size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    vec.push_back(11);
    cout << "New capacity and size after first push: "  << vec.capacity() << " " << vec.size() << endl;

    vec.push_back(12);
    cout << "New capacity and size after second push: " << vec.capacity() << " " << vec.size() << endl;
    vec.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << vec.capacity() << endl;
    if (vec.empty()) {
        cout << "Vector empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    cout << "Front, back and at(3) elements: " << vec.front() << " " << vec.back() << " " << vec.at(3) << endl;

    return 0;
}

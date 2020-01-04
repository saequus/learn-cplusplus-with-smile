#include <iostream>
#include <vector>

using namespace std;
/*
 * Allocating memory in array and vector
 *
 * Article: Do not waste time with STL vectors
 * https://lemire.me/blog/2012/06/20/do-not-waste-time-with-stl-vectors/
 */

int total(const int *pInt, int n);
int total(const vector<int>& pInt);

// The conventional approach is to allocate the memory using new C++ features
void make_new_style_total(int N) {
    int * bigarray = new int[N];
    for(unsigned int k = 0; k<N; ++k)
        bigarray[k] = k;
    int sum = total(bigarray, N);
    delete [] bigarray;
    cout << "Sum of array elements using new style syntax:" << sum << endl;
};

// STL approach is to allocate the memory using
void make_stl_style_total(int N) {
    vector<int> bigarray(N);
    for(unsigned int k = 0; k<N; ++k)
        bigarray[k] = k;
    int sum = total(bigarray);
    cout << "Sum of vector elements using STL syntax: " << sum << endl;
}

int total(const vector<int>& pInt) {
    int sum = 0;
    for (auto& n : pInt)
        sum += n;
    return sum;
}

int total(const int arr[], int N) {
    int sum = 0;
    for (int i=0; i<N; ++i)
        sum += arr[i];
    return sum;
}
#include <iostream>
using namespace std;

template <typename T>
void swapVals(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T findMax(T arr[], int n) {
    T maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    // Testing with int
    int x = 10, y = 25;
    swapVals(x, y);
    cout << "Swapped ints: x = " << x << ", y = " << y << endl;

    int intArr[] = {4, 19, 2, 42, 11};
    cout << "Max int: " << findMax(intArr, 5) << endl;

    // Testing with double
    double d1 = 3.14, d2 = 9.81;
    swapVals(d1, d2);
    cout << "Swapped doubles: d1 = " << d1 << ", d2 = " << d2 << endl;

    double dblArr[] = {1.5, 7.25, 4.8, 2.1};
    cout << "Max double: " << findMax(dblArr, 4) << endl;

    return 0;
}
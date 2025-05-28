#include <iostream>
using namespace std;

// Template function
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << "Maximum of 10 and 20: " << findMax<int>(10, 20) << endl;
    cout << "Maximum of 5.5 and 2.8: " << findMax<float>(5.5, 2.8) << endl;
    cout << "Maximum of 'a' and 'z': " << findMax<char>('a', 'z') << endl;

    return 0;
}

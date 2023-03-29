#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::string;

// maxv: return the maximum value in a vector
template <typename T>
T maxv(const vector<T> &v) {
    T max_val = v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > max_val) {
            max_val = v[i];
        }
    }
    return max_val;
}

int main() {
    // test maxv with vector<int>
    auto v1 = vector<int>{1, 2, 3, 4, 5, 0, -1, -2, -3, -4, -5};
    cout << "maxv(v1) = " << maxv(v1) << endl;

    // test maxv with vector<string>
    auto v2 = vector<string>{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    cout << "maxv(v2) = " << maxv(v2) << endl;
}

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector(const string &label, const vector<int> &v) {
    cout << label << ": ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void fibonacci(int x, int y, vector<int> &v, int n) {
    for (int i = 0; i < n; ++i) {
        v.push_back(x);
        int temp = x + y;
        x = y;
        y = temp;
    }
}

// main function to test fibonacci
int main() {
    auto v1 = vector<int>{};
    fibonacci(1, 1, v1, 10);
    print_vector("v1", v1);
}

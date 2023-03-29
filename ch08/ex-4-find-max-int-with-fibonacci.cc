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

void find_max_int_with_fibonacci() {
    auto v = vector<int>{};
    int a = 1;
    int b = 1;
    while (true) {
        v.clear();
        fibonacci(a, b, v, 3);
        if (v[2] < 0) {
            print_vector("max int is around", v);
            break;
        }
        a = v[1];
        b = v[2];
    }
}

int main() {
    find_max_int_with_fibonacci();
}

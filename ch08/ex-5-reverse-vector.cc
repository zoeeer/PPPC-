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

void reverse_vector(const vector<int> &v, vector<int> &rv) {
    for (int i = v.size() - 1; i >= 0; --i) {
        rv.push_back(v[i]);
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// reverse vector in place, using swap
void reverse_vector_in_place(vector<int> &v) {
    for (int i = 0; i < v.size() / 2; ++i) {
        swap(v[i], v[v.size() - 1 - i]);
    }
}

int main() {
    auto v1 = vector<int>{1, 3, 5, 7, 9};
    auto v1o = vector<int>{};
    reverse_vector(v1, v1o);
    print_vector("v1o", v1o);

    auto v2 = vector<int>{1, 3, 5, 7, 9};
    reverse_vector_in_place(v2);
    print_vector("v2", v2);
    auto v3 = vector<int>{1, 3, 5, 7, 9, 11};
    reverse_vector_in_place(v3);
    print_vector("v3", v3);
}

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector(const string &label, const vector<string> &v) {
    cout << label << ": ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reverse_vector(const vector<string> &v, vector<string> &rv) {
    for (int i = v.size() - 1; i >= 0; --i) {
        rv.push_back(v[i]);
    }
}

void my_swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// reverse vector in place, using swap
void reverse_vector_in_place(vector<string> &v) {
    for (int i = 0; i < v.size() / 2; ++i) {
        swap(v[i], v[v.size() - 1 - i]);
    }
}

// main function to test fibonacci
int main() {
    auto v1 = vector<string>{"hello", "world", "this", "is", "a", "test"};
    auto v1o = vector<string>{};
    reverse_vector(v1, v1o);
    print_vector("v1", v1);
    print_vector("v1o", v1o);

    auto v2 = vector<string>{"hello", "world", "this", "is", "another", "test"};
    reverse_vector_in_place(v2);
    print_vector("v2", v2);
    auto v3 = vector<string>{"hello", "world", "this", "is", "yet", "another", "test"};
    reverse_vector_in_place(v3);
    print_vector("v3", v3);
}

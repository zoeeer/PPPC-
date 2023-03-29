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

// main function to test print_vector
int main() {
    vector<int> v1{1, 2, 3, 4, 5};
    print_vector("v1", v1);
}

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::string;

/*
// original version
void print_until_s(vector<string> v, string quit)
{
    for(string s : v) {
        if (s==quit) return;
        cout << s << '\n';
    }
}
*/

// improved version: pass by const reference
void print_until_s(vector<string> &v, const string &quit)
{
    for (string s: v) {
        if (s == quit) return;
        cout << s << '\n';
    }
}

void print_until_ss(vector<string> &v, const string &quit) {
    // print until quit is found the second time
    int count = 0;
    for (string s: v) {
        if (s == quit) {
            ++count;
            if (count == 2) return;
        }
        cout << s << '\n';
    }
}

int main() {
    // test print_until_s
    vector<string> v1{"hello", "world", "this", "is", "a", "test"};
    cout << "print_until_s(v1, \"is\"): " << endl;
    print_until_s(v1, "is");
    cout << "print_until_s(v1, \"test\"): " << endl;
    print_until_s(v1, "test");

    // test print_until_ss
    vector<string> v2{"hello", "world", "this", "is", "a", "test", "again", "and", "again"};
    cout << "print_until_ss(v2, \"is\"): " << endl;
    print_until_ss(v2, "is");
    cout << "print_until_ss(v2, \"again\"): " << endl;
    print_until_ss(v2, "again");
}

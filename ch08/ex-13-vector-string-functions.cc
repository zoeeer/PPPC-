#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::string;

vector<int> lengths_of_strings(const vector<string> &vs) {
    vector<int> v;
    for (string s: vs) {
        v.push_back(s.size());
    }
    return v;
}

int find_longest_string(const vector<string> &vs) {
    // return the index of the longest string
    if (vs.size() == 0) {
        return -1;
    }
    int longest = 0;
    for (int i = 0; i < vs.size(); ++i) {
        if (vs[i].size() > vs[longest].size()) {
            longest = i;
        }
    }
    return longest;
}

string& find_shortest_string(vector<string> &vs) {  // cannot be const if we want to return a reference
    // return the index of the shortest string
    int shortest = 0;
    for (int i = 0; i < vs.size(); ++i) {
        if (vs[i].size() < vs[shortest].size()) {
            shortest = i;
        }
    }
    return vs[shortest];
}

int find_lexicographically_first_string(const vector<string> &vs) {
    // return the index of the lexicographically first string
    if (vs.size() == 0) {
        return -1;
    }
    int first = 0;
    for (int i = 0; i < vs.size(); ++i) {
        if (vs[i] < vs[first]) {
            first = i;
        }
    }
    return first;
}

int find_lexicographically_last_string(const vector<string> &vs) {
    // return the index of the lexicographically last string
    if (vs.size() == 0) {
        return -1;
    }
    int last = 0;
    for (int i = 0; i < vs.size(); ++i) {
        if (vs[i] > vs[last]) {
            last = i;
        }
    }
    return last;
}

int main() {
    // test lengths_of_strings
    auto vs = vector<string>{"this", "is", "a", "test", "of", "the", "emergency", "broadcast", "system"};
    cout << "strings: ";
    for (string s: vs) {
        cout << s << " ";
    }
    cout << endl;
    auto v = lengths_of_strings(vs);
    cout << "lengths of strings: ";
    for (int i: v) {
        cout << i << " ";
    }
    cout << endl;

    // test find_longest_string
    cout << "longest string: " << vs[find_longest_string(vs)] << endl;
    cout << "shortest string: " << find_shortest_string(vs) << endl;

    // test find_lexicographically_first_string
    cout << "lexicographically first string: " << vs[find_lexicographically_first_string(vs)] << endl;
    cout << "lexicographically last string: " << vs[find_lexicographically_last_string(vs)] << endl;
}

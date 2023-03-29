#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

void print_names_with_ages(const vector<string> &names, const vector<int> &ages) {
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " is " << ages[i] << " years old" << endl;
    }
}

void sort_names_with_ages(vector<string> &names, vector<int> & ages) {
    for (int i = 0; i < names.size() - 1; ++i) {
        for (int j = i + 1; j < names.size(); ++j) {
            if (names[i] > names[j]) {
                string temp_name = names[i];
                names[i] = names[j];
                names[j] = temp_name;
                int temp_age = ages[i];
                ages[i] = ages[j];
                ages[j] = temp_age;
            }
        }
    }
}

int main() {
    // auto names = vector<string>{"Sue", "Bob", "Joe", "Amy", "Ann"};
    // auto ages = vector<int>{20, 30, 40, 50, 60};


    // prompt for user to input 5 names
    cout << "Enter 5 names, seperated by space:" << endl;
    vector<string> names;
    for (int i = 0; i < 5; ++i) {
        string name;
        cin >> name;
        names.push_back(name);
    }

    // prompt for user to input 5 ages
    cout << "Enter 5 ages, seperated by space:" << endl;
    vector<int> ages;
    for (int i = 0; i < 5; ++i) {
        int age;
        cin >> age;
        ages.push_back(age);
    }

    sort_names_with_ages(names, ages);
    print_names_with_ages(names, ages);
}
#include <iostream>
#include <vector>
#include <sstream>
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

void prompt_for_names(vector<string> &names) {
    cout << "Enter names separated by spaces, end with <Enter>:" << std::endl;
    string line;
    std::getline(cin, line);

    std::istringstream iss(line);
    string name;
    while (iss >> name) {
        names.push_back(name);
    }
}

int main() {
    vector<string> names;
    prompt_for_names(names);

    // prompt user to input ages related to each name. The number of ages entered must match the number of names.
    cout << "Enter ages for each name you just provided. The number of ages entered must match the number of names." << endl;
    vector<int> ages;
    for (int i = 0; i < names.size(); ++i) {
        int age;
        cin >> age;
        ages.push_back(age);
    }

    sort_names_with_ages(names, ages);
    print_names_with_ages(names, ages);
}
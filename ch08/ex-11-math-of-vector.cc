#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print_vector(const string &label, const vector<int> &v) {
    cout << label << ": ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

double find_median(const vector<int> &v) {
    // sort the vector
    vector<int> sorted(v);
    sort(sorted.begin(), sorted.end());
    print_vector("sorted", sorted);

    // find median
    int median;
    if (sorted.size() % 2 == 0) {
        median = (sorted[v.size() / 2 - 1] + sorted[v.size() / 2]) / 2.0;
    } else {
        median = sorted[v.size() / 2];
    }
    return median;
}

void math_of_vector(const vector<int> &v, int &smallest, int &largest, double &mean, double &median) {
    smallest = v[0];
    largest = v[0];
    int sum = 0;

    for (int i = 1; i < v.size(); ++i) {
        sum += v[i];
        // find smallest
        if (v[i] < smallest) {
            smallest = v[i];
        }
        // find largest
        if (v[i] > largest) {
            largest = v[i];
        }
    }

    // calculate mean
    mean = 1.0 * sum / v.size();

    // find median
    median = find_median(v);
}

int main() {
    // test math_of_vector
    vector<int> v{98, 3, 24, 10, 12, 67, 77, 50};
    int smallest;
    int largest;
    double mean;
    double median;
    math_of_vector(v, smallest, largest, mean, median);

    print_vector("v", v);
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;
    cout << "mean: " << mean << endl;
    cout << "median: " << median << endl;
}

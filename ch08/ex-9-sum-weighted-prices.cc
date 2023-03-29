#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

double sum_prices(const vector<double>& prices, const vector<double>& weights) {
    double sum = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        sum += prices[i] * weights[i];
    }
    return sum;
}

int main() {
    auto prices = vector<double>{1.0, 2.0, 3.0, 4.0, 5.0};
    auto weights = vector<double>{1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "sum_prices(prices, weights) = " << sum_prices(prices, weights) << endl;
}

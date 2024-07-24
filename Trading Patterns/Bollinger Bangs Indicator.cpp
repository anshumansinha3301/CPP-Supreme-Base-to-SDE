#include <iostream>
#include <vector>
#include <cmath>
// Bollinger Bangs function based code for integration into main code 
// By SDE Anshuman Sinha        
std::pair<double, double> calculateBollingerBands(const std::vector<double>& prices, int period) {
    double sum = 0.0;
    for (int i = prices.size() - period; i < prices.size(); ++i) {
        sum += prices[i];
    }
    double sma = sum / period;

    double variance = 0.0;
    for (int i = prices.size() - period; i < prices.size(); ++i) {
        variance += std::pow(prices[i] - sma, 2);
    }
    double stddev = std::sqrt(variance / period);

    return {sma + 2 * stddev, sma - 2 * stddev};
}

int main() {
    std::vector<double> prices = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int period = 5;
    auto bands = calculateBollingerBands(prices, period);
    std::cout << "Upper Band: " << bands.first << ", Lower Band: " << bands.second << std::endl;
    return 0;
}

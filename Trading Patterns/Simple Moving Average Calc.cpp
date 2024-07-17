#include <iostream>
#include <vector>
// Simple Moving Average Calculation integration code for main code
// By Anshuman Sinha
double calculateSMA(const std::vector<double>& prices, int period) {
    if (prices.size() < static_cast<size_t>(period)) {
        std::cerr << "Not enough data to calculate SMA for the given period." << std::endl;
        return -1; // Error indicator
    }
    
    double sum = 0.0;
    for (size_t i = prices.size() - period; i < prices.size(); ++i) {
        sum += prices[i];
    }
    return sum / period;
}

int main() {
    std::vector<double> prices = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int period = 5;
    
    double sma = calculateSMA(prices, period);
    if (sma != -1) {
        std::cout << "SMA: " << sma << std::endl;
    }
    
    return 0;
}

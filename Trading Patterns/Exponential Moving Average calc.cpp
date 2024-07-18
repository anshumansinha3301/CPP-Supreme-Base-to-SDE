#include <iostream>
#include <vector>
// Exponential moving average calculator function for integration into main division part
// by SDE Anshuman Sinha
double calculateEMA(const std::vector<double>& prices, int period) {
    double multiplier = 2.0 / (period + 1);
    double ema = prices[0];
    for (int i = 1; i < prices.size(); ++i) {
        ema = (prices[i] - ema) * multiplier + ema;
    }
    return ema;
}
 
int main() {
    std::vector<double> prices = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int period = 5;
    double ema = calculateEMA(prices, period);
    std::cout << "EMA: " << ema << std::endl;
    return 0;
}

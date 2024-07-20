#include <iostream>
#include <vector>
// MACD Trading Pattern (Moving average convergence divergence) part for integration into main code
// By Anshuman Sinha 
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
    int shortPeriod = 12;
    int longPeriod = 26;
    int signalPeriod = 9;

    std::vector<double> shortEMA, longEMA, macdLine, signalLine;
     
    for (int i = longPeriod - 1; i < prices.size(); ++i) {
        shortEMA.push_back(calculateEMA({prices.begin() + i - shortPeriod + 1, prices.begin() + i + 1}, shortPeriod));
        longEMA.push_back(calculateEMA({prices.begin() + i - longPeriod + 1, prices.begin() + i + 1}, longPeriod));
        macdLine.push_back(shortEMA.back() - longEMA.back());
    }
  
    for (int i = signalPeriod - 1; i < macdLine.size(); ++i) {
        signalLine.push_back(calculateEMA({macdLine.begin() + i - signalPeriod + 1, macdLine.begin() + i + 1}, signalPeriod));
    }
  
    std::cout << "MACD Line: ";
    for (double value : macdLine) std::cout << value << " ";
    std::cout << "\nSignal Line: ";
    for (double value : signalLine) std::cout << value << " ";
    std::cout << std::endl;

    return 0;
}

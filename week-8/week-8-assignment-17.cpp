#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int mobilesCount, int mobilesUsed, int newMobilePrice, int t)
{
    int newMobiles = mobilesCount - mobilesUsed;                         // 50 - 10 = 40
    int totalPriceForNewMobiles = newMobiles * newMobilePrice;           // 40 * 800 = 32000
    int totalPriceForMobilesUsed = mobilesUsed * (newMobilePrice - 200); // 10 * (800 - 200) = 6000

    int totalPriceBeforeTax = totalPriceForNewMobiles + totalPriceForMobilesUsed; // 38000
    float tax = float(t) / 100;                                                   // 0.20
    int taxMoney = tax * totalPriceBeforeTax;                                     // 0.20 * 38000 = 7600
    int totalPriceAfterTax = totalPriceBeforeTax - taxMoney;                      // 38000 - 7600 = 30400

    return totalPriceAfterTax;
}

int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}
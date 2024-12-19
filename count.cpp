#include <iostream>
using namespace std;
int countDigits(int number) {
    if (number < 0) {
        number = -number;
    }
    int count = 0;
    do {
        count++;
        number /= 10;
    } while (number != 0);

    return count;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int digitCount = countDigits(number);
    cout << "The number of digits in " << number << " is: " << digitCount << endl;
    return 0;
}

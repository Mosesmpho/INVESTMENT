#include <iostream>
using namespace std;

int main() {

    int years = 1;
    float Balance = 0;

    while (years < 19) {

        Balance += 5000;
        years++;

    }
    cout << Balance;

    return 0;


}
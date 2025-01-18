#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    cin >> a >> b;

    while (a <= b) {  // Loop while Limak's weight is less than or equal to Bob's
        a *= 3;       // Limak's weight triples
        b *= 2;       // Bob's weight doubles
        c++;          // Increment year counter
    }

    cout << c;        // Output the number of years
    return 0;
}

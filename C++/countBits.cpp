#include <bits/stdc++.h>
using namespace std;

short countBits(unsigned int x) {
    short num_bits = 0;
    while (x) {
        num_bits += x & 1;
        x >>= 1;
    }
    return num_bits;
}

int main() {
    cout << countBits(143) << endl;
    return 0;
}
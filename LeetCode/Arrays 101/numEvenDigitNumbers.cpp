//  LeetCode - numEvenDigitNumbers.cpp
//  Created by Eric Mervin on 04/02/21.

#include <iostream>
using namespace std;

int main() {
    //Start clock
    auto start = chrono::steady_clock::now();
    
    
    
    //Printing runtime
    auto end = chrono::steady_clock::now();
    double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
    cout << "Elapsed Time(s): " << elapsedTime / 1e9 << endl;
    return 0;
}

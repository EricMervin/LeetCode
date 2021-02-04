//  LeetCode - numEvenDigitNumbers.cpp
//  Created by Eric Mervin on 04/02/21.

#include <iostream>
using namespace std;

int getDigits(int a){
    int digitsCount = 0;
    
    while(a){
        a /= 10;
        digitsCount++;
    }
    
    return digitsCount;
}

int findNumbers(int arr[], int size){
    int count = 0, digits, i;
    
    for(i = 0; i < size; i++){
        digits = getDigits(arr[i]);
        if(digits%2 == 0)
            count++;
    }
    
    return count;
}

int main() {
    //Start clock
    auto start = chrono::steady_clock::now();
    
    //Declaring variables
    int arrSize, i;
    
    cout << "Array Size: ";
    cin >> arrSize;
    int intArr[arrSize];
    
    for(i = 0; i < arrSize; i++){
        cin >> intArr[i];
    }
    
    //Outputing the result
    cout << "Numbers with even digits: " << findNumbers(intArr, arrSize) << endl;
    
    //Printing runtime
    auto end = chrono::steady_clock::now();
    double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
    cout << "\nElapsed Time(s): " << elapsedTime / 1e9 << endl;
    return 0;
}

//Test Case
// 5
// 12 345 2 6 7896
// Ans: 2

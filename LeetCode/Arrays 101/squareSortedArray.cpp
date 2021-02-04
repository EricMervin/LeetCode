//  LeetCode - squareSortedArray.cpp
//  Created by Eric Mervin on 04/02/21.

#include <iostream>
using namespace std;

void sortSquares(int arr[], int size){
    int i, left = 0, right = size-1, tempInt;
    int intArr[size];
    
    for(i = size-1; i >= 0; i--){
        if(abs(arr[left]) < abs(arr[right])){
            tempInt = arr[right];
            right--;
        } else {
            tempInt = arr[left];
            left++;
        }
        
        intArr[i] = tempInt*tempInt;
    }
    
    for(i = 0; i < size; i++)
        cout << intArr[i] << " ";
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
    
    //Sorting vector
    sortSquares(intArr, arrSize);
    
    //Printing runtime
    auto end = chrono::steady_clock::now();
    double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
    cout << "\n\nElapsed Time(s): " << elapsedTime / 1e9 << endl;
    return 0;
}

// 5
// -4 -1 0 3 10
// Ans: 0 1 9 16 100

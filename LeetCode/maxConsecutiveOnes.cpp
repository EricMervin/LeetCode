//  LeetCode - maxConsecutiveOnes.cpp
//
//  Created by Eric Mervin on 04/02/21.
//

#include <iostream>
#include <chrono>
using namespace std;

int maxOnes(int arr[], int size){
    int i, count = 0, maxCount = 0;
    
    for(i = 0; i < size; i++){
        if(arr[i] == 1){
            count++;
            if(i == size-1){
                if(maxCount < count)
                    maxCount = count;
            }
        }
        else{
            if(maxCount < count)
                maxCount = count;
            count = 0;
        }
    }
    
    return maxCount;
}

int main(){
    auto start = chrono::steady_clock::now();
    
    int arrSize, i;
    cout << "Array Size: ";
    cin >> arrSize;
    
    int intArr[arrSize];
    
    for(i = 0; i < arrSize; i++){
        cin >> intArr[i];
    }
    
    cout << "Result: " << maxOnes(intArr, arrSize) << endl;
    
    auto end = chrono::steady_clock::now();
    double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
    cout << "Elapsed Time(s): " << elapsedTime / 1e9 << endl;
    return 0;
}

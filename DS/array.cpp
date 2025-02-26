// second largest and largest element(better sol n=than brute force i.e using sort)
#include <iostream>
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> getSecondOrderElements(int N, vector<int>& A) {
    int largest = INT_MIN, secondLargest = INT_MIN;
   for (int num:A){
       if(num>largest){
           secondLargest=largest;
           largest=num;
       }else if(num>secondLargest){
           secondLargest=num;
       }
       }
       return {largest, secondLargest, };
   }


int main() {
    int N = 5;
    vector<int> A = {1, 2, 3, 4, 5};

    vector<int> result = getSecondOrderElements(N, A);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

// second largest and largest element(most optimal soln)

vector<int> getSecondOrderElements(int N, vector<int>& A) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < N; i++) {
        // Finding the largest and second largest
        if (A[i] > largest) {
            secondLargest = largest;
            largest = A[i];
        } else if (A[i] > secondLargest) {
            secondLargest = A[i];
        }

        // Finding the smallest and second smallest
        if (A[i] < smallest) {
            secondSmallest = smallest;
            smallest = A[i];
        } else if (A[i] < secondSmallest) {
            secondSmallest = A[i];
        }
    }

    return {secondLargest, secondSmallest}; 
}

int main() {
    int N = 5;
    vector<int> A = {1, 2, 3, 4, 5};

    vector<int> result = getSecondOrderElements(N, A);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}




//check if the array is sorted 
bool checkSorted(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) { 
        if (nums[i] > nums[i + 1]) {  // Check if current element is greater than the next
            cout << "Not sorted" << endl;
            return false;
        }
    }
    return true;
}
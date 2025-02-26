// second largest and largest element
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

// second largest and largest element
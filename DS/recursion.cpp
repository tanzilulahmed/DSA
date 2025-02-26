
 //reversed an array
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using namespace std;

void reverse(int arr[], int i, int j) {
   
   if(i>=j) return ;
  
       swap(arr[i], arr[j]);
     
       reverse(arr, i + 1, j - 1);
       
   
}

int main() {
       int n;
       cout << "Enter the size of the array: ";
       cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Take array input
    }
//     int i= arr[0];
//   int j=arr[n-1];
 reverse(arr, 0, n - 1);
    
  
  
 cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//check if a int in palindrome
#include <iostream.h>

using namespace std;

bool isPalindrome(int n) {
     string s = to_string(n);
  int i=0;
  int j= s.length()-1;
  
  
   while(i<j){
       if (s[i] != s[j]) return false;
       i++;
       j--;
   } 
       return true;
   
}

int main() {
       int n;
       cout << "string: ";
       cin >> n;
   
int res= isPalindrome(n);
if (isPalindrome(n)) 
        cout << "Palindrome\n";
    else 
        cout << "Not a palindrome\n";
    
  
    return 0;
}


//using recursion 


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n, int i=0) {
     string s = to_string(n);
  int j= s.length()-1-i;
  
  
   if(i>j) return true;
   
       if (s[i] != s[j]) return false;
       return isPalindrome(n, i+1);
   
}

int main() {
       int n;
       cout << "string: ";
       cin >> n;
   
int res= isPalindrome(n);
if (isPalindrome(n)) 
        cout << "Palindrome\n";
    else 
        cout << "Not a palindrome\n";
    
  
    return 0;
}


//check if a int in palindrome
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i=0) {
    //  string s = to_string(n);
    
  int j= s.length()-1-i;
  
  
   if(i>j) return true;
   
       if (s[i] != s[j]) return false;
       return isPalindrome(s, i+1);
   
}

int main() {
       string n;
       cout << "string: ";
       cin >> n;
   
int res= isPalindrome(n);
if (isPalindrome(n)) 
        cout << "Palindrome\n";
    else 
        cout << "Not a palindrome\n";
    
  
    return 0;
}


// fibonacci using loop
#include <iostream>
using namespace std;

int fibo(int n) {
    int a = 0, b = 1, c;
    if (n <= 1) return n;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fibo(n); // Store the result
    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}


//using recurison finding fibi=onacii 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n<=1) return n;
    return fibo( n-1) + fibo( n-2);
}

int main() {
    int n;
    cin>> n;
cout << "Fibonacci number at position " << n << " is: " << fibo(n) << endl;
    return 0;
} 


//occurence of a string usinh hash array
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter the string: ";
    cin >> s;
int hash[256]={0};
for(int i=0; i<s.size(); i++){
       hash[s[i]]+=1;
   }
  char c;
  cout<< "enter char: ";
  cin>>c;
  cout<<"Total occurence is: "<< hash[c];
    return 0;
}



//no of ocurence of int using hash array 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n; // Input size of array

 vector<int> arr(n);
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
// sort(arr, arr + n);
sort(arr.begin(), arr.end());

int maxElement = arr[n - 1];

vector<int> hash(maxElement + 1, 0);
 int element;
    cout << "element: ";
    cin >> element;
for(int i=0; i<=n; i++){
       hash[arr[i]]+=1;
   }
  if (element > maxElement || element < 0) {
        cout << "Element not found in the array.\n";
    } else {
        cout << "Occurrences of " << element << ": " << hash[element] << endl;
    }
    return 0;
}


//using hashmap that is most efficient soln
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n; // Input size of array

 vector<int> v(n);
   for(int i=0; i<n; i++){
       cin>>v[i];
   }
map<int, int> mp;
for(int i=0; i<=n; i++){
       mp[v[i]]+=1;
   }

 int element;
    cout << "element: ";
    cin >> element;
   cout << "Occurrences of " << element << ": " << mp[element] << endl;
    
    return 0;
}

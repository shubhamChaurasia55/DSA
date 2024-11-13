//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        // int max = INT_MIN;
        // int smax = INT_MIN;
        // int n= arr.size();
        
        // for(int i=1;i<n;i++){
        //     if(max<arr[i]){
        //         smax=max;
        //         max=arr[i];
        //     }
        //     else if((arr[i] != max) && smax <arr[i]){
        //         smax=arr[i];
        //     }
        //     else continue;
        // }
        
        // if(smax==INT_MIN) return -1;
        // else return smax;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=n-1;bool b=true;
        while(b && i>0){
            if(arr[i]==arr[i-1]) i--;
            
            else{
                return arr[i-1]; 
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
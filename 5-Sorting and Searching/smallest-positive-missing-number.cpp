//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { sort(arr,arr+n);
        
        if(arr[0]>0 && arr[0]!=1) return 1;
        
        
        for(int i=0;i<n;i++)
        {
            if((arr[i+1]>0 && arr[i]<0) && arr[i+1] != 1) return 1;
            if(arr[i]>=0)
            {
                int ele = arr[i]+1;
                if(arr[i] == arr[i+1]) continue;
                if(arr[i+1] != ele)
                {
                    return ele;
                }
            }
        }
        
        int ele = arr[n-1];
        if(ele<0)
        {
            return 1;
        }
            return ele+1;
        }
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
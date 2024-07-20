#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    string addBinary(string a, string b) {
        int carry =0;
        string ans ="";

        int i = a.length()-1;
        int j = b.length()-1;

        while(i>=0 && j>=0)
        { 
              if(carry == 0){
                if(a[i] == '0' && b[j] == '0' ){
                  ans = '0' + ans;                   
                }
                else if((a[i] == '1' && b[j] == '0')  || a[i] == '0' && b[j] == '1'){
                     ans = '1' + ans;                        
                }
                else if(a[i] == '1' && b[j] == '1' ){
                  ans = '0' + ans;                   
                    carry = 1;
                }
            }
            else  if(carry == 1){
                if(a[i] == '0' && b[j] == '0' ){
                  ans = '1' + ans;                   
                    carry =0;
                }
                else if((a[i] == '1' && b[j] == '0')  || a[i] == '0' && b[j] == '1'){
                     ans = '0' + ans;                                              
                }
                else if(a[i] == '1' && b[j] == '1' ){
                  ans = '1' + ans;                   
                    carry = 1;
                }
               

            }
            i--;
            j--;
        }


         while(i>=0)
        { 
            
                if(a[i] == '0' && carry == 0){
                  ans = '0' + ans;                   
                }                
                else if(a[i] == '1' && carry == 0 ){
                  ans = '1' + ans;                   
                   
                }          
               else if( a[i] == '0'&& carry == 1 ){

                  ans = '1' + ans;                   
                    carry =0;
                }
                else if( a[i] == '1'  && carry == 1){
                  ans = '0' + ans;                   
                    carry = 1;
                }
                i--;
                         
        }

         while(j>=0)
        { 
              
                if(b[j] == '0' && carry == 0 ){
                  ans = '0' + ans;                   
                }                
                else if(b[j] == '1' && carry == 0){
                  ans = '1' + ans;                   
                    
                }
                      
               else if( b[j] == '0' && carry == 1 ){

                  ans = '1' + ans;                   
                    carry =0;
                }
                else if( b[j] == '1' && carry == 1 ){
                  ans = '0' + ans;                   
                    carry = 1;
                }

                j--;               
            
        }

        if(carry == 1)  ans = '1'+ans;


        return ans;
    }
};
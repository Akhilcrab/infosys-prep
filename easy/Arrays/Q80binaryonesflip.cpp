#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
int k;
cin>>k;
int arr[n];
for( int i = 0 ; i < n ; i++){
    cin>>arr[i];
}
int left = 0 , ans = 0, zeroes = 0;

for( int right = 0 ; right < n ; right++){
    if( arr[right] == 0){
        zeroes++;
    }
    while( zeroes > k){
       if( arr[left] == 0) 
        zeroes--;
        left++;
    }
    ans = max( ans , right - left + 1);
}
cout<< ans; 
return 0;
}
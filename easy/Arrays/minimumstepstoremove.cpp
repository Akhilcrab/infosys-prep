#include<bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
cin>> n ;
int arr[n] = {};
for( int i = 0 ; i < n ; i++){
    cin>>arr[i];
}
int maxFreq = 0;
unordered_map< int , int> freq;
for( int i = 0 ; i < n ; i++){
    freq[i]++;
     maxFreq = max(maxFreq, freq[i]);
}
int ans = max( maxFreq , (n+1) /2 );
cout<<ans ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    cin>>n;
    int ans= 0;
    int arr[n] = { };
    if( n == 1) return 0;
    if( arr[n-1] > arr[n-2]) return n-1;
    for( int i = 0 ; i <n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        if(  arr[i+1] < arr[i]  && ( arr[i-1 ] < arr[i])){
            ans = i;
        }    
    }
    cout<<ans;
    return 0;
}
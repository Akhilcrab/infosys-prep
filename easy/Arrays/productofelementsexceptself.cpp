#include<bits/stdc++.h>
using namespace std;
int main(){
    int n= 0;
    cin>>n;
    vector<int> nums(n);
    
for( int i = 0 ; i < n ; i++){
    cin>>nums[i];
}
vector<int> answers(n , 1);
int left = 1;
for( int i = 0 ; i< n ; i++){
    answers[i] = left;
    left = left*nums[i];
}
int right = 1;
for( int i = n-1 ; i >= 0 ; i--){
    answers[i] *= right;
    right = right*nums[i];
}
for( int i = 0 ; i< n; i++){
    cout<<answers[i]<< " ";
}
    return 0;
}
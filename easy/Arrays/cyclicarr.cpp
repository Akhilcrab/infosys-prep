#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    cin>> n;
    int arr[n] = {};
   for( int i = 0 ; i< n ; i++){
    cin>>arr[i];  
   }
   int start = 0;
   cin>>start;

vector<int> res ;
for( int i = 0 ; i < n ; i++)
{
   int index = ( i + start)% n;
   res.push_back(arr[index]);
}

int xorValue = 0;
int value = 0;

for (int i = 0; i < n; i++) {
    xorValue = xorValue ^ res[i];
    value = value + xorValue;
}
cout<<value ;
return 0;

}
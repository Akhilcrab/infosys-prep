#include<bits/stdc++.h>
 using namespace std;
 int main(){
int n;
cin>>n;
int k;
cin>>k;
string s;
cin>>s;

unordered_map< char , int> freq;
int left = 0 , ans = 0;

for( int right = 0 ; right < s.size() ; right++){
    freq[s[right]]++;

 while( freq[s[right]] > 1){
     freq[s[left]]--;
     left++;
 }
  ans = max( ans , right - left + 1 );
}
cout<<ans ;
    return 0;
 }
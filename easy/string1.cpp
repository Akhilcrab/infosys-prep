#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char digit;
    cin>> digit;
    int last = -1;
    for( int i = 0 ; i < s.length() ; i++){
      if( s[i] == digit ) {
        last = i;

     if( i+1 < s.size() && s[i+1] > digit){
        s.erase(i,1);
        cout<< s;
        return 0 ; 
     }
    }
    }
    s.erase(last , 1 );
    cout<< s;
    return 0;

}
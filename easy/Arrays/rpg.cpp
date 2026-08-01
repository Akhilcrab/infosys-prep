#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    cin>>n;
    int initialexperience = 0;
    cin>>initialexperience ;

    vector<pair<int , int>> monsters(n) ;
    for (int i = 0; i < n; i++) {
    cin >> monsters[i].first >> monsters[i].second ;
}
    sort(monsters.begin() , monsters.end());
    int count = 0;
 for (int i = 0; i < n; i++) {
if( initialexperience >= monsters[i].first){
    initialexperience += monsters[i].second ;
    count++;
}else{
    break ;
     }
} 
   cout<<count;
    return 0;
}
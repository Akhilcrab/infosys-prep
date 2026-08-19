class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
       
        long long ans = n*2;
        int s = reservedSeats.size();

        unordered_map<int, unordered_set<int>> mp;
        for(int i = 0; i< s; i++){
            mp[reservedSeats[i][0]].insert(reservedSeats[i][1]);
        }


        for(auto &[row, seats]: mp){
            bool low = true;
            bool mid = true;
            bool high = true;

            for(int seat = 2; seat<=5; seat++){
                if(seats.count(seat)){
                    low = false;
                    break;
                }
            }

            for(int seat = 4; seat<=7; seat++){
                if(seats.count(seat)){
                    mid = false;
                    break;
                }
            }

            for(int seat = 6; seat<=9; seat++){
                if(seats.count(seat)){
                    high = false;
                    break;
                }
            }

            if(low && high){
            }
            else if(low || mid || high){
                ans -= 1;
            }
            else{
                ans -= 2;
            }
        }
        return ans;
    }
};
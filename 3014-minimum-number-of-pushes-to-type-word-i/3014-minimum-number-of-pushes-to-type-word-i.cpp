class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int pushcount = 0;
        for ( int i = 0 ; i < n ; i++){
            pushcount += i/8 + 1;
        }
        return pushcount ;
    }
};

class Solution {
   private:
    bool isVowel( char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int count = 0;
        int maxcount = 0;

        for( int right = 0 ; right < s.length() ; right++){
               if(isVowel(s[right])) count++;

              if( right - left + 1 == k){
                maxcount = max( count , maxcount);
                
                if(isVowel(s[left]))count--;
                left++;
              }
        }
        return maxcount ;
    }
};
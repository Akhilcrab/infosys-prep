class Solution {
public:
    int minimumPushes(string word) {
        int hashTable[26] = {0};

        for (char ch : word) {
            hashTable[ch - 'a']++;
        }


        sort(begin(hashTable), end(hashTable));

        int minPushing = 0;

       
        for (int i = 25, pushCnt = 0; i >= 0; i--) {
            int currEleIdx = 25 - i;

            if (currEleIdx % 8 == 0) {
                pushCnt++;
            }

            minPushing += hashTable[i] * pushCnt;
        }

        return minPushing;
    }
};
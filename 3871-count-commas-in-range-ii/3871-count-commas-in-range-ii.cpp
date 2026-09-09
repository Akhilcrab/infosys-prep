class Solution {
public:
    long long countCommas(long long n) {
       long long t_commas = 0;
       long long base = 1000 ;

       while( base <= n){
        t_commas = t_commas + ( n - base + 1);
        base = base*1000;
       }
               return t_commas ;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int n=0 ;
        int long long a =0 ;
        if (x < 0)
           return false;
        int original=x ;
        while(x!=0){
        n=x%10;
        x=x/10;
        a= a*10 +n;
        
        }
        return original == a;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x < 10)
            return true;
        
        long rtn = 0;
        int tmp = x;
        while (true){
            rtn += tmp % 10;
            if (tmp  < 10)
                break;
            tmp = tmp / 10;
            rtn *= 10;
        }
        if (rtn == x)
            return true;
        else 
            return false;
    }
};
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }

        int left = 0, right = x, result = 0;
        while(left <= right){
            int mid = left + (right-left)/10;
            if(mid == x / mid){
                return mid;
            }
            else if(mid < x/mid){
                result = mid;
                left = mid+1;
            }
            else{
                right = mid+1;
            }
        }
        return result;
    }
};
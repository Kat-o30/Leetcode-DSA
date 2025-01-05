class Solution {
public:
    int addDigits(int num) {
        
        while(num>=10){
            int current_num = 0;
            while(num>0){
                int digit = num%10;
                num /= 10;
                current_num += digit;
                
            }
            num = current_num;
            
        }
        return num;
    }
};
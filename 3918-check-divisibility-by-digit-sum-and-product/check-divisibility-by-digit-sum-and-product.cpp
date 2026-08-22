class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;
        int digit ;
        while(temp !=0){
            digit = temp%10;
            sum = sum+digit;
            product *=digit;
            temp/=10;
        }
        int total = sum + product;
        return n%total==0;
        
    }
};
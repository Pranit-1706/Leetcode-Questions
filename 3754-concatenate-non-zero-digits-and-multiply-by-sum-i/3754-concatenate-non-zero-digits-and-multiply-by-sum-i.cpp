class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        long long sum = 0;
        int power = 0;

        while(n){
            int num = n%10;
            n/= 10;

            sum+= num;

            if(num){
                x+= num * pow(10, power);
                power++;
            }
        }

        return (long long)(sum)*x;
    }
};
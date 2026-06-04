class Solution {
    int waviness(int num){
            int cnt = 0;
            string n = to_string(num);

            for(int i =1; i<n.size()-1; i++){
                bool peak = n[i] > n[i-1] && n[i] > n[i+1];
                bool valley = n[i] < n[i-1] && n[i] < n[i+1];

                if(peak || valley) cnt++;
            }
            return cnt;
        }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i<= num2; i++){
            ans += waviness(i);
        }

        return ans;
    }
};
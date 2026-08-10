class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        int n = hours.size();
        long long ans = 0;

        unordered_map<int,long long>mp;
        for(int i =0; i<n; i++){
            int hour = hours[i]%24;
            if(mp.count(hour)) ans+= mp[hour];

            int rem = (24 - hour)%24;
            mp[rem]++;
        }

        return ans;
    }
};
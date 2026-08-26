class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int min = INT_MAX;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            int sum = 0;
            for (int j = i; j < s.size(); j++) {

                if (s[j] == '1') {
                    sum++;
                }

                if (sum == k) {
                    int len = j - i + 1;
                    string curr = s.substr(i, len);
                    if(len<min || (len==min && curr<ans)){
                        min=len;
                        ans=curr;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
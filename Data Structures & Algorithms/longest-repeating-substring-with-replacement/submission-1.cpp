class Solution {
public:
    int characterReplacement(string s, int k) {
        int res =0;//maximum length of substring 
        int l=0;//left pointer 
        int maxf=0;//this will store max frequency of any single character in the window
        unordered_map<char,int> count;
        for(int r=0;r<s.length();r++){
            count[s[r]]++;
            maxf=max(maxf,count[s[r]]);
            while(r-l+1-maxf>k){
                //it means that r-l+1 (window size)-max f if this is greater than k it means invalid window 
                count[s[l]]--;
                l++;
            }
            res = max(res,r-l+1);
        }
        return res;
        
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
          map<char,int>mpp;
          for(int i=0;i<s.size();i++){
            mpp[s[i]-'a']++;
          }
          map<char,int>mppp;
          for(int i=0;i<t.size();i++){
            mppp[t[i]-'a']++;
          }
          if (mpp==mppp){
            return true;
          }
       return false; 
    }
};

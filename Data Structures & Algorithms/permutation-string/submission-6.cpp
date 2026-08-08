class Solution {
public:
    bool checkInclusion(string s1, string s2) {       int n1 = s1.length();
        int n2 = s2.length();
        if(n1>n2) return false;
        // Create two frequency arrays initialized to size 26 with all 0s
        vector <int> count1(26,0);
        vector<int> count2(26,0);
        //count freq of characters in s1 and first window of s2
        for(int i=0;i<n1;i++){
            count1[s1[i]-'a']++;//each character is mapped directly to an array index from 0 to 25 by subtracting the ASCII value of 'a'//
            count2[s2[i] -'a']++;

        }
        //slide the window across s2
        for(int i=0;i<n2-n1;i++){
            if(count1==count2)
            return true;
            //remove character from left and add new character entering in 
            //sliding window
            
            count2[s2[i]-'a']--;
            count2[s2[i+n1] -'a']++;//i + n1 is the index of the new character entering the window at the right.
            
        }
        return count1 == count2;
        
    }
};

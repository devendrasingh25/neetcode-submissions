class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false ;

        int freq[26] = {};

        for( auto c: s){
            freq[ c - 'a']++ ;
        }

        for(auto c : t){
            freq[c-'a']-- ;
        }

        for(auto x :freq){
            if(x != 0){
                return false ;
            }
        }
        return true;
    }
};

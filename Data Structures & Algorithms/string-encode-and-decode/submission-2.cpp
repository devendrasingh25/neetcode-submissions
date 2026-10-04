class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const string& s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;                 // find the '#' after the length

            int len = stoi(s.substr(i, j - i));      // the length before '#'
            res.push_back(s.substr(j + 1, len));     // take exactly len characters

            i = j + 1 + len;                         // jump to the next word
        }
        return res;
    }
};
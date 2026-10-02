class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string just = strs[0];
      if(just.length() == 0 ) return "";
        for( int i = 1 ; i < strs.size() ; i++ ){
          
          int j = 0 ;
          int z = min(just.length() ,strs[i].length());
          while( j < z  && just[j] == strs[i][j]){
            j++;
          }

          just = just.substr(0,j);
          if(just.length() == 0) return "" ;
            
        }
  return just ;
    
    }
};
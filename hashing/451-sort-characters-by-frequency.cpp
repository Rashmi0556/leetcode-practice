class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char ch:s){
            freq[ch]++;
        }
      multimap<int,char> mm;

      for(auto i:freq){
        mm.insert({i.second,i.first});
      }  

      string ans="";
      for(auto x=mm.rbegin();x!=mm.rend();x++){
        ans+= string(x->first,x->second);
      }

       return ans;

   
    }
};

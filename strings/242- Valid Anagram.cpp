class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> scount,tcount;
        for(int i=0;i<s.size();i++){
            scount[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            tcount[t[i]]++;
        }

        for (auto p : scount) {

           

                if ((tcount.find(p.first) == tcount.end()) || (p.second != tcount.find(p.first)->second)) {

                    return false;
                }    
            
        }
        return true;
        
    
        
        
    }
};

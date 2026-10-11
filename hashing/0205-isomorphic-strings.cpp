class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> idS,idT;
        int nextS=0;
        int nextT=0;

        for(int i=0;i<s.size();i++){
            if(idS.find(s[i])==idS.end()){
                idS[s[i]]=nextS++;
            }
             if(idT.find(t[i])==idT.end()){
                idT[t[i]]=nextT++;
            }
            if(idS[s[i]]!=idT[t[i]]){
                return false;
            }
            
        }
        return true;

        
    }
};

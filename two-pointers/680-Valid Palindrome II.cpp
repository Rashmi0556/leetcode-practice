class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;

        while(left<right){
            if(s[left]==s[right]){
                
            }
            else{
                return ispal( s,left+1,right) || ispal(s, left,right-1);


            }
            left++;
                right--;

        }
        return true;
        
    }
    bool ispal(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

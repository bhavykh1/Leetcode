class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;

        for(int i=0; i<strs[0].length(); i++){
            char ch=strs[0][i];
            bool check=true;
            for(int j=1; j<strs.size(); j++){
                if(strs[j].length()<i || ch!=strs[j][i]){
                    check=false;
                    break;
                }
            }
            if(check==true){
                ans.push_back(ch);
            } else{
                break;
            }
        }
        return ans;
    }
};

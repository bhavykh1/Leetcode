class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        int st=0, end=0;
        int maxlen=1;
        int n=s.length();
        //odd
        for(int i=0; i<n; i++){
            int l=i, r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--; r++;
                } else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>maxlen){
            maxlen=max(maxlen,len);
            st=l+1;
            end=r-1;
            }
        }
        //even
        for(int i=0; i<n; i++){
            int l=i, r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--; r++;
                } else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>maxlen){
            maxlen=max(maxlen,len);
            st=l+1;
            end=r-1;
            }
        }
        return s.substr(st,maxlen);
    }
};

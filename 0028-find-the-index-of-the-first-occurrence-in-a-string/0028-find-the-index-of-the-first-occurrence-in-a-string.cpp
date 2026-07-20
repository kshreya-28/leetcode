class Solution {
public:
    int strStr(string haystack, string needle) {

        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]==needle[0]){
                   int ans=i;
                   int j=0;
                   int k=i;
                   while(j<needle.size() && k<ans+needle.size()){
                                        if(haystack[k]==needle[j]){k++;
                                                                    j++;
                                                                    if(j==needle.size()){return ans;}}
                                        else break;}
                                        }
                                        }
                                    
          return -1;
            
        }   
};
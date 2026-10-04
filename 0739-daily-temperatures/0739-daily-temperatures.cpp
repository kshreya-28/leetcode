class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack <pair<int, int>>st;
        vector<int> ans(n, 0);
        int i=n-1;
        while(i>=0){
            while(!st.empty() && st.top().first<=temperatures[i]){st.pop();}
            if(st.empty()){ans[i]=0;
                           st.push( {temperatures[i],i} );
                           }
            else{ans[i]= st.top().second -i;
                 st.push( {temperatures[i],i} );
                 }      
            i--;              

        }
        return ans;
        
    }
};
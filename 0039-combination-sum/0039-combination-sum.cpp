class Solution {
public:
 
     vector< vector<int> >ans;

    void f(int ind, int target,vector<int>& ds, vector<int>& candidates){

        if(ind>=candidates.size()){
                 if(target==0){ans.push_back(ds);}
                 return;
        }
        //pick
        if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        f(ind,target- candidates[ind],ds, candidates);
        ds.pop_back();
        }
        
        //not pick
        
        f(ind+1, target,ds, candidates);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        f(0,target,ds, candidates);
        return ans;
    }
};
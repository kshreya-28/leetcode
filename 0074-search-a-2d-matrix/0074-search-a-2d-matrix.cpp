class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][0]<=target && target<=mat[i][m-1]){
                       //applying bs 
                       int low= 0;
                       int high=m-1;
                       while(low<=high){
                       int mid=(low+high)/2;
                       if(mat[i][mid]==target){return true;}
                       else if(mat[i][mid]>target){high=mid-1;}
                       else{low=mid+1;}}}

        }
        return false;
    }
};
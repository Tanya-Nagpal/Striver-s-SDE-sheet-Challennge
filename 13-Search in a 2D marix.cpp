bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    //Binary Search
    int low = 0;
    int high = n*m-1;
    int mid = (low + high)/2;
    while(low<=high){
        mid = (low + high)/2;
        if(mat[mid/m][mid%m]<target) low = mid+1;
        else if(mat[mid/m][mid%m]==target) return true;
        else high = mid-1;
    }
    return false;
}

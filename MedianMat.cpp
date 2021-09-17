class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here
        int tmp[r*c];
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                tmp[k++]=matrix[i][j];
            }
        }
        
        sort(tmp , tmp + (r*c));
        
        return tmp[(r*c)/2];
    }
};

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
        // code here
        int k=0;
        int arr[n*n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[k++] = Mat[i][j];
            }
        }
        
        sort(arr,arr+(n*n));
        k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                Mat[i][j]=arr[k++];
            }
        }
        
        return Mat;
    }
};

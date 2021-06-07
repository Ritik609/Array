 //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> v;
        int start_row=0,end_row=r-1,start_column=0,end_column=c-1;
        while(start_row<=end_row && start_column<=end_column){
            for(int i=start_column;i<=end_column;i++){
                v.push_back(matrix[start_row][i]);
                
                
        }
        start_row++;
        for(int i=start_row;i<=end_row;i++){
                v.push_back(matrix[i][end_column]);
                
                
        }
        end_column--;
        if(start_row<=end_row && start_column<=end_column){
        for(int i=end_column;i>=start_column;i--){
                v.push_back(matrix[end_row][i]);
                
                
        }}
        end_row--;
         if(start_row<=end_row && start_column<=end_column){
        for(int i=end_row;i>=start_row;i--){
                v.push_back(matrix[i][start_column]);
                
                
        }}
       start_column++;
    }
     return v;
    }

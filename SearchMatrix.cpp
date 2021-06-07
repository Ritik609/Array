	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int flag=0,i=0,j=M-1;
	    while(i<N && j>=0){
	        if(mat[i][j]==X){
	            flag=1;
	            break;
	        }
	        else if(mat[i][j]<X)
	          i++;
	        else
	          j--;
	    }
	    return flag;
	}

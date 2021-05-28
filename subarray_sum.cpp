 //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> v;
        int i=0,j=0,cs=0,flag=0;
        while(i<=n){
            if(cs<s){
                cs+=arr[i];
                i++;
            }
            else if(cs>s){
                cs-=arr[j];
                j++;
            }
            if(cs==s){
                flag=1;
                break;
            }
        }
        if(flag==1){
            v.push_back(j+1);
            v.push_back(i);
            
        }
        else {
            v.push_back(-1);
            //return v;
        }
        return v;
    }

// arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int n){
        int maxsum=-555,cs=0;
        for(int i=0;i<n;i++){
            cs+=arr[i];
            if(cs>maxsum)
                maxsum=cs;
            if(cs<0)
              cs=0;
        }
        return maxsum;
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int wrapsum=0;
        int nonwrapsum=0;
        int totalsum=0;
        nonwrapsum=kadane(arr,num);
        if(nonwrapsum<0)
          return nonwrapsum;
        for(int i=0;i<num;i++){
            totalsum+=arr[i];
            arr[i]=-arr[i];
            
        }
        
         wrapsum=totalsum+kadane(arr,num);
        return max(wrapsum,nonwrapsum);
    }

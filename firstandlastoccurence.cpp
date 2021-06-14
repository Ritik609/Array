vector<int> find(int arr[], int n , int x )
{
    // code here
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
          {
              count++;
          }
    
        
    }
    vector<int> v;
    int a=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
          {
              a=i;
              break;
          }
}   
v.push_back(a);
          if(a==-1)
            v.push_back(count+a);
          else
            v.push_back(count+a-1);
          return v;
}

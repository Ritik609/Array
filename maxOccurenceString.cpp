//Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
      int arr[26]={0};
      for(int i=0;i<str.size();i++)
        arr[str[i]-'a']++;
        char ans='a';
        int max=0;
      for(int i=0;i<26;i++){
          if(arr[i]>max){
              max=arr[i];
              ans=i+'a';
          }
      }
      return ans;
}

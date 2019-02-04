char* longestPalindrome(char* A) {
    int n=strlen(A);
    int i,j,k,max=0;
    char *o=(char*)malloc(sizeof(char)*n);
    for(i=0;i<n-(max/2);i++)
    {
        
    int count=0;
    if(A[i]==A[i+1])
    {
        count=2;
      j=i+2;
      k=i-1;
      while(j<=n-1&&k>=0)
      {
          if(A[j]==A[k])
          {
              count+=2;
              j++;
              k--;
          } 
          else 
          break;
      }
      if(count>max)
        {
            max=count;
            int r=0;
            for(j=i-(count/2)+1;j<=i+(count/2);j++)
            {
               o[r]=A[j];
               r++;
            }
            o[r]='\0';
            
        }
    }
    j=i-1;
    k=i+1;
    if(i>0&&A[k]==A[j])
    {
       count=1; 
        while(j>=0&&k<=n-1)
        {
            if(A[j]==A[k])
            {
                count+=2;
                j--;
                k++;
            }
            else
            break;
        }
    
        if(count>max)
        {
            int r=0;
            max=count;
            for(j=i-(count/2);j<=i+(count/2);j++)
            {
               o[r]=A[j];
               r++;
            }
            o[r]='\0';
        }
    }
    }
    if(max==0)
    {
    o[0]=A[0];
    o[1]='\0';
    }
    return o;  
}

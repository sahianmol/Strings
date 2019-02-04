/**
 * @input A : String termination by '\0'
 * @input B : String termination by '\0'
 * 
 * @Output Integer
 */
int compareVersion(char* A, char* B) 
{
    int x=0;
    int i=x,j=x,flag=0;
while(1)
{
    int count1=0,count2=0,k1=0,k2=0;
    while(A[i]!='\0')
    {
        if(A[i]=='.')
        {
            break;
        }
        if(A[i]=='0'&&flag==0)
        {
        }
        else
        {
         flag=1;
         count1++;
        }
        i++;
        
    }
    flag=0;
    while(B[j]!='\0')
    {
        if(B[j]=='.')
        {
        break;
        }
        if(B[j]=='0'&&flag==0)
        {
        }
        else
        {
        flag=1;
        count2++;
         }
        j++;
    }
    if(count1>count2)
    return 1;
    else if(count2>count1)
    return -1;
    else
    {
        flag=0;
        int x=i-count1,y=j-count2;
        for(;x<i;x++)
        {
            if(A[x]>B[y])
            return 1;
            else if(A[x]<B[y])
            return -1;
            y++;
        }
        if(A[i]=='\0'&&B[j]=='\0')
            return 0;
        i++;
        j++;
    }
    
}

} 

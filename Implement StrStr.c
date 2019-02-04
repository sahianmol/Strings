int strStr(const char* A, const char* B) {
    int y=strlen(A);
    int u=strlen(B);
    if(u>y)
    return -1;
    int j,i;
    for(i=0;i<y;i++)
    {
        j=0;
        if(A[i]==B[j])
        {
            int p=i;
            while(j<u)
            {
                if(A[p]==B[j])
                {
                    p++;
                    j++;
                }
                else
                {
                break;
                }
            }
        }
        if(j==u)
        return i;
        
    }
    return -1;
}

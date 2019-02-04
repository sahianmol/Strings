int Solution::atoi(const string A) {
   long long int flag=0,i=0,num=0;
    while(isdigit(A[i]) || A[i] == '-'|| A[i] =='+')
    {
        if((A[i]=='-'||A[i]=='+') &&flag == 0)
        {
            i++;
        }
        if(A[i]>=48&&A[i]<=57)
        {
            flag=1;
            if(A[0]=='-')
                num=num*10-(A[i]-'0');
            else
                num=num*10+(A[i]-'0');
            if(num>0&&num>INT_MAX)
                return INT_MAX;
            if(num<0&&num<INT_MIN)
                return INT_MIN;
            i++;
        }
    }
   return num;
}

class Solution {
public:
    int reverse(long int n) {
    string nu = to_string(n);
    long int count = nu.size();
    if(n<0){
        count = count -1;
    }
    long int num = 0;
    long int a = 0;
    for(long int i=count;i>0;i--)
    {
        a = n%10;
        n = n/10;
        if( i > 1)
        {
            long int x= pow(10,i-1);
            num = num + a*x;
        }
        else 
            num = num + a ;
    }
    return (num<INT_MIN || num>INT_MAX) ? 0 : num;
    }
};
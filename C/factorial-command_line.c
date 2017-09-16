#include<stdio.h>

int fact(int n)
{
if(n==0 || n==1)
{
return 1;
}
else{
 return n*fact(n-1);
}
}

int main(int argc, char* argv[])
{
    long int result;
        int n = atoi(argv[1]);
    if(argc!=2)
    {
    exit(1);
    }
    else{
        result = fact(n);
        printf("%d",result);
    }
return 0;
}

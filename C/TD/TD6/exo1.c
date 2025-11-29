#include <stdio.h>

int addition_rec(int a, int b)
{
    if (b==0)
    return a;

    if(b < 0)
        return -1 + addition_rec(a,++b);

    else
    return 1 + addition_rec(a,b-1);
}

int soustraction_rec(int a, int b)
{
    if(b==0)
    return a;

    else if(b<0)
    return 1 + soustraction_rec(a,b+1);

    else
    return -1 + soustraction_rec(a,b-1);
}

int main(){
    int a=1,b=-5;
    int res;
    //res=addition_rec(a,b);
    //printf("%d\n",res);
    res=soustraction_rec(a,b);
    printf("%d\n",res);
}
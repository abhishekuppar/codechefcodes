#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


int input()
{
    int cc = getc(stdin);
    for (;cc < '0' || cc > '9';)  cc = getc(stdin);
    int ret = 0;
    for (;cc >= '0' && cc <= '9';)
    {
        ret = ret * 10 + cc - '0';
        cc = getc(stdin);
    }
    return ret;
}

int main(){

    int t;
    //scanf("%d",&t);
    t = input();
    while(t--)
    {
        int s,i;
        int f=1;
        //scanf("%lld",&s);
        s = input();
        //for(s=1;s<100;s++){
        // f=1;
        long long temp=s,sq=sqrt(s);
        for(i=2;i<=sq;i++)
        {
            while(!(temp%i)){
                temp/=i;
                if(i%4==1) {f=0;break;}
            }
            if(!f||temp==1) break;
        }
        if(temp>1) if(temp%4==1) f=0;
        if(f) printf("IMPERFECT\n");
        else printf("PERFECT\n");
    }
    return 0;
}

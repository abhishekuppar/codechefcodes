#include<stdio.h>
#include<string.h>
//accepted
int main(){
	char ga[1000]={'\0'},aa[1000]={'\0'};
	long int w[1001],count,sum=0,maxCount=0;
	int i,len,n;
	scanf("%d",&n);
	while(n--){
		sum = 0;
		count = 0;
		memset(ga,'\0',sizeof(ga));
		memset(aa,'\0',sizeof(aa));
		memset(w,0,sizeof(w));

		scanf("%d",&len);
		scanf("%s%s",ga,aa);
		for(i=0;i<len+1;i++){
			scanf("%ld",(w+i));
		}
		for(i=0;i<len;i++){
			if(ga[i] == aa[i]){
				count++;
				}
			}
			if(count < len){
				sum = w[0];
				for(i=0;i<=count;i++){
					if(w[i] >= sum){
						sum = w[i];
					}
				}
			}else{
				sum = w[count];
			}
			printf("%ld\n",sum);
		}
	}

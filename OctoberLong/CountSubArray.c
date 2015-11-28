//one test case failing , need to look into it.(need to confirm).
#include<stdio.h>
#include<string.h>
int main(){
	int n,count = 0,i,vals;
	long int a[100001],subArray = 0;
	scanf("%d",&n);
	while(n--){
		count = 1;
		subArray = 0;
		
		memset(a,0,sizeof(a));
		
		scanf("%d",&vals);
		
		for(i=0;i<vals;i++){
			scanf("%ld",(a+i));
			if(i!=0){
				if(a[i] < a[i-1]){
					if(count >= 1){
						subArray += (count*(count+1))/2;
						count = 1;
					}
				}
				else{
					count++;	
				}
			}
		}
		if(count >= 1){
			subArray += (count*(count+1))/2;
		}
		
		printf("%ld\n",subArray);
	}
}

#include<stdio.h>
int fibonacci(int n){
	if(n<=1)
	 return n;
	return(fibonacci(n-1)+fibonacci(n-2));
}
	 int main(){
	 	int n,i;
	 	printf("enter no.of terms:\n");
	 	scanf("%d",&n);
	 	printf("fibonacci series:\n");
	 	for( i=0;i<n;i++){
	 		printf("%d\n",fibonacci(i));
			 }
	 		return 0;
	 }

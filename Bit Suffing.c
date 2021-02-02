#include <string.h>
#include <stdio.h>

int main(){
	char flag[9] = "01111110";
	int a;
	scanf("%d",&a);
	char bit[a+1];
	scanf("%s",bit);
	int count=0;
	printf("%s",flag);
	for(int i=0;i<strlen(bit);i++){
		if(bit[i]=='1'){
			count++;
		}
		else{
			count=0;
		}
		printf("%c",bit[i]);
		if(count==5){
			printf("%c",bit[i]);
			count=0;
		}
	}
	printf("%s\n",flag);
	return 0;
}

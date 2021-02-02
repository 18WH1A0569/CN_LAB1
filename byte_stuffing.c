#include <stdio.h>
#include<string.h>

void convert(char str1[], char stx[], char etx[]){
        int f[100];
        int i=0, size = 0, count=0;
        int bre = strlen(stx);
        int fre = strlen(etx);
        int common = 1;
        int temp = strlen(str1) - (common - 1);

        for(i=0; i<bre; i++){
                f[i] = stx[i];
        }
        f[i] = ' ';
        i++;

        for(int j = 0; j < (strlen(str1) - (common - 1)); j+=common){
                int count = 0, count1 = 0;
                common = 0;
                int meter = j;
                for(int y=0; y<bre; y++){
			if(str1[meter] == stx[y]){
                                count++;
                                common++;
                        }
                        meter++;
                }
                meter = j;
                        for(int y=0; y<fre; y++){
                                if(str1[meter] == etx[y]){
                                        count1++;
                                        common++;
                                }
                                meter++;
                        }
                if(count == bre){
                        f[i] = ' ';
                        f[i+1] = 'e';
                        f[i+2] = 's';
                        f[i+3] = 'c';
                        f[i+4] = ' ';
                        i+=5;
                        for(int y=j; y<bre+j; y++){
                                f[i] = str1[y];
                                i++;
                        }
                        f[i] = ' ';
                        i++;
                }else if(count1 == fre){
                        f[i] = ' ';
                        f[i+1] = 'e';
                        f[i+2] = 's';
                        f[i+3] = 'c';
                        f[i+4] = ' ';
                        i+=5;
                        for(int y=j; y<fre+j; y++){
                                f[i] = str1[y];
                                i++;
                        }
                        f[i] = ' ';
                        i++;
                }else{
                        f[i] = str1[j];
                        i+=1;
                }
                if(common == 0){
                        common++;
                }
        }
        if(f[i] != ' '){
                f[i] = ' ';
                i++;
        }

        for(int w=0; w<fre; w++){
                f[i] = etx[w];
                i++;
        }

        for(int g = 0; g < i; g++){
                printf("%c", f[g]);
        }

        printf("\n");
}

int main(){
        char str1[20];
	char stx[5];
	char etx[5];
	printf("String: ");
        scanf("%s", str1);
	printf("STX: ");
	scanf("%s", stx);
	printf("ETX: ");
	scanf("%s", etx);
        convert(str1, stx, etx);
        return 0;
}


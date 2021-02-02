#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define bucketSize 512

void bktInput(int pktSize,int outRate){
    if(pktSize > bucketSize){
        printf("Bucket overflow\n");
    }
    else {
        while(pktSize > outRate){
            printf("%d bytes outputed\n",outRate);
            pktSize -= outRate;
        }
    
        if(pktSize > 0){
            printf("Last %d bytes sent\n" ,pktSize);
        }
        printf("Bucket output successful\n");
    }
}

int main(){
    int outRate, pktSize;
    srand(time(0));
    printf("Enter output rate : ");
    scanf("%d",&outRate);
    for(int i=1;i<=5;i++){
        pktSize = rand() % 600;
        printf("Packet no %d",i);
        printf("\t Packet size = %d\n",pktSize);
        bktInput(pktSize,outRate);
    }
}
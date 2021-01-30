#include<stdio.h>
#include <stdlib.h>
int main(){
	int window_size,no_of_frames;
	printf("Enter Window Size : ");
	scanf("%d",&window_size);
	printf("Enter number of frames to transmit : ");
	scanf("%d",&no_of_frames);
	int f[no_of_frames];
	int i;
	printf("Enter %d frames : ",no_of_frames);
	for(i=0;i<no_of_frames;i++){
		scanf("%d",&f[i]);
	}
	int count = 0;
	printf("With sliding window protocol, the frames will be sent in the following manner (assuming no corruption of frames)\n");
    printf("\n");
    printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n",window_size);
    printf("\n");
    for(i = 0;i < no_of_frames;i++){
        count += 1;
        printf("%d ",f[i]);
        if(count == window_size){
            count = 0;
            printf("\n"); 
            printf("Acknowledgment of above frames sent is received by sender\n\n");
        }
    }
    printf("\n");
    if(no_of_frames % window_size != 0){
        printf("Acknowledgment of above frames sent is received by sender\n");
    }
	return 0;
}

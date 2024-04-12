#include<stdio.h>
int main(){
    int arr[]={90,43,85,53,87,64};
    int size = 6;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){

            if(arr[j+1]<arr[j]){

            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

            }
        }
    }
    for(int k=0;k<size;k++){
        printf("%d",arr[k]);
        printf("\n");
    }
   


}
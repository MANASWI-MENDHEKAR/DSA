#include<stdio.h>
int linear(int arr[],int n,int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }

    }   
    return -1;
}

int main(){
    int arr[]={12,114,0,4,19};
    int n=5;
    int x=4;
    int result=linear(arr,n,x);
    if(result==-1){
        printf("element not found.");
    }
    else{
        printf("element found at %d positon of array",result);
    }

}
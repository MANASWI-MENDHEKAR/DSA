#include<stdio.h>
int binary(int a[] , int key , int size ){
int start=0;
int end=size-1;
while(start<=end){
int mid=(start+end)/2;
if (a[mid]==key){
    return mid;
}
else if(a[mid]<key){
    start=mid+1;
}
else{
    end=mid-1;
}
}
return -1;
}
int main()
{   
    int a[]={1,2,3,4,5};
    int key=2;
    int size=5;
    int start=0;
    int end=size-1;
    
    int index=binary( a , key , size);
    if(index==-1){
        printf("element not found.");
    }
    else{
        printf("the element was found at %d of array",index);
    }
    return 0;
}




#include<stdio.h>
int main()
{
    int n,i,l,h,key,mid;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in sorted sequence:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf(" enter the element which is to be found");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
    if(key==arr[mid]){
        printf("%d is present at %d location of array",key,mid);
    break;
    } 
    
    else if(key<arr[mid])
    h=mid-1;
    else
    l=mid+1;
}
if(key==-1)
printf(" the element is not found.");
return 0;

}

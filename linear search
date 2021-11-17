/* given an array of non-negative integer design a linear algorithm and implement it using a program to find whether the given element is present in array or not 
Also,find total number of comparisons for each input case. */
#include<stdio.h>
int linear_search(int n,int arr[],int key,int *count){
    int i;
    for(i=0;i<n;i++)
    {
        (*count)++;             // to count the array
        if(arr[i]==key){       //searching the key element among the array
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key,t,ct;
    scanf("%d",&t);             //test case
    while(t--){
        ct=0;
        scanf("%d",&n);        //total no of array
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);     //checking the array
        }
        scanf("%d",&key);             //finding the key element
        int m=linear_search(n,arr,key,&ct);
        if(m==-1){
            printf("not present");
        }
        else{
            printf("present");
        }
        printf("%d",ct);
    }
}

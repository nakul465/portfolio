#include<stdio.h>
int linearsearch(int arr[], int n, int key ){
    for(int i=0; i<n; i++){
        return i;
    }
    return 1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=12;
    int index=linearsearch(arr,n,key);
    if(index i=-1)
        printf("element found at index");
    else
        printf("element not found");
    return n;

}
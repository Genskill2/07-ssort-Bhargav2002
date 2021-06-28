void swap_max (int arr[],int l,int n ){
    int arr[100];
    int max=arr[n],b=arr[n],i,c;
    for(i=n;i<l;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    c=max;
    arr[i]=arr[n];
    arr[n]=c;
}
void ssort(int arr[],int l){
    int arr[100];
    for(int i=0; i<l;i++){
        swap_max(arr,l,i);
    }

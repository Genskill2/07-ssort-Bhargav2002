void swap_max (int arr[],int l,int n ){
    
    int max=arr[n],b=arr[n],i,c;
    for(i=n;i<l;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    c=max;
    arr[i]=b;
    arr[n]=c;
}
void ssort(int arr[],int l){
    
    for(int i=0; i<l;i++){
        swap_max(arr,l,i);
    }
}

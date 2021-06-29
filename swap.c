void swap_max (int arr[],int l,int n ){
    
    int max=-999999,b=arr[n],i,c;
    for(i=n;i<l;i++){
        if(arr[i]>max){
            max=arr[i];
            c=i;
        }
    }
    
    arr[c]=b;
    arr[n]=max;
}
void ssort(int arr[],int l){
    
    for(int i=0; i<l;i++){
        swap_max(arr,l,i);
    }
}

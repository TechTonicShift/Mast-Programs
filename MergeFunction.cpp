void mergefunction (int arr[], int start,int mid,int end){
    int n1=mid-start+1;
    int n2= end-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[start+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        cout<<arr[k]<<" ";
        i++;
        k++;
    }
    while(j<n2){
        cout<<arr[k]<<" ";
        j++;
        k++;
    }
    
}

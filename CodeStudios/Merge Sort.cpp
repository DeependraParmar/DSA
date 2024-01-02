/*
void merge(vector <int> & arr,int s,int e){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
//     copying data from broke array to new array 
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    
//     sorting and merging 
    int i=0,j=0;
    mainArrayIndex = s;
    
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainArrayIndex++] = first[i++];
        }
        else{
            arr[mainArrayIndex++] = second[j++];
        }
    }
    
    while(i<len1){
        arr[mainArrayIndex++] = first[i++];
    }
    while(j<len2){
        arr[mainArrayIndex++] = second[j++];
    }
    
}
void solve(vector <int> &arr,int s,int e){
    int mid = s + (e-s)/2;
    //base case
    if(s>=e){
        return;
    }
    
//     for left part 
    solve(arr,s,mid);
    
//     for right part 
    solve(arr,mid+1,e);
    
//     now merging 
    merge(arr,s,e);
}
void mergeSort(vector < int > & arr, int n) {
    solve(arr,0,n-1);
}
*/
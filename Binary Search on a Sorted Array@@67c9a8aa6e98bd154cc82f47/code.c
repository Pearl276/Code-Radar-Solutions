int binarySearch(int arr[], int n, int target){
    int low=0;
    int high= n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (arr[mid]== target){
            return mid;
        }
        else if(arr[mid]< target){
            low= n+1;
        }
        else{
            high= n-1;
        }
    }
    return -1;
}
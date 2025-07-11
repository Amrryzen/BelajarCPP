#include<stdio.h>
int arr[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
int length = 11;
// int linearSearch(int search){
//     for(int i = 0; i < length; i++){
//         if(arr[i] == search){
//             return i;
//         }
//     }
//     return -1;
// }

int binarySearch(int search){
    int low = 0;
    int high = length-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == search)return mid;
        else if(search<arr[mid]) high = mid -1;
        else if(search>arr[mid]) low = mid+1;
    }
    return -1;
}

int main(){

    //Linear Search//Binary Search

    //int resultIndex = linearSearch(20);
    int resultIndex = binarySearch(5);
    if(resultIndex == -1) printf("Data not found");
    else printf("Index = %d", resultIndex);
    
    return 0;
}
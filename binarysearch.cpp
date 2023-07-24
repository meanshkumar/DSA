// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+mid)/2;
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
    if(key<arr[mid]){
            end=mid-1;
        }
        
    mid= start+ (end-start)/2;
    
  }
}

int main() {
    int index=0;
    int evenarr[6]={1,3,5,27,78,98};
    int oddarr[5]={2,4,7,77,89};
    
    index=binarysearch(evenarr,6,5);
    cout<<  "The index of 5 is "<< index << "."<<endl;
    index=binarysearch(oddarr,5,77);
        cout<<  "The index of 77 is "<< index << "."<<endl;
    
    
    return 0;
}
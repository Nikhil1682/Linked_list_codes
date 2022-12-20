#include<iostream>
#include <limits.h>

using namespace std; 
int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arr[50];
    for(int i=0;i<size;i++){
        cin>>arr[i];
}
cout<<"maximum value in array is "<<getMax(arr,size)<<endl;
cout<<"minimum value in array is "<<getMin(arr,size)<<endl;
    return 0;
}
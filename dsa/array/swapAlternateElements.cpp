#include <iostream>
#include <vector>
using namespace std;

void swapAlternate(vector<int>& arr,int n){
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    else{
        for(int i=0;i<n-1;i+=2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}


int main(){

    int n;
    cout<<"Length of array: "<<endl;
    cin>>n;
    vector<int> arr(n);

    cout<<"Elements of array are: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapAlternate(arr,n);
    cout<<"Array after alternate swap"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

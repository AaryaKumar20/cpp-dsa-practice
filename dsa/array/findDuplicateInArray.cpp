#include <iostream>
#include <vector>
using namespace std;   //Question: Numbers in array range from 1 to n-1 there are all those no at least once .find the duplicate

int duplicate(vector<int>& arr){
    int xor_=0;

    for(int i=0;i<arr.size();i++){ //xor all elements so that duplicate is removed so when xor is done with 1 to n-1 all duplicates become zero and target number stays
        xor_^=arr[i];
    }
    for(int i=1;i<arr.size();i++){  //xor 1 to n-1
        xor_^=i;
    }
    return xor_;
}

int main(){
    int n;
    cout<<"Number of elements"<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int xor_= duplicate(arr);
    cout<<"The duplicate element is "<<xor_<<endl;

    return 0;
}

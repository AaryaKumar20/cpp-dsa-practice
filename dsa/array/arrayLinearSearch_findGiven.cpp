#include <iostream>
using namespace std;

bool isThere(int arr[],int len,int given,int &index){
    for(int i=0;i<len;i++){
        if(given==arr[i]){
                index=i;
            return true;
        }
    }
    index=-1;
    return false;
}


int main(){
    int arr[10];
    int given,index;
    cout<<"Number to find"<<endl;
    cin>>given;

    int len =sizeof(arr)/sizeof(arr[0]);
    cout<<"The numbers in array are: "<<endl;

    for(int i=0;i<len;i++){

        cin>>arr[i];
    }

    bool flag = isThere(arr,len,given,index);
    if(flag){
        cout<<"Given number is at index: "<<index<<endl;
    }
    else{
        cout<<"Given number is not there"<<endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

void arrMinMax(int arr[],int len,int &minimum,int &maximum){
    maximum=minimum=arr[0];
    for(int i=1;i<len;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
        }
        if(minimum>arr[i]){
            minimum=arr[i];        }
        }
}


int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int len=sizeof(arr)/sizeof(arr[0]);

    int maximum,minimum;
    arrMinMax(arr,len,minimum,maximum);
    cout << "Max = " << maximum << endl;
    cout << "Min = " << minimum << endl;
    return 0;
}

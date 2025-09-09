#include <iostream>
#include <vector>
using namespace std;
int Unique(vector<int>& arr,int n){

    for(int i=0;i<n;i++){
        int times=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) times++;
        }
        if(times==1){
            return arr[i];
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter size of array(should be odd)"<<endl;
    cin>>n;
    int un;
    vector<int> arr(n);

    cout<<"Enter elements of array"<<endl;  //All except one number should be there twice
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    un=Unique(arr,n);
    cout<<"Unique number is: "<<un<<endl;
    return 0;
}

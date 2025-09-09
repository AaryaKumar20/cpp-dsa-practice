#include <iostream>
#include <vector>
using namespace std;
void Unique(vector<int>& arr,int n,int &un){
    un=0;
    for(int i=0;i<n;i++){
        un^=arr[i];
    }

}

int main(){
    int n;
    cout<<"Enter size of array(should be odd)"<<endl;
    cin>>n;
    int un=0;
    vector<int> arr(n);

    cout<<"Enter elements of array"<<endl;  //All except one number should be there twice
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Unique(arr,n,un);
    cout<<"Unique number is: "<<un<<endl;
    return 0;
}

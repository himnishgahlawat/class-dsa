#include<bits/stdc++.h>
using namespace std;
int main() {
    // vector<int> arr={10,-5,5,10,-100,23,14};
    // int n = arr.size();
    // for(int i = 0;i<n;i++) {
    //     int j=i;
    //     while(j>0 && arr[j-1]> arr[j]){
    //         int temp=arr[j-1];
    //         arr[j-1]=arr[j];
    //         arr[j]=temp;
    //         j--;
    //     }
    // }
    // for(int i = 0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }


    
    // vector<int> arr={10,20,-5,10};
    // int n = arr.size();
    // int pos=1;
    // int x=100;

    // vector<int> newarr(n+1);
    // for(int i = 0;i<n;i++) {
    //     newarr[i]=arr[i];
    // }

    // for(int i= n;i>pos;i--) {
    //     newarr[i]=newarr[i-1];
    // }
    // newarr[pos]=x;
    // for(int i = 0;i<n+1;i++) {
    //     cout<<newarr[i]<<" ";
    // }

    //SIMPLER VERSION
    // vector<int> arr={10,20,-5,10};
    // int pos=1;
    // int x=100;
    // int n=arr.size();

    // arr.resize(n+1);

    // for(int i = n;i>pos;i--) {
    //     arr[i]=arr[i-1];

    // }
    // arr[pos]=x;

    // for(int i = 0;i<n+1;i++) {
    //     cout<<arr[i]<<" ";
    // }

    vector<int> arr={10,20,30,40,50};
    int pos=1;
    int n=arr.size();

    for(int i = 1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    // for(int i =pos;i<n-1;i++) {
    //     arr[i]=arr[i+1];
    // }
    // arr.resize(n-1);
    for(int i = 0;i<n-1;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}


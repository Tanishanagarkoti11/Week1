#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key, int &comp){
    for(int i=0;i<n; i++){
        comp++;
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, key;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        int comp=0;
        bool found = linearSearch(arr, n, key, comp);
        if(found){
            cout<<"Present"<<endl;
        } else {
            cout<<"Not Present"<<endl;
        }
        cout<<"Number of comparisons: "<<comp<<endl; 
    }
    return 0;
    }
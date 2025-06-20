#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int ele : arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    //selection sort

    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }

    return 0;
}

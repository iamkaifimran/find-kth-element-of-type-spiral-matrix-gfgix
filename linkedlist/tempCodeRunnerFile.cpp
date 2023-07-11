#include<iostream>
#include<algorithm>
using namespace std;


int main()
{


    int arr[]={0, -10, 1 ,3, -20};
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    

}
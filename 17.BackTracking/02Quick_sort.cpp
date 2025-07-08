#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

//Question :Quick Sort Algorithm  IMPORTANT
//Dry Run :: In Notebook

int partitionLogic(int arr[],int s,int e){
    // step 1 :choose pivot element
    int pivotIdx =s;
    int pivotElement=arr[s];
    //step 2 : find rigth position for pivot element and place it there
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <=pivotElement){
            cnt++;
        }
    }
    // jab me loop ke bahar aya to mere pas pivot ki right ka index he
    int rightIdx=s+cnt;
    swap(arr[pivotIdx],arr[rightIdx]);
    pivotIdx=rightIdx;
    //step 3:left me chote and right me bade element dalne he
    int i=s;
    int j=e;
    while(i<pivotIdx  && j>pivotIdx){
        while (arr[i]<=pivotElement)
        {
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        // here we can get 2 cases 
        // 1) You found elements to swap
        // 2) No need to swap all are already ordered
        if(i<pivotIdx && j > pivotIdx){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIdx;

}
void quickSort(int arr[],int s,int e){
    // base case
    if(s>=e) return;
    //partition logic
    int p=partitionLogic(arr,s,e);
    // rec calls
    // left
    quickSort(arr,s,p-1);
    // right
    quickSort(arr,p+1,e);
}


int main()
{
    int arr[]={8,1,20,30,6,5,60,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}
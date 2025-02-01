#include<iostream>
using namespace std;
int part(int arr[],int low,int high){
    int pv;
    pv = arr[low];
    int i = low+1;
    int j = high;
    do{
        while(arr[i]<=pv){
            i++;
        }
        while(arr[j]>pv){
            j--;
        }
        if(i<j){
            int tmp;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }while(i<j);
    int tmp;
    tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;
    return j;

}
void qksort(int arr[],int low,int high){
    if(low<high){
        int pv;
        pv = part(arr,low,high);
        qksort(arr,pv+1,high);
        qksort(arr,low,pv-1);
    }
}
void show(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

int main() {
   int arr[] = {5,3,2,1};
   int r = sizeof(arr)/sizeof(arr[0]);
//   int s = r-1;

   show(arr,r);
   cout<<"\n After Applyinhg QKSort\n";
   qksort(arr,0,r-1);


 show(arr,r);
    return 0;
}

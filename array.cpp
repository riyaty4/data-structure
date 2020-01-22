#include <iostream>

using namespace std;

int* insertion(int* arr,int* arr1,int s,int n)
{
    int position,element;
   // int n=s+1;
    //int arr1[n];
   //cout<<"enter the position of the element you want to enter";
    cin>>position;
    cin>>element;
    //cout<<endl;
    //cout<<"enter the element you want to enter";
    for(int i=0;i<n;i++)
    {
        if(i<position)
        {
            arr1[i]=arr[i];
        }
        //arr1[i]=arr[i];
        else if(i==position)
        {
            arr1[i]=element;
        }
        else if(i>position)
        {
            //cout<<"        "<<arr[i];
            arr1[i]=arr[i-1];
        }
    
    }
   return arr1;
}

void display(int* arr1,int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;
   int arr[size];
   int n=size+1;
   int arr1[n];
   for(int i=0;i<size;i++)
   {
       cin>>arr[i];
   }
   int* ptr=insertion(arr,arr1,size,n);
   display(ptr,n);
   return 0;
}
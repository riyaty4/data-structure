#include <iostream>
using namespace std;

int* arrayinsertion(int* arr,int size)
{
    int element;
    int position;
    cin>>position;
    cin>>element;
    int temp;
    size++;
    if(position==0)
    {
        for(int i=(size-1);i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[position]=element;
      
    }
    else if(position==(size-1))
    {
        for(int i=0;i<size;i++)
        {
            arr[size-1]=element;
        }
    }
    else
    {
        for(int i=size-1;i>=0;i--)
        {
            if(i>=position)
            arr[i+1]=arr[i];
        }
        arr[position]=element;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int* ptr=arrayinsertion(arr,size);

}
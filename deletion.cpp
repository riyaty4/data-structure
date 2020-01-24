#include <iostream>

using namespace std;

int* deletion(int * arr,int s)
{
    int element;
    cin>>element;
    int i;
    for( i=0;i<s;i++)
    {
        if(arr[i]==element)
        break;
    }
    
    for(int j=i;j<s;j++)
    {
        arr[j]=arr[j+1];
    }
    
  //  s--;

    return arr;
}

int display(int* arr,int s)
{
    s--;
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
   int s;
   cin>>s;
   int arr[s];
   for(int i=0;i<s;i++)
   {
       cin>>arr[i];
   }
  int* arrdis= deletion(arr,s);
  display(arrdis,s);
   
   return 0;
}
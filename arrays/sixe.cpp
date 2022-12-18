#include <iostream>
using namespace std;
int main()
{

    // int arr[] = {1, 2, 3, 4, 5};
    // cout << sizeof(arr) << endl;
    // int length = sizeof(arr) / sizeof(arr[0]);
    // cout << length << endl;
    // // int arr2[4];
    // // cout << arr2[0] << endl;
    // // cout << arr2[1] << endl;
    // // cout << arr2[2] << endl;
    // // cout << arr2[3] << endl;
    // // cout << arr2[4] << endl;
    // // int arr2[5];
    // // length = sizeof(arr2)/sizeof(arr2[0]);
    // // for (int i = 1; i <=length ; i++)
    // // {
    // //     cout<<arr2[i]<<" "<<endl;
    // // }
    // cout<<endl;
    // cout<<endl;
    // for (int i = 0; i <= length; i++)
    // {
    //     cout<<arr[i]<<" "<<endl;
    // }
    int arr[]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[2]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
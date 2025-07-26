//  #include<iostream>
//  using namespace std;
// int linearsearch(int target){
//      int arr[5]={1,2,3,4,5};
//      for (int i = 0; i < 5; i++)    {
//         if (arr[i]==target)
//          {
//              return i;
//          }
         
//      }
//     return -1;
// }
//  int main()
//  {
    
//    cout<<linearsearch(4);
    
//   return 0;
//  }

















#include<iostream>
using namespace std;
int linearsearching(int target){
    int arr[5]={11,22,33,44,55};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return 0;
}
int main()
{
    cout<<linearsearching(55);
 return 0;
}

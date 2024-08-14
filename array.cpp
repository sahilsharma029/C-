// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[5];
//     int n=5;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    int n=10;
//    int arr[10];
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//     arr[i]=2*arr[i];
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int brr(int brr[], int n){
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>brr[i];
//         sum = sum + brr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }
// int main ()
// {
//     int arr[5];
//     int n=5;
//     brr(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[5]={5,8,9,11,13};
//     int target = 9;
//     int n=5;
//     bool flag=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]== target)
//         {
//           flag = 1;
//           cout<<"address of target is " << i<<endl;
//           cout<<"place in array is "<< i+1<< endl;
//            break;
//         }
//     }
//     if(flag == true)
//     {
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
//     return 0;
// }

// linear search using function

// #include <iostream>
// using namespace std;
// bool linearsearch(int arr[],int size, int target)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==target)
//         {

//             cout<<i<<endl;
//             return true;
//         }

//     }
//     return false;
// }
// int main ()
// {

// int arr[5]={11,7,8,9,5};
// int size=5;
// int target=9;
// bool ans = linearsearch(arr,size,target);
// if(ans ==1)
// {
//     cout<<"FOund"<<endl;
// }
// else{
//     cout<<"Not Found"<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int count1 = 0;
//     int count0 = 0;
//     int arr[7] = {0, 1, 1, 1, 0, 1, 0};
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==1)
//         {
//             count1 = count1+1;
//         }
//         else {
//             count0=count0+1;
//         }
//     }
//     cout<<"1's are "<<count1<<endl;
//     cout<<"0's are "<<count0<<endl;
//     return 0;
// }

// Find minimum number in an array

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findminimumnumber(int arr[],int size)
// {
//     int minans = INT_MAX;
//     for(int i=0 ;i < size ;i++)
//     {
//         if(arr[i]<minans)
//         {
//             minans = arr[i];
//         }
//     }
//     return minans;
// }
// int main ()
// {
//     int arr[5]={54,87,56,25,45};
//     int n=5;
//     cout<<findminimumnumber(arr,n)<<endl;

//     return 0;
// }

// find maximum number in an array

// #include<iostream>
// using namespace std;
// int findmaximumnumber(int arr[],int size)
// {
//     int maxnum=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>maxnum)
//         {
//             maxnum=arr[i];
//         }
//     }
//     return maxnum;
// }
// int main()
// {
// int arr[5]={54,99,36,10,55};
// int n=5;
// cout<<findmaximumnumber(arr,n)<<endl;
//     return 0;
// }

// Reverse an array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//     int size = 6;
//     int left = 0;
//     int right = 5;
//     while(left<=right)
//     {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// by using for loop reverse an array

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int arr[5] = {10,20,30,40,50};
//     int size =5;
//     for(int left=0,right = size-1;left<=right;left++,right--)
//     {
//         swap(arr[left],arr[right]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// reverse an array using function

// #include <iostream>
// using namespace std;
// int reversearray(int arr[], int size)
// {
//     int left = 0;
//     int right = 4;
//     for (int i = 0; left <= right; i++)
//     {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int size = 5;
//     reversearray(arr,size);
//     return 0;
// }

// print extreme case

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int arr[5] = {10,20,30,40,50};
//     int size =5;
//     for(int left=0,right = size-1;left<=right;left++,right--)
//     {
//         swap(arr[left],arr[right]);
//         if(left==right){
//             cout<<arr[left]<<" ";
//         }
//         else{

//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         }

//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n=4;
//     int k=5;
//     int &c=n;
//     int &C=c;
//     cout<<"This is a reference variable of n: "<<c<<"\n"<<endl;
//     cout<<"This is a reference variable of n: "<<C<<endl;
//     return 0;
// }

// call by value

// #include<iostream>
// using namespace std;
// int multiplyby2(int k){
//     k=k*2;
//     return k;
// }
// int main ()
// {
//     int n;
//     cin>>n;
//     multiplyby2(n);
//     cout<<n<<endl;
//     return 0;
// }

// call by reference

// #include <iostream>
// using namespace std;
// void multiplyby2(int &k){
//     k=k*2;
// }
// int main ()
// {
//     int n;
//     cin>>n;
//     multiplyby2(n);
//     cout<<n<<endl;
//     return 0;
// }

// find unique element

// #include<iostream>
// using namespace std;
// int findunique(int arr[],int n)
// {
//     int ans =0;
//     for(int i=0;i<n;i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main ()
// {
//     int arr[]={2,3,4,2,3};
//     int n=5;

//     cout<<"Unique element is "<<findunique(arr,n)<<endl;
//     return 0;
// }

// print all pair

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[3]={10,20,30};
//     int n=3;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//  by using function

// #include<iostream>
// using namespace std;
// int printallpair(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main ()
// {
//     int arr[3]={10,20,30};
//     int n=3;
//     printallpair(arr,n);
//     return 0;
// }

// print all triplets

// #include<iostream>
// using namespace std;
// int printalltriplet(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             for(int k=0;k<n;k++)
//             {
//                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main ()
// {
//     int arr[]={10,20,30};
//     int n=3;
//     printalltriplet(arr,n);

//     return 0;
// }

// sort 0's and 1's

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[10]={0,1,0,1,1,0,0,0,0,0};
//     int n=10;
//     int count_0 = 0;
//     int count_1 = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == 0)
//         {
//             count_0 ++;
//         }
//         else{
//             count_1 ++;
//         }
//     }
//     int j=0;
//     for(j=0;j<count_0;j++)
//     {
//         arr[j]=0;
//     }
//     for(int k=j;k<n;k++)
//     {
//         arr[k]=1;
//     }
//     for(int l=0;l<n;l++)
//     {
//         cout<<arr[l]<<" ";
//     }
//     return 0;
// }

// shift by 1

// #include<iostream>
// using namespace std;
// int main ()
// {

//     return 0;
// }

// Binary search

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int start = 0;
//     int end = n-1;
//     int target;
//     cin >> target;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == target)
//         {
//            cout<<mid<<endl;
//            break;
//         }
//         else if (target < arr[mid])
//         {
//             end = mid - 1;

//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return 0;
// }

// find pivot element

#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    1
    return 0;
}
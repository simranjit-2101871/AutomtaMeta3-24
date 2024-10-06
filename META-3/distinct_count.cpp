/*Given tqo positive integer arrays arr1 and arr2 of lengths len1 and len2  repsectivrly, write th number of elements which are not common in the arrays

The input to the fucntion distinctelmentcount consistsj of two arr1 and arr2 and theor lenghts respectively

The function retirns the count of elements which are common in bith the arrays*/

#include<iostream>
using namespace std;
int distinctElementCount(int arr1[], int arr2[], int len1, int len2)
{
int i=0, count=0;
while(i<len1)
{
for(int j=0;j<len2;j++)
{
if(arr1[i]==arr2[j])
{
count+=2;
}
}
i++;
}
return (len1+len2)-count;
}
int main()
{
int l1, l2, result;
cout<<"Enter the lenth of array1 and array2:\n";
cin>>l1>>l2;
int a1[l1], a2[l2];
cout<<"Enter the array1 elements:\n";
for(int i=0; i<l1; i++)
{
cin>>a1[i];
}
cout<<"Enter the array2 elements:\n";

for(int i=0; i<l2; i++)
{
cin>>a2[i];
}
result=distinctElementCount(a1, a2, l1, l2);
cout<<endl<<result;
return 0;
}
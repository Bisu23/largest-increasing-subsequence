// An sequence of number is given
// We have to find the length of a largest increasing subsequence of the sequence
// time complexity is O(n^2)
// space complexity is O(n) 

# include<stdio.h>
# include<stdlib.h>
#include <limits.h>

int max(int a, int b)
{
    return a > b ? a : b;
}


int lis(int *arr,int n)
{ 
 // the array l[ ] will store the length
 // of the longest increasing subsequence 
 // ending at each index i of the input array arr[]
 // initially entries l[i] should be 1 
 // because atleast one element ( itself) will exists
 // in largest increasing subsequence 
  int l[n];
  // since initially l[i] = 1  for each i
  // so l[0] = 1
  l[0] = 1; 
  
  // start first pointer
 for (int i = 1; i< n; i++)
 {
  // since initially l[i] = 1  for each i
  l[i] = 1;
  
  // start the second pointer
  for(int j = 0; j < i; j++)
  {
   // to find out length of longest increasing subsequences 
   // we are interested to 
   // check the i'th entry of arr[]
   // is greater than the j'th entry
   // where 0 <= j <= i-1
   if (arr[i] >= arr[j])
   {
   
    if (l[j] + 1 > l[i])  // instead of this line we can use max(a,b) function defined above
    {
     // next line update the length of the 
     // largest increasing subsequence ending at index i
     l[i] = l[j] + 1;
    }
   }
  }
 }
 // find maxium element in the array l[]
 // which is the length of the largest increasing subsequence
 int max_len = INT_MIN;
 for(int i =0; i < n ; i++)
 {
  if(l[i] > max_len)
  {
   max_len = l[i];
  }
 }
 return max_len;
}


// Driver program to test above function
int main()
{
 int arr[] = { 10,10, 22, 9, 33, 21, 50, 41, 60 };
 // size of the input array
 // here input is pointer of the array
 // sizeof(arry) return number of elements in array
 int n = sizeof(arr) / sizeof(int);
 printf("The number of elements in the array: %d\n",n);
 printf("The length of the largest increasing subsequence is: %d\n", lis(arr,n));
}


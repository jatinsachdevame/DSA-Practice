/* C program to implement Pigeonhole Sort */
#include <bits/stdc++.h> 
using namespace std; 
  
/* Sorts the array using pigeonhole algorithm */
void pigeonholeSort(int arr[], int n) 
{ 
    // Find minimum and maximum values in arr[] 
    int min = arr[0], max = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] < min) 
            min = arr[i]; 
        if (arr[i] > max) 
            max = arr[i]; 
    } 
    int range = max - min + 1; // Find range 
  
    // Create an array of vectors. Size of array 
    // range. Each vector represents a hole that 
    // is going to contain matching elements. 
    vector<int> holes[range]; 
  
    // Traverse through input array and put every 
    // element in its respective hole 
    for (int i = 0; i < n; i++) 
        holes[arr[i]-min].push_back(arr[i]); 
  
    // Traverse through all holes one by one. For 
    // every hole, take its elements and put in 
    // array. 
    int index = 0;  // index in sorted array 
    for (int i = 0; i < range; i++) 
    { 
       vector<int>::iterator it; 
       for (it = holes[i].begin(); it != holes[i].end(); ++it) 
            arr[index++]  = *it; 
    } 
} 
  
// Driver program to test the above function 
int main() 
{ 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    pigeonholeSort(arr, n); 
  
    cout<<"Sorted order is : "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] <<" ";
  
    return 0; 
} 
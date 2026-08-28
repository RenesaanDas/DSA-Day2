#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
 for(int i=n-1; i>=1; i--){
  for (int j=0; j<=i-1; j++) {
   int (arr[j] > arr[j+1]); {
    int temp = arr[j+1];
    arr[j+1] = arr[j];
    arr[j] = temp;
   }
  }
 }
}

int main() {
 int n;
 cin>> n;
 int arr[n];
 for(int i=0; i<n ; i++) {
  cin >> arr[i];
 }
 bubble_sort(arr, n);
 for(int i=0; i<n; i++) {
  cout << arr[i] << " ";
 }
 return 0;
}





//**********THE BEST CASE **************/
#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
 for(int i=n-1; i>=1; i--){
  int didswap = 0; //to check all the elements are in sorted or in unsorted order.
  for (int j=0; j<=i-1; j++) {
   int (arr[j] > arr[j+1]); {
    int temp = arr[j+1];
    arr[j+1] = arr[j];
    arr[j] = temp;
    didswap = 1; // =1 means swaping happens.
   }
  }
  if(didswap == 0){
   break; //if after outerloop run, all the elements in sorting order & no swap happen then from this moment break the loop.
  }
  cout << "runs\n"; //this line will print only when swap happen...if it didn't then the program will stop on the previous line.
 }
}

int main() {
 int n;
 cin>> n;
 int arr[n];
 for(int i=0; i<n ; i++) {
  cin >> arr[i];
 }
 bubble_sort(arr, n);
 for(int i=0; i<n; i++) {
  cout << arr[i] << " ";
 }
 return 0;
}
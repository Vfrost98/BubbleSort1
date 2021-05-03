#include <iostream>
using namespace std;

void bubbleSort(int A[], int x){
  int temp;

  for(int i = 0; i < x-1; i++){
    for(int j = 0; j < x-i-1; j++ ){
      if(A[j] > A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp; 
      }
    }
  }
}

int main() {
  int A[5] = {3, 2, 4, 8, 9}; //created array
  int aSized = 5-1; //array size

  cout << "Unsorted array: " << endl;
  for(int i = 0; i < 5; i++){
      cout << A[i] << " ";
      
  }
  
  cout << endl;

  bubbleSort(A,aSized); //calling the bubble sort function

  cout << endl;

  cout << "Sorted array: " << endl;
  for(int i = 0; i < 5; i++){
      cout << A[i] << " ";
      
  }

  cout << endl;
}

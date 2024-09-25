#include <iostream> 
#include <algorithm> // For std::max and std::min
#include <climits>   // For INT32_MAX and INT32_MIN // for only old version c++
using namespace std;

int swapMaxMin(int arr[], int size){
  int minValue = INT32_MAX;
  int maxValue = INT32_MIN;
  int minValueIndex = 0;
  int maxValueIndex = 0;
  for (int i = 0; i < size; i++)
  {
     minValue = min(arr[i],minValue);
     maxValue = max(arr[i],maxValue);
     if (minValue == arr[i]){
       minValueIndex = i;
     }
     if (maxValue == arr[i])
     {
       maxValueIndex = i;
     }
     
  }
  // cout << maxValue;
  swap(arr[minValueIndex],arr[maxValueIndex]);
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}


int main(){
  int size = 7;
  int arr[] = {12,63,10,14,32,34,89};
  cout << "original value of arr[] : ";
  for (int i = 0; i < size; i++)
  {
     cout << arr[i] << " ";
  }
  cout << endl;
  cout << " swapped value of an arr[] : ";
  swapMaxMin(arr, size);

  return 0;
}

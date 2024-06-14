// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int maxSum= INT_MIN;
//     int k=3;
//     for(int i=0;i<=n-k;i++){
//         int sum=0;
//         for( int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//           maxSum=max(maxSum,sum);
//    }
//   cout<<maxSum;

// }

// #include<iostream>                             
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int maxSum= INT_MIN;
//     int k=4;
//      int prevSum=0;
//      int maxSum=INT_MIN;
//      for(int i=0;i<k;i++){
//         prevSum+=arr[i];
//      }
//      int i=1;
//      int j=k;
//      int maxSum=prevSum;
//      while(j<n){
//          int currSum=prevSum+arr[j]-arr[i-1];
//          if(currSum>maxSum){
//             maxSum=currSum;
//          }
//          prevSum=currSum;
//          i++;
//          j++
//      }
//      cout<<maxSum;
//      return 0;
// }

    


#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    // if (k > n) {
    //     cout << "Window size k is larger than the array size." << endl;
    //     return 1;
    // }

    int maxSum = INT_MIN;
    int prevSum = 0;

    for (int i = 0; i < k; i++) {
        prevSum += arr[i];
    }

    maxSum = prevSum;
    int i = 1;
    int j = k;

    while (j < n) {
        int currSum = prevSum + arr[j] - arr[i - 1];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        prevSum = currSum;
        i++;
        j++;
    }

    cout << maxSum;

    return 0;
}

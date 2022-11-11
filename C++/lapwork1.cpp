#include<iostream>

using namespace std;

int main() {
    int n, k;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    int sum=0;
    for(int i=0; i<n; i+=1){
        if(arr[i]==k){
           sum +=1;
        }
    }
    cout << sum;
    return 0;
}

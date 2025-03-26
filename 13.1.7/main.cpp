#include <iostream>
using namespace std;
int main() {
	
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5, max = arr[0], min = arr[0], sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << ", Avg: " << (sum / size) << "\n";
    
    
    return 0;
}

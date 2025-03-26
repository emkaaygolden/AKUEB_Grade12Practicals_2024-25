#include <iostream>
using namespace std;

double average(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum / size;
}

int main() {
    int nums[] = {2, 4, 6, 8, 10};
    cout << "Average: " << average(nums, 5) << endl;

    return 0;
}

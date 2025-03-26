#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[20];
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    cout << "Concatenated: " << str3 << "\n";
    cout << "Length: " << strlen(str3) << "\n";
    cout << "Comparison: " << strcmp(str1, str2) << "\n";
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	
    int mat1[4][4] = {{1, 2, 3, 4}, 
						{5, 6, 7, 8}, 
							{9, 10, 11, 12}, 
								{13, 14, 15, 16}};
								
								
    int mat2[4][4] = {{16, 15, 14, 13}, 
						{12, 11, 10, 9}, 
							{8, 7, 6, 5}, 
								{4, 3, 2, 1}};
								
    int result[4][4] = {0};
    
    for (int i = 0; i < 4; i++) {
    	
        for (int j = 0; j < 4; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
  
  
    return 0;
}

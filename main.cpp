#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    int a[] = {1, 2, 3, 4, 5, 2, 4, 1, 1};
    int length = sizeof(a) / sizeof(a[0]);
    int b;

    for(i = 0; i < length; i++) {
        for(j = i + 1; j < length; j++) {
            if (a[i] % 2 != 0 && a[j] % 2 != 0) { 
                if (a[i] > a[j]) {
                    b = a[i];
                    a[i] = a[j];
                    a[j] = b;
                }
            } else if (a[i] % 2 == 0) { 
                b = a[j];
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
   for(i = length - 1; i >= 0 ; i--) {
        for(j = i - 1; j >= 0; j--) {
            if (a[i] % 2== 0 && a[j] % 2 == 0) { 
                if (a[i] < a[j]) {
                    b = a[i];
                    a[i] = a[j];
                    a[j] = b;
                }
            } else { break; }
        } 
    } 
    
    for(i = 0; i < length; i++) {
        cout << a[i] << " ";
    }

    return 0;
}








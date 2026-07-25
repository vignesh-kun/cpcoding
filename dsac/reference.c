#include <stdio.h>
int foldingHash(int key, int tableSize) {
    int sum = 0; 
    while (key > 0) {
        sum += (key % 100); // Dividing key into 2-digit parts
        key /= 100;
    }
    return sum % tableSize;
}
int main() {
    int key = 12345, tableSize = 100;
    printf("Folding Method Hash for %d: %d\n", key, foldingHash(key, tableSize));
    return 0;
}
/* 
 * ATTENTION!
 * This task does not have an enforced
 * template in this language!
 *
 * However, you can still submit any custom code.
 */

#include <stdio.h>

int main() {
    int a, count = 0;
    scanf("%d", &a);
    
    for(int i = 0; i < 32; i++) {
        if((a & 1) == 1) {
            count++;
        }
        
        a /= 2;
    }
    
    printf("%d", count);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[15];
    if (scanf("%s", s) != 1) return 0;
    
    int len = strlen(s);
    
    
    if (len > 1) {
        
        char temp = s[0];
        s[0] = s[len - 1];
        s[len - 1] = temp;
    }
    
   
    int ket_qua = atoi(s);
    
    printf("%d\n", ket_qua);
    
    return 0;
}

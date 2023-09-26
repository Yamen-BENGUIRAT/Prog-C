#include <stdio.h>

int main() {
    int d = 0x12345678;  
    int mask4thBit = 1 << 3;   
    int mask20thBit = 1 << 19;
    int is4thBitSet = (d & mask4thBit) != 0;
    int is20thBitSet = (d & mask20thBit) != 0;

    if (is4thBitSet && is20thBitSet) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

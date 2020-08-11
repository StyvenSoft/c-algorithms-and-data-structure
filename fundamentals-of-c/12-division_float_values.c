#include <stdio.h>

int main(void) {
    float plank_length = 10.0f; 
    float piece_count = 4.0f;
    float piece_length = 0.0f;
    piece_length = plank_length/piece_count;
    printf("A plank %f feet long can be cut into %f pieces %f feet long.",
            plank_length, piece_count, piece_length);
     return 0;
}

// Output:

// A plank 10.000000 feet long can be cut into 4.000000 pieces 2.500000 feet long.
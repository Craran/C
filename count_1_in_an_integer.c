#include <stdio.h>

int count_1_in_integer(int integer){
    register int integer_1 = integer;
    integer_1 = integer_1 - ((integer_1 >> 1) & 0x55555555);
    integer_1 = (integer_1 & 0x33333333) + ((integer_1 >> 2) & 0x33333333);
    integer_1 = (integer_1 + (integer_1 >> 4)) & 0x0f0f0f0f;
    integer_1 = integer_1 + (integer_1 >> 8);
    return (integer_1 + (integer_1 >> 16)) & 0xff;

}


int main(){
    int number;
    printf("%d\n", count_1_in_integer(scanf("%d", &number)));
    return 0;
}

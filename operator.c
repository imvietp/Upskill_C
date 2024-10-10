#include <stdio.h>
#include <stdint.h>

/*
    OPERATOR
    - Unary Operator (toán tử một ngôi): ++, --
    - Binary Operator
        +  -  *  /  % 
        ==  <=  >=  !=
        >>  <<  |  &  ^  ~ 
        && || ! 
        =  +=  -=  *=  /=  %=

*/

uint8_t bit_manipulation(uint8_t number_original, uint8_t number_change)
{
    // uint8_t number_original = 1;

    number_change = (number_original >> 1);
    

    // *number_change_2 = (number_original << 1);

    return number_change;
}

int main()
{
    uint8_t number_o;
    uint8_t number_c;
    printf("Type any number you want: ");
    scanf("%hhu", &number_o);
    // uint8_t result = bit_manipulation(&number_one, &number_two);
    uint8_t result = bit_manipulation(number_o, number_c);
    printf("The number after change: %hhu", result);
}
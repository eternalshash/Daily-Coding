//Given an integer num, return the number of steps to reduce it to zero.
//In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
/*
Example 

Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.

if(num1 == 0){
        printf("zero");
    }else if(num1 % 2 < 1){
        printf("even number");
    }else if(num1 % 2 == 1){
        
}

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1;
    printf("What is your number: \n");
    scanf("%d", &num1);
    
    do{
        int num2;
        if(num1 % 2 == 1){
            printf("%d is odd: subtract by 1 and get %d\n", num1, num1 - 1);
            num1 = num1 - 1;
        }
        
        if(num1 % 2 == 0){
            printf("%d is even: divide by 2 and get %d\n", num1, num1 / 2);
            //num2 = num1 / 2;
            num1 = num1 / 2;
        }
    }
    while(num1 - 1 != 0);
    printf("%d is odd: subtract by 1 and get %d\n", num1, num1 - 1);
    
    return 0;
}





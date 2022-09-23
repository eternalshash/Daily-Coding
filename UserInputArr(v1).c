#include <stdio.h>
#include <stdlib.h>

//user iputed array

// code not completed issue with outputting actual array values
/*
Issue seems to be set in the the intilization of the array in the actual code
Output is printing the amount elements

Test case: array with elements 3:
Output:
our array is [22092,]
your array is [22092,]
your array is [22092,]

not able to fix for now but code is accepeted on leet code for now

*/

int main(){
    int i,sum,max,min,avg,size;
   
    printf("Enter the array length : \n");
    scanf("%d",&size);
    
    int ara[size];
    
    if(size < 0){
        printf("error array length must greater than zero");
        
    }else{
        printf("Enter array elements:\n");
        for(i = 0; i < size;  i++){
            scanf("%d", &ara[i]);
        }
    }
    
    
   
    sum = 0;
    max = ara[0];
    min = ara[0];
    for(i = 0; i < size; i++){
        printf("Your array elements are %d\n",ara[i]);
        sum+=ara[i];
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }
    
    // set loop value to intial may cause issue later one in the program
    int loop;
    
    for(loop = 0; loop < i; loop++){
        printf("your array is [%d,]\n",ara[i]);   
    }

    avg=sum/size;
    
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",avg);
    printf("Max number is %d\n",max);
    printf("Min number is %d\n",min);
    
    
    return 0;
}
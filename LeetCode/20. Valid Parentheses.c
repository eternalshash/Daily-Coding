#include <stdio.h>

int main(void) {

    /*
    char word[51];
    int length, mid, i;

    //printf("Enter a word (up to 50 characters): ");
    scanf("%s", word);

    length = strlen(word);
    mid = length / 2;

    int foundT = 0; // Flag to track if 't' or 'T' is found

    for (i = 0; i <= mid; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            foundT = 1;
            break;
        }
    }

    if (foundT) {
        printf("1\n");
    } else {
        foundT = 0; // Reset the flag

        for (i = mid + 1; i < length; i++) {
            if (word[i] == 't' || word[i] == 'T') {
                foundT = 1;
                break;
            }
        }

        if (foundT) {
            printf("2\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
    
    
    */


    /*
    int guess;
    int num;
    int sum = 0;
    int count = 0;

    scanf("%d\n", &guess);


    while(1){
        scanf("%d",&num);

        if(num == guess){
            break;
        }else if(num > guess){
            printf("it is more\n");
            count++;
        }else if(num < guess){
            printf("it is less\n");
            count++;
        }
    }

    printf("Number of tries needed:\n%d",count);
    return 0;


    int amnt;
    scanf("%d", &amnt);

    for(int i = 0; i < amnt; i++){
        printf("\n");
        for(int j = 0; j < amnt; j++){
            printf("*");
        }
    }
    
    
    */



    /*
    int amnt;
    scanf("%d", &amnt);

    double array[amnt];
    int i;

    for(i = 0; i < amnt; i++){
        scanf("%lf", &(array[i]));
    }
    int amntC = 0;

    for(int loop = 0; loop < amnt; loop++){
        if(array[loop] > 10000){
            amntC++;
        }
    }
    printf("%d", amntC);
    
    */




    // 5 weights need to sum up to 110
    // each needs 22
    //5 - amount of boxcars
    // 40.0 -- weight 
    // 12.0

    // out
    // -18(to get to ideal weight 22)
    // 10(to get to ideal weight)

    /*
    int amnt;
    scanf("%d", &amnt);

    double idealval = 110 / amnt;

    double array[amnt];
    int read = 0;
    int cells = 0;
    int i;

    for(i = 0; i < amnt; i++){
        scanf("%lf", &(array[i]));

    }

    //printf("%d", &array[]);
    /*
    for(int loop = 0; loop < amnt; loop++){
        printf("%f ", array[loop]);
    }
    printf("\n");
    

    //printf("%0.2f", avg_weight);

    int change = 0;

    for(int loop = 0; loop < amnt; loop++){
        array[change] = (idealval - array[change]); 
        change++;
        printf("%0.1f\n", array[loop]);
    }
    */


    /*
    int array[10];
    int read = 0;
    int cells = 0;
    int i;

    for(i = 0; i < 10; i++){
        scanf("%d", &(array[i]));

    }
    //printf("%d", &array[]);
    for(int loop = 0; loop < 10; loop++){
        printf("%d ", array[loop]);
    }
    printf("\n");
    int usercell;
    scanf("%d", &usercell);

    printf("%d", (array[usercell]));


    
    

        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }

    int array[3]; // creates space to hold three integers
    array[0] = 18;
    array[1] = 137;
    array[2] = 8;
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);


    

    // 5 6 special tax 36

    int roll1, roll2;

    scanf("%d\n%d", &roll1, &roll2);

    int total = roll1 + roll2;

    if(total >= 10){
        printf("Special tax\n");
        printf("36");
    }else {
        printf("Regular tax\n");
        printf("%d", total * 2);
    }





    
    In this example, you need 295.8 pounds of cement. Since the store only sells cement in increments of 120 pounds
    you will need three bags (360 pounds) since 2 bags (240 pounds) is not enough and
    you cannot buy fractions of a bag. Since bags cost $45 each, the total cost is 45 * 3, or 135 dollars.


    */
   /*
   double hm;

   float p1;

   //hm / bagW (Round) then multiply 45 and return the cost

   scanf("%lf", &hm);

   float ansPround = (float) hm / 120;

   int ansfinal = (int) ansPround;

   if((ansPround - ansfinal) > 0){
        ansfinal++;
        printf("%d", ansfinal * 45);
   }else{
        printf("%d",ansfinal * 45);

   }

    double books;
    double price;

    float totalB;

    scanf("%lf\n", &books);

    scanf("%lf", &price);

    totalB = books / price;

    int ans = (int) totalB;

    printf("%d", ans);

    int people;

    scanf("%d\n", &people);

    float increase;

    scanf("%f", &increase);

    increase = increase / 100;

    float newpop = people + (people * increase);

    int rdown = (int) newpop;

    printf("%d", rdown);
    

    
    // how many grades
    //input the grades (use a for loop for the new line look)
    //int division -> cast then to a float value (%0.2f) 2 decimal places

    int hmgrades;
    int grades;
    int i;
    int r = 0;

    double check;
    
    scanf("%d", &hmgrades);
    for(i = 0; i < hmgrades; i++){
        scanf("%d", &grades);
        r = r + grades;
    }
    check = (double) r;
    printf("%.2lf", check/hmgrades);
    return 0;






    
    int m1;

    scanf("%d", &m1);

    printf("\n");

    int box;

    scanf("%d", &box);

    int nonr = m1 / box;
    int remainder = m1 % box;


    printf("%d\n", nonr);

    printf("%d", remainder);


    
    char in1;
    
    //printf("Enter your chars:");
    
    scanf("%c", &in1);

    for(int i = 0; i < 5; i++){
        if(i == 0){
            printf("++++%c++++\n",in1);
            i++;
        }
        if(i == 1){
            printf("+++%c%c%c+++\n",in1,in1,in1);
            i++;
        }
        if(i == 2){
            printf("++%c%c%c%c%c++\n",in1,in1,in1,in1,in1); // # # # # #
            i++;
        }
        if(i == 3){
            printf("+%c%c%c%c%c%c%c+\n",in1,in1,in1,in1,in1,in1,in1); 
            i++;
        }
        if(i == 4){
            printf("%c%c%c%c%c%c%c%c%c",in1,in1,in1,in1,in1,in1,in1,in1,in1); 
            i++;
        }
    }

    
    int i;
    int first_value = 0;
    int multiple;
    //printf("Enter the number to multiply: ");
    scanf("%d", &multiple);
    
    for(i = 0; i < 11; i++){
        printf("%dx%d = %d\n", first_value,multiple,first_value * multiple);
        
        first_value++;
        
    }
    


   //Programming in C

    char letter1 = 'i';
    char letter2 = 'n';
    char letter3 = 'C';

    printf("Programming %c%c %c\n",letter1, letter2, letter3);


    */

   return(0);
    
}
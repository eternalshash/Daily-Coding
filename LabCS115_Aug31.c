#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ang1, dist1;
    int opt;
    printf("What is angle: \n");
    scanf("%d",&ang1);
    
    printf("What is distance: \n");
    scanf("%d",&dist1);
    
    
    printf("Upper(0) or lower height(1): \n");
    scanf("%d",opt);
    
    if(opt == "1"){
        int out1;
        out1 = tan(ang1 + 3);
        printf("%ls 1", &out1);
    }
    

    return 0;
}

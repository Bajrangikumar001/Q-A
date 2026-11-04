
// Q2. Read two integers and print the larger one. If both are equal, print "Both are equal" instead..

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
     printf("Enter value of y: ");
    scanf("%d",&y);

    if(x>y){
        printf("Larger number is %d",x);
    }
    else if (x==y)
    {
        printf("Both are equal to each other.");
    }
    else{
         printf("Larger number is %d",y);
    }
    
}

// 200 C Practice Questions: if, if-else, nested if, switch

// Section 1: if and if-else on numbers (Q1–20)

// Q1. Read an integer and print whether it is positive, negative or zero, and also whether it is even or odd (zero counts as even).

#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    if(x==0) printf("Integer enter by user is 0.");
    else if(x>0){
        if(x%2==0){
            printf("Positive and even integer.");
        }
        else{
            printf("Positive and odd integer.");
        }
    }
    else{
        if(x%2==0){
            printf("Negative and even integer.");
        }
        else{
            printf("Nedative and odd integer.");
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    float x; 
    printf("Enter a number: "); 
    scanf("%f", &x); 
if(x>0){
    int lastDigit = (int)(x) % 10;
    printf("%d", lastDigit);  
        
    int middleDigit = (int)(x / 10) % 10; 
    printf("%d", middleDigit);

    int firstDigit = (int)(x / 100); 
    printf("%d\n", firstDigit);
}
else{ 
    x=-1*x;
    int lastDigit = (int)(x) % 10;
    printf("%d", -1*lastDigit); 
    
    int middleDigit = (int)(x / 10) % 10; 
    printf("%d", middleDigit);

    int firstDigit = (int)(x / 100); 
    printf("%d\n", firstDigit);
    
}
    return 0;
}

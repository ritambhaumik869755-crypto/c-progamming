#include <stdio.h>

int main() {
    int main(){
        int i,n;
        printf("Enter a number: ");
        scanf("d",&n);
        
        for(i = 2;i<n; i=i+1){
            if(n % i==0){
                printf("%d is not a prime number\n", n);
                  
            }
            printf("%d is prime number", n);
        }
    }

    return 0;
}

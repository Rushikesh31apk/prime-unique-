#include <stdio.h>
int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{   
    
        long i,x = num/2;
        for(i = 2; i<=x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    long i,b,cnt=0;
    printf("Ask for me and identify me:");
    scanf("%d",&b);
    for(i=1; i <= b; i++){
        if(Prime(i))
            cnt++;
    }
    printf("I have found %d times",cnt);
 
    return 0;
}

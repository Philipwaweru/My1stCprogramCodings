#include <stdio.h>

int main ( void )
{
    float a ;
    int p ;
    a = 0 ;
    p = 0 ;
    while ( a <= 200)
    {
        if ( ( a > 98.6 ) && ( p == 0 ) )
        {
            printf ( "%6.2f F = %6.2f C\n" ,
            98.6 , ( 98.6 - 32.0 ) ) ;
            p = 1 ;
        }
        printf ( "%6.2f F = %6.2f C\n" ,
        a , ( a - 32.0 ) ) ;
        a = a + 10 ;
    }
    return 0 ;
}

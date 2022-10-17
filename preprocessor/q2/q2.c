#include<stdio.h>
#define string(X) #X // Using #
#define var(X1,Y1) X1##Y1  //Using ##

int main()
{
     //Using #
     int ab=10,_TIME_;
     printf("\nab is :%d\n",var(a,b));
    
     //Using ##
     printf("\n%s,",string(Hello Students));
     printf("%s\n",string(Welcome to CDAC!));

     //Using _TIME_macro.
     printf("\nCurrent Time is : %s\n",_TIME_);

     //Using conditional compilation #if......#endif);
     #if 20>10
         printf("\nNumber n(20) is largest  number than  m(10).....!\n\n");
     #else
         printf("\nNumber m(10) is largest number than   n(20)......!\n\n");
     #endif
     return 0;
}     

#include <stdio.h>

unsigned gcd ( unsigned,unsigned ) ;

int main( void )

{

unsigned m,n;

printf("������������������");

scanf("%u%u",&m,&n);

printf("%u��%u�����Լ��Ϊ��%u\n",m,n,gcd ( m,n ) );

return 0;

}

/* ���ܣ�����������m��n�����Լ��*/

unsigned gcd ( unsigned m,unsigned n )

{

unsigned temp;

if (m<n)

{

temp=m;

m=n;

n=temp;

}

if ( m % n == 0)

{

return n;

}

else

{

return gcd ( n,m % n) ;

}

}

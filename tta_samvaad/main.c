/**********************************************************************
 *
 * Filename:    main.c
 * 
 * Description: A simple test program for the CRC implementations.
 *
 * Notes:       To test a different CRC standard, modify crc.h.
 *
 * 
 * Copyright (c) 2000 by Michael Barr.  This software is placed into
 * the public domain and may be used for any purpose.  However, this
 * notice must not be changed or removed and no warranty is either
 * expressed or implied by its publication or distribution.
 **********************************************************************/
/***********************************************************************
 * 
 * TCE version modified by Otto Esko
 *
 * Notes: Only crc-32 is used
 *
 **********************************************************************/
#ifdef _DEBUG
#include <stdio.h>
#endif /* _DEBUG */

//#include <stdio.h>

/* Test string is global so that it can be accessed from ttasim */
int x = 11;
int y = 15;
int u = 21;
int dx = 7;
int x1=0;int u1=0;int y1=0;
//int t1_1,t1_2,t1,t2_1,t2;
int mul(int num1, int num2);
int main(void) {


while(x<514){
x1 = x + dx;

/*
t1_1 = mul(3,x);
t1_2 = mul(u,dx);
t1 = mul(t1_1,t1_2);
t2_1 = mul(3,y);
t2 = mul(t2_1,dx);
u1 = u + t1 - t2;
//y1 = y + t1_2;
*/
u1 = u + 3*x*u*dx - 3*y*dx;
y1 = y + u*dx;

x = x1;
y = y1;
u = u1;

//printf("x = %d \n",x);

}

    return 0;
}

/*int mul(int num1, int num2) {

   int result;
   _TCE_MUL(num1,num2,result);
 
   return result; 
}*/

/*
 * =====================================================================================
 *
 *       Filename:  lista4.1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26-09-2016 16:31:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

float volume ( float r){
     int v;
     v =(4*3,14*r*r*r)/3;

     return v;
}

int main (int argc,const char * argv[]){
     float r;
     scanf("%f",&r);
     printf("o volume da esfera é %0.2f\n",volume(r));

     return 0;
}

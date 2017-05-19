/*
 * Add-N in C:
 * Requires: gcc
 * compile: gcc -o add-n add-n.c
 *     run: ./add-n
 */

#include <stdio.h>                                          
                                                            
int func_add2(int x){                                       
        return x + 2;                                       
}                                                           
                                                            
int (* func_addN(int n) ) (int )                            
{                                                           
        if (n == 2){                                        
                return func_add2;                           
        }                                                   
        return NULL;                                        
}                                                           
                                                            
int main(){                                                 
        int (*(*addN)(int n))(int) = func_addN;             
        int (*add2)(int) = addN(2);                         
        printf("add2(3) => %d\n", add2(3));                 
        return 0;                                           
}                                                           

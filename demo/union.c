//
// Created by mloine on 2020-05-08.
//
/**
 *  union 共同体 同一时间只有一个成员变量能够被正确使用  最后赋值的变量 会影响其他成员变量的值。由于共享内存导致
 */

#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    printf("size by Data %lu\n", sizeof(data));


    data.i = 10;
    data.f = 225.5;
    strcpy(data.str,"kao yan jia you!!");

    printf("data.i : %d\n",data.i);
    printf("data.j : %f\n",data.f);
    printf("data.str : %s\n",data.str);

    return 0;
}
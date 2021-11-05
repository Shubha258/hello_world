#include<stdio.h>
#include"header.h"
int main()
{
    float *ptr;
	float arr[3][3];
    int i;
    ptr = sgs_clib_2d_double_array(&arr[3][3]);

    for(i=0;i<3;i++)
   for(int j=0;j<3;j++){
   {
       printf("%f ",(ptr+i));
    }
	}
	// printf("%f ",(*ptr));

}
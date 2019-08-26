#include<iostream>
#define _USE_MATH_DEFINES
#include<cstdio>
#include<math.h>

using namespace std;

int main(void){
    double r,ans1,ans2;
    scanf("%lf",&r);
    ans1 = M_PI * r * r;
    ans2 = r*r*2;
 
    printf("%.6f\n", ans1);
    printf("%.6f\n",ans2);
    return 0;

}
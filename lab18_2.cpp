#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *in1, Rect *in2){
    if(in1->x+in1->w < in2->x)return 0;
    float l1 = fmin(in1->x + in1->w,in2->x + in2->w) - fmax(in1->x,in2->x);
    float l2 = fmin(in1->y,in2->y) - fmax(in1->y-in1->h,in2->y-in2->h);
    return l1 * l2;
}

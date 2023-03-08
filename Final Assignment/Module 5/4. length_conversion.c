#include<stdio.h>
typedef struct metric{
    int meter, centimeter, millimeter;
}metric;
typedef struct british{
    int yard, foot, inch;
}british;
int main()
{
    metric data={100,200,300};
    british data1;
    data1.inch= (data.meter*1000 + data.centimeter*10 + data.millimeter)/25.4;
    data1.foot= data1.inch/12;
    data1.yard=data1.foot/4;

    printf("Metric : \nmeter : %d\tcentimeter : %d\tmillimeter : %d\n ",data.meter, data.centimeter, data.millimeter);
    printf("British : \nyard : %d\tfoot : %d\tinch : %d\n",data1.yard, data1.foot, data1.inch);

    return 0;
}

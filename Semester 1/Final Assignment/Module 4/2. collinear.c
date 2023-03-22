#include <stdio.h>
#include<math.h>
typedef struct coordinate{
    int x;
    int y;
}coordinate;

int main()
{
    coordinate p[3];
    int i, j, c=0;
    for(i=0;i<3;i++){
        printf("Enter Coordinates for point %d : ",i+1);
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    int distance[3];
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            int x_diff, y_diff;
            int dist;
            x_diff=p[j].x-p[i].x;
            y_diff=p[j].y-p[i].y;
            x_diff=pow(x_diff, 2);
            y_diff=pow(y_diff, 2);
            int sum=x_diff+y_diff;
            dist=sqrt(sum);
            distance[c++]= dist;
        }
    }
    if(distance[0]+distance[1]==distance[2] || distance[1]+distance[2]==distance[0] || distance[0]+distance[2]==distance[1]){
        printf("Collinear Points\n");
    }
    else{
        printf("Not Collinear\n");
    }
    /*float area;
    area= p[0].x*(p[1].y-p[2].y) + p[1].x*(p[2].y-p[0].y) + p[2].x*(p[0].y-p[1].y);
    if(area==0){
        printf("Collinear Points\n");
    }
    else{
        printf("Not Collinear\n");
    }*/
    
    return 0;
}

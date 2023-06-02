#include<stdio.h>
struct Student{
    char name [20];
    int eng;
    int math;
    int phys;
    
};

int main(){
    struct Student Student[3]; 
    for(int i=0 ; i<3;i++){
        printf( "input name"),scanf("%s",Student[i].name);
        printf( "input math"),scanf("%d",&Student[i].math);
        printf( "input eng"),scanf("%d",&Student[i].eng);
        printf( "input phys"),scanf("%d",&Student[i].phys);
        printf("\n");
    }
    for( int i=0;i<3;i++){
        printf("name of student a %s \n",Student[i].name);
        printf("math grade of student %d\n",Student[i].math);
        printf("eng grade of student %d\n",Student[i].eng);
        printf("phys grade  of student %d\n",Student[i].phys);
        printf("\n");
    }
    float mean;
    int math;
    int eng;
    int phys;
     for(int i = 0; i < 3; i++){
        mean =(math+eng+phys)/3;
        if(90<=mean<=100){
            printf("student %s achieve grade S\n",Student[i].name);
        }
         else if (80<=mean<90){
            printf("student %s achieve grade A\n",Student[i].name);
        }
         else if(70<=mean<80){
            printf("student %s achieve grade B\n",Student[i].name);
        }
         else if(60<=mean<70){
            printf("student %s achieve grade C\n",Student[i].name);
        }
        else{
            printf("student %s achieve grade D\n",Student[i].name);
        }
     }
}

    
    

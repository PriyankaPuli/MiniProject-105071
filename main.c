#include<stdio.h>
#include<conio.h>
#include"Bikerentalmanagementsystem.h"
void main()
{
    int u,d,r,l;
    char name[20];
    char phonenumber[15];
    char nationality[25];
    int period;
    printf("Enter user details:\n");
    scanf("%s\n",&name);
    scanf("%s\n",&phonenumber);
    scanf("%s\n",&nationality);
    scanf("%d",&period);
    printf("BIKE RENTAL APPLICATION \n");
    printf("Press 1 for Deluxe Vehicles \n");
    printf("Press 2 for Long or Road Trip Vehicles \n");
    printf("Press 3 for Luxury Vehicle \n");
    printf("---------------------------\n");
    printf("Press any Option: \n");
    scanf("%d", &u);
    getch();
    printf("\tSuccessfully booked your bike");
    printf("\n\t >>>>>THANK YOU<<<<<");
    printf("\n\t FOR USING OUR SERVICE");
    bike_rentalmanagementsystem(u,d,r,l);
}

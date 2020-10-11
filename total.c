#include<stdio.h>
#include<conio.h>
int main()
{
    int u,d,r,l;
    char name[20];
    char phonenumber[15];
    char nationality[25];
    int period;
    printf("Enter user details:\n");
    scanf("%s\n",name);
    scanf("%s\n",phonenumber);
    scanf("%s\n",nationality);
    scanf("%d",&period);
    printf("BIKE RENTAL APPLICATION \n");
    printf("Press 1 for Deluxe Vehicles \n");
    printf("Press 2 for Long or Road Trip Vehicles \n");
    printf("Press 3 for Luxury Vehicle \n");
    printf("---------------------------\n");
    printf("Press any Option: \n");
    scanf("%d", &u);
    switch(u)
    {
        case 1:
        printf("You have chosen Deluxe Vehicles \n");
        printf("Deluxe Vehicle Available are: \n");
        printf("->ROYAL ENFIELD\n->FZ\n->PULSAR \n");
        printf("Bike you want to hire, Press 1 for ROYAL ENFIELD,2 for FZ,3 for PULSAR \n");
        scanf("%d", &d);
        switch(d)
        {
            case 1:
            printf("You have selected ROYAL ENFIELD | Cost 2400rs per day \n");
            break;
            case 2:
            printf("You have selected FZ | Cost 1750rs per day \n");
            break;
            case 3:
            printf("You have selected PULSAR | Cost 1500 per day \n");
            break;
        }
        break;
        case 2:
        printf("You have chosen Long Trip Vehicles \n");
        printf("Vehicles Available are:\n");
        printf("->R15\n->APPACHE\n->CERVELO\n");
        printf("Bike you want to hire,press 1 for R15,2 for APPACHE,3 for CERVELO \n");
        scanf("%d", &r);
        switch (r)
        {
            case 1:
            printf("You have selected R15 | Cost 3500rs per day \n");
            break;
            case 2:
            printf("You have selected APPACHE | Cost 7000rs per day \n");
            break;
            case 3:
            printf("You have selected CERVELO | Cost 8500rs per day \n");
            break;
        }
        break;
        case 3:
        printf("You have chosen Luxury bikes\n");
        printf("Luxury Vehicles Available are: \n");
        printf("->BENZ\n->BMS\n->CXZI \n");
        printf("Bike you want to hire, Press 1 for Benz, 2 for BMS, 3 for CXZI \n");
        scanf("%d", &l);
        switch(l)
        {
            case 1:
            printf(" You have selected Benz | Cost 40,000rs per day \n");
            break;
            case 2:
            printf("You have selected BMS | Cost 45,000rs per day \n");
            break;
            case 3:
            printf("You have selected CXZI | Cost 50,000rs per day \n");
            break;
        }
        break;
    }
    getch();
    printf("\tSuccessfully booked your bike");
    printf("\n\t >>>>>THANK YOU<<<<<");
    printf("\n\t FOR USING OUR SERVICE");
	return 0;
}
#include<stdio.h>
#include<conio.h>
void bike_rentalmanagementsystem(int u,int d,int r,int l){
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
    
}
#include<stdio.h>
void main()
{
    int choice;
    printf("")

    while(1)
    {
    case 1:
        staff();
        break;
    case 2:
        student();
        break;
    case 3:
        professor();
        break;
    case 4:
        new_professor();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\nYour selection is wrong\n");
    }
}

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bAns = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bAns = true;
            break;
        }
    }

    return bAns;
}

int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //step 1 : Allocate the memory
    ptr = (int *) malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //step 2 : Use that memory
    bRet = Search(ptr , iLength);

    if(bRet == true)
    {
        printf("Found 11\n");
    }
    else
    {
        printf("11 not found \n");
    }
    //step 3 : free the memory
    free(ptr);

    return 0;
}
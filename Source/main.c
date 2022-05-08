#include <stdio.h>
#include "..\Header\calc.h"
#include "..\Header\convert.h"
#include "..\Header\m_string.h"
int Mang[]  ={1,2,3,4,5,7,8,9,10,11,13,15,17,18,25,21,22,29,44,42,99};
         // 0  1  2  3  4  5  6 7 8 9  10 11 12 13 14 15 16 17 18 19 20
int Mang_2[]={1,2,3};
        
int main()
    {          
        printf("\n\n\n\n====================>HomeWork_Session_2<====================\n\n");

        printf("==>Tong cua mang la               : %d\n",Tinh_Tong(Mang, 21)); 
        printf("==>Phan tu lon nhat cua mang la    : %d\n",Max_Mang (Mang, 21));
        printf("==>Phan tu nho nhat cua mang la      : %d\n",Min_Mang (Mang, 21));
        Tim_So_X(Mang, 21, 76);

        printf("\n");
        int X=1566;
        Dec_to_Bin(X);
        Dec_to_Hex(X);
        printf("\n");

        if (isEqual(Mang, 21, Mang_2, 21) == 1)  printf("Hai Mang giong nhau!\n");
            else
                printf("Hai Mang khac nhau!\n");
        ChenMang(Mang, 21, Mang_2, 3, 2);

        return 0;
    }




//
//  main.c
//  bafi 5lab07
//
//  Created by kinty on 5/20/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    {
       int masothe;
       int matkhauthe;
       int sodu = 1000000;
       char tieptuc[5];
       int luachon;
       int ruttien;
       printf("\nVui long nhap So the : ");
       scanf("%d", &masothe);
       printf("\nVui long nhap Ma the : ");
       scanf("%d", &matkhauthe);
       if(masothe == 123 && matkhauthe == 321)
       {
         printf("\nDang nhap thanh cong ");
         do{
            
            printf("Nhap so de lua chon \n");
           printf("1. Rut tien \n2.Kiem tra so du \n");
           scanf("%d", &luachon);
           
           switch(luachon)
           {
               case 1:
                printf("\nNhap so tien muon rut ra :");
                scanf("%d", &ruttien);
                if(sodu >= ruttien)
                {
                sodu -= ruttien;
                printf("Ban da rut thanh cong %d \n So du con lai la : %d", ruttien,sodu);
                }
                else
                {
                printf("Tai khoan cua ban khong du de rut");
                }
                break;
               case 2:
                printf("So du cua ban hien tai la : %d", sodu);
                break;
           }
            printf("\nBan co muon tiep tuc khong (y\n) ? \n");
            scanf("%s", &tieptuc);
           }
           while(tieptuc != 'y');
          
           return 0;
   
       }
    }
}

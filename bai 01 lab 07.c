//
//  main.c
//  bai 1 lab 07
//
//  Created by kinty on 5/20/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
     int wirtten;
        int practice;
        int asm;
        printf("\nNhap diem ASM: ");
        
        scanf("%d", &asm1);
        if (asm1 > 10 || asm1 < 0)
        {
            printf("Diem ASM khong hop le vui long nhap lai !");
            main();
        }
        printf("\nNhap diem Wirtten: ");
        
        scanf("%d", &wirtten);
        if (wirtten > 100 || wirtten < 0)
        {
            printf("Diem Wirtten khong hop le vui long nhap lai !");
            main()
        }
        printf("\nNhap diem Practice: ");
        
        scanf("%d", &practice);
        
        if (practice > 15 || practice < 0)
        {
            printf("Diem ASM khong hop le vui long nhap lai !");
            main();
        }
        if(asm1 >= 4)
        {
            printf("Diem ASM cua ban da dat %d / 10", asm1);
            
        }
        else
        {
            printf("Diem ASM khong dat . Ban can phai thi lai !");
        }
        if(wirtten >= 40)
        {
            printf("\nDiem Wirtten cua ban da dat %d / 100", wirtten);
            
        }
        else
        {
            printf("Diem Wirtten khong dat . Ban can phai thi lai !");
        }
        if(wirtten >= 6)
        {
            printf("\nDiem Practice cua ban da dat %d / 15", practice);
            
        }
        else
        {
            printf("Diem Practice khong dat . Ban can phai thi lai !");
        }
        
        

        return 0;
    }
}

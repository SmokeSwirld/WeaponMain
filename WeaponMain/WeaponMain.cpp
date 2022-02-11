#include "weapon.h"

int main()
{
   HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO alex; // скрыть курсор!
   alex.dwSize = 100;
   alex.bVisible = false;
   SetConsoleCursorInfo(h, &alex);
   system("title WEAPON");


   SetConsoleTextAttribute(h, 192);
   cout << "      HELLO        \n";
   cout << "      PLS ENTER    \n";
   cout << "      OR ESCAPE    \n";
   cout << "      DUDE         \n";
   SetConsoleTextAttribute(h, 7);
 
  
   while (true)
   {
       int code = _getch();

       if (code == char(13))                                      //ENTER = 13,
       {
           system("cls");
           SetConsoleTextAttribute(h, 236);
           cout << "         WEAPON             \n";
           cout << "      Knife         - 1     \n";
           cout << "      Revolver      - 2     \n";
           cout << "      Pistol        - 3     \n";
           cout << "      Shotgun       - 4     \n";
           cout << "      AssaultRifle  - 5     \n";
           cout << "      SniperRifle   - 6     \n";
           cout << "      Javelin       - 7     \n";
           cout << "      MachineGun    - 8     \n";
           cout << "      OR ESCAPE             \n";         
           SetConsoleTextAttribute(h, 7);
           code = _getch();
           if (code == char(49))                                   // 1 = 49
           {
               system("cls");
               cout << "      Knife         - 1     \n";
               Knife knife;
               knife.Action1();

           }
           else   if (code == char(50))                                   // 2 = 50
           {
               system("cls");
               cout << "      Revolver      - 2     \n";
               Revolver revolver;
               revolver.ReloadingBullets();
               revolver.Action1();

           }
           else   if (code == char(51))                                  
           {
               system("cls");
               cout << "      Pistol        - 3     \n";
               Pistol pistol;
               pistol.ReloadingBullets();
               pistol.Action1();

           }
           else   if (code == char(52))                                   
           {
               system("cls");
               cout << "      Shotgun        - 4     \n";
               Shotgun shotgun;
               shotgun.ReloadingBullets();
               shotgun.Action1();

           }
           else   if (code == char(53))                                  
           {
               system("cls");
               cout << "      AssaultRifle        - 5     \n";
               AssaultRifle assaultRifle;
               assaultRifle.ReloadingBullets();
               assaultRifle.Action1();

           }
           else   if (code == char(54))                                  
           {
               system("cls");
               cout << "      SniperRifle        - 6     \n";
               SniperRifle sniperRifle;
               sniperRifle.ReloadingBullets();
               sniperRifle.Action1();

           }
           else   if (code == char(55))
           {
               system("cls");
               cout << "      Javelin        - 7     \n";
               Javelin javelin;
               javelin.ReloadingBullets();
               javelin.Action2();

           }
           else   if (code == char(56))
           {
               system("cls");
               cout << "      MachineGun        - 8     \n";
               MachineGun machineGun;
               machineGun.ReloadingBullets();
               machineGun.Action1();

           }
         
       }
     
       if (code == char(27))                                       // ESCAPE = 27
       {
           system("cls");
           cout << "      BYE BYE               \n";
           return 0;
       }
   }

    
    system("pause >> NUL");
    return 0;
}



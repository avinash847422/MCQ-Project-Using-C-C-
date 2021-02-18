#include<iostream>
#include<conio.h>
#include<string>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
void show_record();
void reset_score();
void help();
void edit_score(float ,string);
int main()
{
    int counter,r,r1,count,i,n;
    float score;
    char choice;
    string playername;
    start:
    cout<<"\t \t \t C++ PROGRAM GAME";
    cout<<"\n \t \t____________________________________";
    cout<<"\n \t \t               WELCOME";
    cout<<"\n \t \t                 TO";
    cout<<"\n \t \t              THE GAME";
    cout<<"\n \t \t____________________________________";
    cout<<"\n \t \t____________________________________";
    cout<<"\n \t \t THIS GAME DEVELOPED BY AVINASH KR";
    cout<<"\n \t \t____________________________________";
    cout<<"\n \t \t____________________________________";
    cout<<"\n \t \t  >Press S to start the game";
    cout<<"\n \t \t  >Press V to view the higest score";
    cout<<"\n \t \t  >Press R to reset score";
    cout<<"\n \t \t  >Press H for help";
    cout<<"\n \t \t  >Press Q to quit";
    cout<<"\n \t \t____________________________________\n\n";
    choice=toupper(getch());
    if(choice=='V')
    {
        show_record();
        goto start;
    }
    else if(choice=='H')
    {
        help();
        getch();
        goto start;
    }
    else if(choice=='R')
    {
        reset_score();
        getch();
        goto start;
    }
    else if(choice=='Q')
    {
        exit(1);
    }
    else if(choice=='S')
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tResister Your Name: ";
        getline(cin,playername);
        system("cls");
        cout<<"\n------------Welcome "<<playername<<" to C Program Quiz Game---------------";
        cout<<"\n\n Here are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND";
        cout<<"\n >> In warmup round you will be asked a total of 3 queations to test your";
        cout<<"\n    General knowledge, You are eligible to play the game if you give at least";
        cout<<"\n    Right answers, otherwise you can't proceed further to the challange Round";
        cout<<"\n    Your game starts with CHALLANGE ROUND. In this round you will be asked a ";
        cout<<"\n    total of 10 questions. Each right answere will be earned 1 Point";
        cout<<"\n    You will be given 4 options and you have to press A, B,C or D for the";
        cout<<"\n    Right Optins.";
        cout<<"\n   >> No negative marking for wrong answers!";
        cout<<"\n\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!  ALL THE BEST  !!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        cout<<"\n \n \n Prss Y to start the game!\n";
        cout<<"\n Prss ant other key to return to the main menu!";
        if(toupper(getch())=='Y')
        {
            goto home;
        }
        else 
        {
            goto start;
            system("cls");
        }

        home:
        system("cls");
        count=0;
        for(i=1;i<=3;i++)
        {
            system("Cls");
            r1=i;
            switch(r1)
            {
                case 1:
                cout<<"\n\nWhat is the 16-bit compiler allowable range for integer constants?";
                cout<<"\n\nA.-3.4e38 to 3.4e38\t\tB.-32767 to 32768\n\nC.-32668 to 32669\t\tD.-32768 to 32767";
                if(toupper(getch())=='D')
                {
                    cout<<"\n\n Correct!!!";
                    count++;
                    getch();
                    break;
                }
                else {
                    cout<<"\n \n Wrong!!! The Correct answer is D.-32768 to 32767";
                    getch();
                    break;
                }
                case 2:
                cout<<"\n\n\nWhat is required in each C program?";
                cout<<"\n\nA.The program must have at least one function.";
                cout<<"\nB.The program does not require any function.";
                cout<<"\nC.Input data";
                cout<<"\nD.Output data";
                if(toupper(getch())=='A')
                {
                    cout<<"\n \n Correct!!!";
                    count++;
                    getch();
                    break;
                }
                else{
                    cout<<"\n\n Wrong!!! The Correct answere is A.The program must have at least one function. ";
                    getch();
                    break;
                }
                case 3:
                cout<<"\n\nWhat will this program print?";
                cout<<"main()\n";
                cout<<"{\n";
                cout<<"int i = 2;\n";
                cout<<"{\n";
                cout<<"int i = 4, j = 5;\n";
                cout<<"printf(%d %d, i, j);\n";
                cout<<"}\n";
                cout<<"printf(%d %d, i, j);\n";
                cout<<"\n\nA.4525\t\tB.2525\nC.4545\t\tD.None of Thses";
                if(toupper(getch())=='A')

                {
                cout<<"\n\nCorrect!!!";
                count++;
                getch();
                break;
               }
               else{
                cout<<"\n\nWrong!!! The Correct answer is A.4525";
                getch();
                break;
               }
               case 4:
               cout<<"\n\nWhich one of the following is a loop construct that will always be executed once?";
               cout<<"\n\nA.for\t\tB.while\nC.switch\tD.do-while";
               if(toupper(getch())=='D')
               {
                   cout<<"\n\nCorrect!!!!";
                   count++;
                   getch();
                   break;
               }
               else{
                   cout<<"\n\nWrong!!! The Correct answer is D.Do-While";
                   getch();
                   break;
               }
               case 5:
               cout<<"\n\nWhat feature makes C++ so powerful?";
               cout<<"\n\nA.Easy implementation\t\tB.Reusing the old code\nC.Easy memory management\t\tD.All of the above";
               if(toupper(getch())=='D')
               {
                   cout<<"\n\nCorrect!!!!";
                   count++;
                   getch();
                   break;
               }
               else{
                   cout<<"Wrong!!!! The correct answer is D.All of above";
                   getch();
                   break;
               }
               case 6:
               cout<<"\n\nIf addition had higher precedence than multiplication, then the value of the expression (1 + 2 * 3 + 4 * 5) would be which of the following?";
               cout<<"\n\nA.27\t\tB.47\nC.69\t\tD.105";
               if(toupper(getch())=='D')
               {
                   cout<<"\n\nCorrect!!!!!";
                   count++;
                   getch();
                   break;
               }
               else{
                   cout<<"\n\nWrong!!!! The correct answer is D.150";
                   getch();
                   break;
               }
            }
        }
               if(count>=2)
               {
                   goto test;
               }
               else{
                   system("cls");
                   cout<<"\n\n SORRY YOU ARE NOT ELIGIBLR TO PLAY THIS GAME, BETTER LUCK NEXT TIME";
                   getch();
                   goto start;
               }   
               test :
               system("cls");
               cout<<"\n\n\t*** CONGRATULATION "<<playername<<" you are eligible to play the Game ***";
               cout<<"Press any key to start The Game!";
               if(toupper(getch())=='P')
               {
                   goto game;
               }
               game :
               float countr=0;
               for(i=0;i<=10;i++)
               {
                   system("cls");
                   r=i;
                   switch (r)
                   {
                       case 1:
                       cout<<"\n\nWhat is the National Game of England?";
                       cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball";
                       if (toupper(getch())=='C')
                       {
                           cout<<"\n\nCorrect!!!";
                           countr++;
                           getch();
                           break;
                       }
                       else {
                           cout<<"\n\nWrong!!! The correct answer is C.ricket";
                           getch();
                           goto score;
                           break;
                       }
                       case 2:
                       cout<<"\n\n\nStudy of Earthquake is called............";
                       cout<<"\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology";
                       if(toupper(getch())=='A')
                       {
                           cout<<"\n\nCorrect!!!!!";
                           countr++;
                           getch();
                           break;
                       }
                       else{
                           cout<<"\n\nWrong!!! The correct answer is A.Seismology";
                           getch();
                           goto score;
                           break;
                       }
                       case 3:
                       cout<<"\n\n\nAmong the top 10 highest peaks in the world,how many lie in Nepal?";
                       cout<<"\n\nA.6\t\tB.7\n\nC.8\t\tD.9";
                       if (toupper(getch())=='C')
                       {
                           cout<<"\n\nCorrect!!!";
                           countr++;
                           getch();
                           break;
                       }
                       else{
                           cout<<"\n\nWrong!!! The correct answer isC.8";
                           getch();
                           goto score;
                           break;
                       }
                       case 4:
                       cout<<"\n\n\nThe Laws of Electromagnetic Induction were given by?";
                       if (toupper(getch())=='A')
                       {
                           cout<<"\n\nCorrect!!!";
                           countr++;
                           getch();
                           goto score;
                       }
                       
                   }
               }
               score:
               system("cls");
               score=(float)countr*100000;
               if(score>0.00 && score<1000000)
               {
                   cout<<"\n\n\t\t**************** CONGRATULATION*****************";
                   cout<<"\n\t You won $%.2f"<<score;
                   cout<<"\t\t Thank You!!";
               }
               else{
                   cout<<"\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********";
                   cout<<"\n\t\t Thanks for your participation";
                   cout<<"\n\t\t TRY AGAIN";
                   goto go;
               }
               go:
               cout<<"\n\n Press Y if you want to play next game";
               cout<<" Press any key if you want to go main menu";
               if (toupper(getch())=='Y')
                goto home;
                else{
                    edit_score(score,playername);
                    goto start;
                }
        
        }
        return 0;
}

// function declaraction

void show_record()
{
    system("cls");
    char name[20];
    float src;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,src);
    cout<<"\n\n\t\t************************************************************";
    fclose(f);
    getch();
}

// recet record
void reset_score()
 {
     system("cls");
     float sc;
     char nm[20];
     FILE *f;
     f=fopen("score.txt","r+");
     fscanf(f,"%s%f",&nm,&sc);
     sc=0;
     fprintf(f,"%s,%.2f",nm,sc);
     fclose(f);
}

// hello hhhh
void help()
 {
     system("cls");
     cout<<"\n\n HELP";
     cout<<"\n -------------------------------------------------------------------------";
     cout<<"\n ......................... C program QuizGame...........";
     cout<<"\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND";
     cout<<"\n >> In warmup round you will be asked a total of 3 questions to test your general";
     cout<<"\n knowledge. You will be eligible to play the game if you can give atleast 2";
     cout<<"\n right answers otherwise you can't play the Game..........."; 
     cout<<"\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked";
     cout<<"\n total 10 questions each right answer will be awarded $100,000.";
     cout<<"\n By this way you can win upto ONE MILLION cash prize inUSD...............";
     cout<<"\n >> You will be given 4 options and you have to press A, B ,C or D for the";
    cout<<"\n right option";
     cout<<"\n >> You will be asked questions continuously if you keep giving the right answers.";
     cout<<"\n >> No negative marking for wrong answers";
     cout<<"\n\n\t*********************BEST OF LUCK*********************************";
     cout<<"\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********";
}
void edit_score(float score, string plnm)
 {
     system("cls");
     float sc;
     char nm[20];
     FILE *f;
     f=fopen("score.txt","r");
     fscanf(f,"%s%f",&nm,&sc);
    if (score>=sc)
    {
     sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
    }
 }


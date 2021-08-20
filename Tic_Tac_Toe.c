#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,z,choice,a=0,t,i,p=0;

    game:
    printf("\n\n\n\t\tTic Tac Toe\n\n\n");
    printf("Enter 1 for VS Computer\n");
    printf("Enter 2 for Multiplayer\n");
    scanf("%d",&n);
    system("cls");
    switch(n)
    {
        case 1:
        {
            char mark;
            char square[10]={'0','1','2','3','4','5','6','7','8','9'};
            mark='X';

            for (t=0;t==0;t=t+0)
            {
                system("cls");
                printf("\n\n\tTic Tac Toe\n\n");

                printf("Player (X)  -  computer (O)\n\n\n");
               if(p>0)
               {printf("COMPUTER ENTERED : %d\n",choice);}
               p++;
                               printf("%c",201);
    for(i=0;i<21;i++)
    {
        if(i==7 || i==14)
            printf("%c",203);
        else
        printf("%c",205);
    }

    printf("%c",187);
    printf("\n");

        for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
     for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[1]);
                else if(i==12)
                    printf("%c",square[2]);
                else if(i==19)
                    printf("%c",square[3]);
                else
                    printf(" ");
      }
      printf("\n");
        for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",204);
          else if(i==22)
            printf("%c",185);
          else if(i==8 || i==15)
            printf("%c",206);
            else
                printf("%c",205);
      }
      printf("\n");
       for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[4]);
                else if(i==12)
                    printf("%c",square[5]);
                else if(i==19)
                    printf("%c",square[6]);
                else
                    printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",204);
          else if(i==22)
            printf("%c",185);
          else if(i==8 || i==15)
            printf("%c",206);
            else
                printf("%c",205);
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[7]);
                else if(i==12)
                    printf("%c",square[8]);
                else if(i==19)
                    printf("%c",square[9]);
                else
                    printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",200);
          else if(i==22)
            printf("%c",188);
          else if(i==8 || i==15)
            printf("%c",202);
            else
                printf("%c",205);
      }
     printf("\n");

                label1:
                printf("Enter your choice : ");
                scanf("%d",&choice);

                if (choice == 1 && square[1] == '1')
                square[1] = mark;

                else if (choice == 2 && square[2] == '2')
                    square[2] = mark;

                else if (choice == 3 && square[3] == '3')
                    square[3] = mark;

                else if (choice == 4 && square[4] == '4')
                    square[4] = mark;

                else if (choice == 5 && square[5] == '5')
                    square[5] = mark;

                else if (choice == 6 && square[6] == '6')
                    square[6] = mark;

                else if (choice == 7 && square[7] == '7')
                    square[7] = mark;

                else if (choice == 8 && square[8] == '8')
                    square[8] = mark;

                else if (choice == 9 && square[9] == '9')
                    square[9] = mark;

                else
                {

                    printf(" <Invalid move>\n ");
                    goto label1;
                }
                a++;



                if (square[1] == square[2] && square[2] == square[3])
                    t=1;

                else if (square[4] == square[5] && square[5] == square[6])
                    t=1;

                else if (square[7] == square[8] && square[8] == square[9])
                   t=1;

                else if (square[1] == square[4] && square[4] == square[7])
                    t=1;

                else if (square[2] == square[5] && square[5] == square[8])
                    t=1;

                else if (square[3] == square[6] && square[6] == square[9])
                    t=1;

                else if (square[1] == square[5] && square[5] == square[9])
                    t=1;

                else if (square[3] == square[5] && square[5] == square[7])
                    t=1;

                else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                    square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                    != '7' && square[8] != '8' && square[9] != '9')

                    t=-1;
                else
                    t=0;

                if (t==0)
                {
                    read:
                    srand(time(0));
                    choice=rand()%10;
                    mark='O';
                    if (choice == 1 && square[1] == '1')
                    square[1] = mark;

                    else if (choice == 2 && square[2] == '2')
                        square[2] = mark;

                    else if (choice == 3 && square[3] == '3')
                        square[3] = mark;

                    else if (choice == 4 && square[4] == '4')
                        square[4] = mark;

                    else if (choice == 5 && square[5] == '5')
                        square[5] = mark;

                    else if (choice == 6 && square[6] == '6')
                        square[6] = mark;

                    else if (choice == 7 && square[7] == '7')
                        square[7] = mark;

                    else if (choice == 8 && square[8] == '8')
                        square[8] = mark;

                    else if (choice == 9 && square[9] == '9')
                        square[9] = mark;

                    else
                    {
                        goto read;
                    }
                    mark='X';
                    a++;

                    if (square[1] == square[2] && square[2] == square[3])
                        t=1;

                    else if (square[4] == square[5] && square[5] == square[6])
                        t=1;

                    else if (square[7] == square[8] && square[8] == square[9])
                       t=1;

                    else if (square[1] == square[4] && square[4] == square[7])
                        t=1;

                    else if (square[2] == square[5] && square[5] == square[8])
                        t=1;

                    else if (square[3] == square[6] && square[6] == square[9])
                        t=1;

                    else if (square[1] == square[5] && square[5] == square[9])
                        t=1;

                    else if (square[3] == square[5] && square[5] == square[7])
                        t=1;

                    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                        != '7' && square[8] != '8' && square[9] != '9')

                        t=-1;
                    else
                        t=0;




                }


                }

                if (t==-1)
                {
                    printf("\n\n==> GAME DRAW\n\n");
                    p=0;
                }
                else if(t==1)
                {
                    if (a%2==1)
                        {printf("\n\n\n\t\t Player Wins\n");p=0;}
                    else
                        {
                            printf("\ncomputer entered : %d",choice);
                            printf("\n\n\n\t\t Computer Wins\n");p=0;}
                }
                break;

            }

        case 2:
        {
            int player=1,i,choice=0,k=0,j;
            char mark;
            int z = 1;
               while(z) {
               int square[10]={'0','1','2','3','4','5','6','7','8','9'};
               label:
                mark = (player == 1) ? 'X' : 'O';
               if (choice == 1 && square[1] == '1')
                    square[1] = mark;

                else if (choice == 2 && square[2] == '2')
                    square[2] = mark;

                else if (choice == 3 && square[3] == '3')
                    square[3] = mark;

                else if (choice == 4 && square[4] == '4')
                    square[4] = mark;

                else if (choice == 5 && square[5] == '5')
                    square[5] = mark;

                else if (choice == 6 && square[6] == '6')
                    square[6] = mark;


                else if (choice == 7 && square[7] == '7')
                    square[7] = mark;

                else if (choice == 8 && square[8] == '8')
                    square[8] = mark;

                else if (choice == 9 && square[9] == '9')
                    square[9] = mark;

                else
                {
                    if(k!=0)
                    printf(" <Invalid move> ");
                    player--;
                }


               if (square[1] == square[2] && square[2] == square[3])
                    j=1;

                else if (square[4] == square[5] && square[5] == square[6])
                    j=1;

                else if (square[7] == square[8] && square[8] == square[9])
                   j=1;

                else if (square[1] == square[4] && square[4] == square[7])
                    j=1;

                else if (square[2] == square[5] && square[5] == square[8])
                    j=1;

                else if (square[3] == square[6] && square[6] == square[9])
                    j=1;

                else if (square[1] == square[5] && square[5] == square[9])
                    j=1;

                else if (square[3] == square[5] && square[5] == square[7])
                    j=1;

                else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                    square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                    != '7' && square[8] != '8' && square[9] != '9')

                    j=0;
                else
                    j=-1;



                printf("\n\n\tTic Tac Toe\n\n");

                printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
                 if(p>0)
                 printf("Player %d, entered :  %d\n", player,choice);
                 p++;
                                 printf("%c",201);
    for(i=0;i<21;i++)
    {
        if(i==7 || i==14)
            printf("%c",203);
        else
        printf("%c",205);
    }

    printf("%c",187);
    printf("\n");

        for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
     for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[1]);
                else if(i==12)
                    printf("%c",square[2]);
                else if(i==19)
                    printf("%c",square[3]);
                else
                    printf(" ");
      }
      printf("\n");
        for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",204);
          else if(i==22)
            printf("%c",185);
          else if(i==8 || i==15)
            printf("%c",206);
            else
                printf("%c",205);
      }
      printf("\n");
       for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[4]);
                else if(i==12)
                    printf("%c",square[5]);
                else if(i==19)
                    printf("%c",square[6]);
                else
                    printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",204);
          else if(i==22)
            printf("%c",185);
          else if(i==8 || i==15)
            printf("%c",206);
            else
                printf("%c",205);
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else if(i==4)
                printf("%c",square[7]);
                else if(i==12)
                    printf("%c",square[8]);
                else if(i==19)
                    printf("%c",square[9]);
                else
                    printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
        if(i==0 || i==8 || i==15 || i==22)
            printf("%c",186);
            else
                printf(" ");
      }
      printf("\n");
      for(i=0;i<23;i++)
      {
          if(i==0)
            printf("%c",200);
          else if(i==22)
            printf("%c",188);
          else if(i==8 || i==15)
            printf("%c",202);
            else
                printf("%c",205);
      }
     printf("\n");
                 if(j==-1)
                   player--;
                    if(j==-1 || k==0)
                    {player = (player % 2) ? 1 : 2;

                    printf("Player %d, enter a number:  ", player);
                    scanf("%d", &choice);
                    system("cls");
                     }
                     if(k==0)
                    { k++;
                     goto label;}

                if(j==-1)
                {goto label;}
                else if(j==1)
                {
                printf("==>\a\nPlayer %d win \n",player);p=0;
                }
                else
                {
                printf("==>\aGame draw\n");p=0;
                }
                z=0;


            }
            break;
        }
    }
    printf("Want to play again ? \n");
    printf("Enter Y/y to play again and any other key to quit\n");
    char ch ;
    scanf("%c",&ch);
    scanf("%c",&ch);
    system("cls");
    if(ch == 'Y' || ch=='y')
    {
        system("cls");
        goto game;
    }
    else
    {
        system("cls");
    }


}

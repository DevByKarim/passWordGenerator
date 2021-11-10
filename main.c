/*
############### PASSEWORD GENIRATOR  -Version 1.0- DEVLOPED BY :  <karim> from <code.ks> CONTACT :  <krimo.webdev@gmail.com> #####################
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numbersOutput (int nbChar);
void lettersOutput (int nbChar);
void caractersOutput (int nbchar);





int main()
{
        // this function is called just one time in our prog///
        //**************************************************//
                    srand(time(NULL));
        //*************************************************//
        /////////////////////////////////////////////////////

    // the main programme //
    int choice = -1;
    do {
            // the main menu ///
        printf ("\n  ======= PASSWORDS GENERATOR =======\n\n ");
        printf ("    1- Generat a password \n ");
        printf ("    2- Cridit \n ");
        printf ("    0- Exit \n ");
        printf ("       make a choice :  ");
        scanf ("%d", &choice);
            // select an option ! //
        switch (choice){
        case 0 : // Exit the programme
            printf ("PASSWORDS GENERATOR \t    -Version 1.0- \nDEVLOPED BY : \t   <karim> from <code.ks> \nCONTACT : \t <krimo.webdev@gmail.com> \n");
            break;
        case 1 : // menu of PASSWORD OPTIONS  //
            printf ("\n  ====== PASSWORD OPTIONS ======\n\n ");
            printf ("    1- Numbers Output  \n ");
            printf ("    2- Letters Output \n ");
            printf ("    3- Numbers & Letters Output \n ");
            printf ("       make a choice :  ");
            scanf ("%d", &choice);
            int numberCaracters = 0 ;
            // the type of password //
            do {
                printf ("Give the number of characters  ' Between 8 and 16 ' : ");
                scanf ("%d", &numberCaracters);
            }while (numberCaracters < 8 || numberCaracters > 16);
            switch (choice){

                case 1:
                    numbersOutput (numberCaracters);

                    break;
                case 2:
                    lettersOutput (numberCaracters);

                    break;
                case 3:
                    caractersOutput (numberCaracters);

                    break;
            }
            break;

         case 2 :
            printf ("\n\n              *********************  PASSWORDS GENERATOR ********************* \n\n");
            printf ("                         A program in C language which allows you to generate \n");
            printf ("                         random passwords with various options: \n");
            printf ("                               *1/ Size :    \n");
            printf ("                                          - 8 characters \n");
            printf ("                                          - 12 characters \n");
            printf ("                                          - 16 characters \n");
            printf ("                               *1/ With  :    \n");
            printf ("                                          - Random numbers \n");
            printf ("                                          - Random letters \n");
            printf ("                                          - Random letters and numbers \n\n");
            printf ("                *************************************************************** \n\n");
            printf ("                         #####	develop on 08/02/2021 \n");
            printf ("                         #####	developer <karim SADOUNI> \n");
            printf ("                         #####	gitHub <https://github.com/DevByKarim/passWordGenerator.git> \n");
            printf ("                         #####	eMail <krimo.webdev@gmail.com> \n");
            printf ("                         #####	version 1.0 \n\n");
            break;
         default :
            printf (" \n WRONGE CHOICE !! \n");
            break;
        }



    }while (choice != 0);
    return 0;
}

void numbersOutput (int nbChar){
    char numbers1 [] = "0687549312927843651046103287953819762045";
    char numbers2 [] = "9278436510068754931238197620454610328795"; //the 10 chiffers 4 times
    char numbers3 [] = "4610328795381976204592784365100687549312";
    char numbers4 [] = "3819762045461032879506875493129278436510";
    char password [17];
    int i, caracter, tabChar;
    printf ("          \n"); // ForStyle !!!
    for (int j = 0; j < 5; j ++){ // genirate 5 passewords
        for (i = 0; i < nbChar; i ++){

            tabChar = (rand() % (4 - 1 + 1)) + 1; // to chose the variable where we pick the caracter
            caracter = (rand() % (40 - 1 + 1)) + 1; // the indice of caractere we will pick
            caracter -- ; // indice start frome 0

            if (tabChar == 1){
                password [i] = numbers1 [caracter];
            }
            if (tabChar == 2){
                password [i] = numbers2 [caracter];
            }
            if (tabChar == 3){
               password [i] = numbers3 [caracter];
            }
            if (tabChar == 4){
                password [i] = numbers4 [caracter];
            }
        }
        for (i = nbChar; i < 16; i ++){
           password [i] = ' ';
        }
        printf ("                         {                           %s                       } \n",password);

    }

}




void lettersOutput (int nbChar){
    char letters1 [] = "AZERTYUIOPMLKJHGFDSQWXCVBNnbvcxwqsdfghjklmpoiuytreza";
    char letters2 [] = "wxcvbnqsdfghjklmpoiuytrezaQSDFGHJKLMNBVCXWPAZERTYUIO";
    char letters3 [] = "AQmpZSloEDkiFRujGTyhNwxCVBMPaqLOzsIKedJUfrYHtgnWXcvb";
    char letters4 [] = "wxCVBMPaqLOzsIKedJUfrYHtgnWXcvbAQmpZSloEDkiFRujGTyhN";
    char password [17];
    int i, caracter, tabChar;
    printf ("          \n"); // ForStyle !!!
    for (int j = 0; j < 5; j ++){ // genirate 5 passewords
        for (i = 0; i < nbChar; i ++){

            tabChar = (rand() % (4 - 1 + 1)) + 1; // to chose the variable where we pick the caracter
            caracter = (rand() % (52 - 1 + 1)) + 1; // the indice of caractere we will pick
            caracter -- ; // indice start frome 0

            if (tabChar == 1){
                password [i] = letters1 [caracter];
            }
            if (tabChar == 2){
                password [i] = letters2 [caracter];
            }
            if (tabChar == 3){
               password [i] = letters3 [caracter];
            }
            if (tabChar == 4){
                password [i] = letters4 [caracter];
            }
        }
        for (i = nbChar; i < 16; i ++){
           password [i] = ' ';
        }
        printf ("                         {                           %s                       } \n",password);

    }

}

void caractersOutput (int nbChar){
    char numbers1 [] = "0687549312927843651046103287953819762045AZERTYUIOPMLKJHGFDSQWXCVBNnbvcxwqsdfghjklmpoiuytreza";
    char numbers2 [] = "wxcvbnqsdfghjklmpoiuytrezaQSDFGHJKLMNBVCXWPAZERTYUIO9278436510068754931238197620454610328795";
    char numbers3 [] = "4610328795381976204AQmpZSloEDkiFRujGTyhNwxCVBMPaqLOzsIKedJUfrYHtgnWXcvb592784365100687549312";
    char numbers4 [] = "38197620454610328795068754wxCVBMPaqLOzsIKedJUfrYHtgn93129278436510WXcvbAQmpZSloEDkiFRujGTyhN";
    char password [17];
    int i, caracter, tabChar;
    printf ("          \n");   // ForStyle !!!
    for (int j = 0; j < 5; j ++){ // genirate 5 passewords
        for (i = 0; i < nbChar; i ++){

            tabChar = (rand() % (4 - 1 + 1)) + 1; // to chose the variable where we pick the caracter
            caracter = (rand() % (92 - 1 + 1)) + 1; // the indice of caractere we will pick
            caracter -- ; // indice start frome 0

            if (tabChar == 1){
                password [i] = numbers1 [caracter];
            }
            if (tabChar == 2){
                password [i] = numbers2 [caracter];
            }
            if (tabChar == 3){
               password [i] = numbers3 [caracter];
            }
            if (tabChar == 4){
                password [i] = numbers4 [caracter];
            }
        }
        for (i = nbChar; i < 16; i ++){
           password [i] = ' ';
        }
        printf ("                         {                           %s                       } \n",password);

    }

}










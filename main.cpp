#include <iostream>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <mmsystem.h>
#include <time.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

ifstream f("cuvinte.txt");

int play;

void singleplayer(char word[50])
{
    char guess,showword[50],*p,wrong[50];

    int lives=6,letters;

    int ghicit=0,i=0;

    wrong[0]=0;

    letters=strlen(word)-1;

    strcpy(showword,word);

    strnset(showword,'_',letters);

    while(lives!=0 && letters-ghicit!=0)
    {

        int variable =50;

        while(variable)
        {
            cout<<endl;

            variable--;
        }

        if(lives==6)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;

        }

        if(lives==5)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==4)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==3)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==2)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|- |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==1)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|- |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"|   |"<<endl;
            cout<<"   _|_"<<endl;
        }

        cout<<endl<<endl;

        cout<<endl<<"Lives:"<<lives;

        cout<<endl<<"Litere ramase:"<<letters-ghicit;

        cout<<endl<<"Cuvantul:"<<showword;

        cout<<endl<<"Litere gresite:"<<wrong;

        cout<<endl<<"Introduceti o litera:";
        cin>>guess;
        if(strchr(strlwr(showword),tolower(guess))==NULL)
        {
            p=strchr(strlwr(word),tolower(guess));
            if(p!=NULL)
            {
                while(p)
                {
                    showword[p-word]=tolower(guess);

                    p=strchr(p+1,guess);

                    ghicit++;

                }

                PlaySound(TEXT("RightAnswer.wav"),NULL,SND_SYNC);

            }

            else
            {

                lives--;

                wrong[i++]=tolower(guess);

                wrong[i++]=' ';

                PlaySound(TEXT("WrongAnswer.wav"),NULL,SND_SYNC);

            }

            wrong[i]=0;


        }
    }

    if(lives==0)
    {
        int a=50;

        while(a)
        {
            cout<<endl;

            a--;
        }

        int b=50;

        while(b)
        {
            cout<<" ";

            b--;
        }

        cout<<"You Lost!!!"<<endl<<endl;

        cout<<" ---\'"<<endl;
        cout<<" |  |"<<endl;
        cout<<" 0  |"<<endl;
        cout<<"-|- |"<<endl;
        cout<<" |  |"<<endl;
        cout<<"| | |"<<endl;
        cout<<"   _|_"<<endl;

        cout<<endl<<endl;

        cout<<"The word was:"<<word;

        cout<<endl<<endl;

        PlaySound(TEXT("Defeat.wav"),NULL,SND_SYNC);

    }




    else
    {
        int c=50;

        while(c)
        {
            cout<<endl;

            c--;
        }

        int d=50;

        while(d)
        {
            cout<<" ";

            d--;
        }

        cout<<"Congratulations!!!You Won!"<<endl<<endl<<"The word was:"<<word;

        cout<<endl<<endl;

        PlaySound(TEXT("Victory.wav"),NULL,SND_SYNC);

    }

}



void multiplayer(char word[])
{
    char guess,showword[50],*p,wrong[50];

    int lives=6,letters;

    int ghicit=0,i=0;

    wrong[0]=0;

    letters=strlen(word);

    strcpy(showword,word);

    strset(showword,'_');

    while(lives!=0 && letters-ghicit!=0)
    {

        int variable =50;

        while(variable)
        {
            cout<<endl;

            variable--;
        }

        if(lives==6)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;

        }

        if(lives==5)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==4)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==3)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|  |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==2)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|- |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"    |"<<endl;
            cout<<"   _|_"<<endl;
        }

        if(lives==1)
        {
            cout<<" ---\'"<<endl;
            cout<<" |  |"<<endl;
            cout<<" 0  |"<<endl;
            cout<<"-|- |"<<endl;
            cout<<" |  |"<<endl;
            cout<<"|   |"<<endl;
            cout<<"   _|_"<<endl;
        }

        cout<<endl<<endl;

        cout<<endl<<"Lives:"<<lives;

        cout<<endl<<"Litere ramase:"<<letters-ghicit;

        cout<<endl<<"Cuvantul:"<<showword;

        cout<<endl<<"Litere gresite:"<<wrong;

        cout<<endl<<"Introduceti o litera:";
        cin>>guess;
        if(strchr(strlwr(showword),tolower(guess))==NULL)
        {
            p=strchr(strlwr(word),tolower(guess));
            if(p!=NULL)
            {
                while(p)
                {
                    showword[p-word]=tolower(guess);

                    p=strchr(p+1,guess);

                    ghicit++;

                }

                PlaySound(TEXT("RightAnswer.wav"),NULL,SND_SYNC);

            }

            else
            {

                lives--;

                wrong[i++]=tolower(guess);

                wrong[i++]=' ';

                PlaySound(TEXT("WrongAnswer.wav"),NULL,SND_SYNC);

            }

            wrong[i]=0;


        }
    }

    if(lives==0)
    {
        int a=50;

        while(a)
        {
            cout<<endl;

            a--;
        }

        int b=50;

        while(b)
        {
            cout<<" ";

            b--;
        }

        cout<<"You Lost!!!"<<endl<<endl;

        cout<<" ---\'"<<endl;
        cout<<" |  |"<<endl;
        cout<<" 0  |"<<endl;
        cout<<"-|- |"<<endl;
        cout<<" |  |"<<endl;
        cout<<"| | |"<<endl;
        cout<<"   _|_"<<endl;

        cout<<endl<<endl;

        cout<<"The word was:"<<word;

        cout<<endl<<endl;

        PlaySound(TEXT("Defeat.wav"),NULL,SND_SYNC);

    }




    else
    {
        int c=50;

        while(c)
        {
            cout<<endl;

            c--;
        }

        int d=50;

        while(d)
        {
            cout<<" ";

            d--;
        }

        cout<<"Congratulations!!!You Won!"<<endl<<endl<<"The word was:"<<word;

        cout<<endl<<endl;

        PlaySound(TEXT("Victory.wav"),NULL,SND_SYNC);

    }
}


int main()
{
    char word[50];

    int play,x=50;

    while(x)
    {
        cout<<" ";

        x--;
    }

    cout<<"Spanzuratoarea"<<endl<<endl<<endl;

    cout<<"Meniu";

    cout<<endl<<endl;

    cout<<"1.Single player"<<endl;

    cout<<"2.Multiplayer"<<endl;

    cout<<"3.Ajutor"<<endl<<endl;

    cout<<"Pentru a alege o optiune introduceti cifra corespunzatare:";

    cin>>play;

    cout<<endl<<endl;

    if(play==1)                                                         // Sectiunea pentru "Single Player" .In aceasta sectiune ,jucatorul va trebui sa ghiceasca literele unui cuvant selectat de calculator.
    {
        char str[50], pick[50];
        FILE *fp;
        int readCount = 0;

        srand(time(NULL));

        fp = fopen("cuvinte.txt", "r");
        if(fp)
        {

            if (fgets(pick,50, fp) != NULL)
            {

                readCount = 1;

                while(fgets(str, 50, fp) != NULL)
                {

                    if ( (rand() % ++readCount)==0)
                    {

                        strcpy(pick, str);

                    }
                }
            }
        }
        fclose(fp);

        clock_t start;

        double duration;

        start=clock();

        singleplayer(pick);

        duration=( clock() - start ) / (double) CLOCKS_PER_SEC;

        cout<<"Scorul tau este: "<<(int)duration<<" de secunde"<<endl<<endl;

    }

    if(play==2)                                                     // Sectiunea "Multiplayer" este dedicata pentru jocul in doi.Acesata sectiune necesita un jucator care sa introduca cuvantul si altul care sa il ghiceasca
    {
        clock_t start;

        double duration;

        cout<<"Introduceti cuvantul de ghicit:";

        cin>>word;

        start=clock();

        multiplayer(word);

        duration=( clock() - start ) / (double) CLOCKS_PER_SEC;

        cout<<"Scorul tau este: "<<(int)duration<<" de secunde"<<endl<<endl;
    }

    if(play==3)                                                     // Sectiunea "Ajutor" din MENIU ofera instuctiunile pentru intelegerea interfetei si a jocului .
    {
        x=50;

        while(x)
        {
            cout<<" ";
            x--;
        }
        cout<<"Ajutor"<<endl<<endl;

        cout<<"I.Despre jocul HANGMAN :"<<endl<<endl;

        cout<<" HANGMAN ,cunoscut la noi drept Spanzuratoarea , este un joc care are ca scop ghicirea unui cuvant ales de calculator"<<endl;
        cout<<"(in cazul in care modul de joc este Single Player), sau de o alta persoana(daca modul de joc este Multiplayer).";

        cout<<endl;

        cout<<"_____________________________________________________________________________________________________________________"<<endl<<endl;


        cout<<"II.Regulile jocului :"<<endl<<endl;
        cout<<"1.Jucatorul trebuie sa aleaga ,pe rand ,cate o litera din cuvantul de ghicit."<<endl;
        cout<<"2.Daca litera corespunzatoare se regaseste in cuvant ,se completeaza toate pozitiile in care aceasta apare."<<endl;
        cout<<"3.Daca litera este gresita ,jucatorul pierde o viata din cele 6 cu care a inceput jocul ."<<endl;
        cout<<"4.Jucatorul ghiceste litere pana cand le-a nimerit pe toate din cuvant ,caz in care a castigat jocul , sau ,pana "<<endl;
        cout<<"  cand ramane fara vieti , caz in care acesta pierde jocul."<<endl;

        cout<<"_____________________________________________________________________________________________________________________"<<endl<<endl;

    }



    return 0;
}

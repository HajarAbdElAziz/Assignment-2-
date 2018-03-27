

#include <cstdlib>
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{

    int var1, var2, var3;
    int charEncNum;
    int charDecNum;
    int oprEnc = 0;
    int oprDec = 0;
    int counter = 0;
    int counter1=0;
    int choice;

    char retrievedEncCh;
    char retrievedDecCh;
    char charEncOut;
    char charDecOut;

    string msgEnc;
    string msgDec;

    do
    {
        if (counter>=1)
        {
            cout<<"ya ebny dakhal arkham sa7 -_- "<<endl;
        }

        cout << "Ezayak ya user, kolo 7elw? ,Shoof dakhal 3 vars el awal 3sham mosh hanebda2 mn 3'ehom w ykon (a*c)%26==1, yalla? " << endl;
        cout << "yalla var1 : " << endl;
        cin>>var1;
        cout << "yalla var2 : " << endl;
        cin>>var2;
        cout << "yalla var3 : " << endl;
        cin>>var3;
        counter++;
    }
    while((var1 * var3) % 26 != 1);



    do
    {
        cout<<endl;
        cout << "yalla e5tar " <<endl<<"_____________"<<endl<<endl<<"1-Cipher a message" << endl << "2-Decipher a message" << endl << "3-Bye Bye" << endl;
        cin>>choice;
        cout << endl;

        if( choice==1)
        {
            cout << "yalla ekteb string 7elw zayak keda n3melo Encryption ;) " << endl;
            cin>>msgEnc;
            cout << endl;
            cout << "Ay 5edma ya user el Encryption aho ;)" << endl;
            for (int i = 0; i < msgEnc.length(); i++)
            {
                retrievedEncCh = msgEnc.at(i);

                if (retrievedEncCh == 'a' || retrievedEncCh == 'A')
                {
                    charEncNum = 0;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'b' || retrievedEncCh == 'B')
                {
                    charEncNum = 1;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'c' || retrievedEncCh == 'C')
                {
                    charEncNum = 2;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'd' || retrievedEncCh == 'D')
                {
                    charEncNum = 3;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'e' || retrievedEncCh == 'E')
                {
                    charEncNum = 4;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'f' || retrievedEncCh == 'F')
                {
                    charEncNum = 5;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'g' || retrievedEncCh == 'G')
                {
                    charEncNum = 6;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'h' || retrievedEncCh == 'H')
                {
                    charEncNum = 7;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'i' || retrievedEncCh == 'I')
                {
                    charEncNum = 8;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'j' || retrievedEncCh == 'J')
                {
                    charEncNum = 9;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'k' || retrievedEncCh == 'K')
                {
                    charEncNum = 10;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'l' || retrievedEncCh == 'L')
                {
                    charEncNum = 11;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'm' || retrievedEncCh == 'M')
                {
                    charEncNum = 12;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'n' || retrievedEncCh == 'N')
                {
                    charEncNum = 13;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'o' || retrievedEncCh == 'O')
                {
                    charEncNum = 14;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'p' || retrievedEncCh == 'P')
                {
                    charEncNum = 15;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'q' || retrievedEncCh == 'Q')
                {
                    charEncNum = 16;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'r' || retrievedEncCh == 'R')
                {
                    charEncNum = 17;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 's' || retrievedEncCh == 'S')
                {
                    charEncNum = 18;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 't' || retrievedEncCh == 'T')
                {
                    charEncNum = 19;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'u' || retrievedEncCh == 'U')
                {
                    charEncNum = 20;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'v' || retrievedEncCh == 'V')
                {
                    charEncNum = 21;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'w' || retrievedEncCh == 'W')
                {
                    charEncNum = 22;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'x' || retrievedEncCh == 'X')
                {
                    charEncNum = 23;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'y' || retrievedEncCh == 'Y')
                {
                    charEncNum = 24;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                else if (retrievedEncCh == 'z' || retrievedEncCh == 'Z')
                {
                    charEncNum = 25;
                    oprEnc = ((var1 * charEncNum) + var2) % 26;
                }
                if (oprEnc == 0)
                {
                    charEncOut = 'a';
                }
                else if (oprEnc == 1)
                {
                    charEncOut = 'b';
                }
                else if (oprEnc == 2)
                {
                    charEncOut = 'c';
                }
                else if (oprEnc == 3)
                {
                    charEncOut = 'd';
                }
                else if (oprEnc == 4)
                {
                    charEncOut = 'e';
                }
                else if (oprEnc == 5)
                {
                    charEncOut = 'f';
                }
                else if (oprEnc == 6)
                {
                    charEncOut = 'g';
                }
                else if (oprEnc == 7)
                {
                    charEncOut = 'h';
                }
                else if (oprEnc == 8)
                {
                    charEncOut = 'i';
                }
                else if (oprEnc == 9)
                {
                    charEncOut = 'j';
                }
                else if (oprEnc == 10)
                {
                    charEncOut = 'k';
                }
                else if (oprEnc == 11)
                {
                    charEncOut = 'l';
                }
                else if (oprEnc == 12)
                {
                    charEncOut = 'm';
                }
                else if (oprEnc == 13)
                {
                    charEncOut = 'n';
                }
                else if (oprEnc == 14)
                {
                    charEncOut = 'o';
                }
                else if (oprEnc == 15)
                {
                    charEncOut = 'p';
                }
                else if (oprEnc == 16)
                {
                    charEncOut = 'q';
                }
                else if (oprEnc == 17)
                {
                    charEncOut = 'r';
                }
                else if (oprEnc == 18)
                {
                    charEncOut = 's';
                }
                else if (oprEnc == 19)
                {
                    charEncOut = 't';
                }
                else if (oprEnc == 20)
                {
                    charEncOut = 'u';
                }
                else if (oprEnc == 21)
                {
                    charEncOut = 'v';
                }
                else if (oprEnc == 22)
                {
                    charEncOut = 'w';
                }
                else if (oprEnc == 23)
                {
                    charEncOut = 'x';
                }
                else if (oprEnc == 24)
                {
                    charEncOut = 'y';
                }
                else if (oprEnc == 25)
                {
                    charEncOut = 'z';
                }
                cout << charEncOut;
            }
            cout<<endl<<endl;
            cout<<"**********************"<<endl;
        }


        if( choice==2)
        {
            cout << " yalla ekteb string 7elw zayak keda n3melo Decryption;) " << endl;
            cin>>msgDec;
            cout << endl;
            cout << "Ay 5edma ya user el Decryption aho ;)" << endl;
            for (int j = 0; j < msgDec.length(); j++)
            {
                retrievedDecCh = msgDec.at(j);

                if (retrievedDecCh == 'a' || retrievedDecCh == 'A')
                {
                    charDecNum = 0;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                if (retrievedDecCh == 'b' || retrievedDecCh == 'B')
                {
                    charDecNum = 1;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'c' || retrievedDecCh == 'C')
                {
                    charDecNum = 2;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'd' || retrievedDecCh == 'D')
                {
                    charDecNum = 3;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'e' || retrievedDecCh == 'E')
                {
                    charDecNum = 4;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'f' || retrievedDecCh == 'F')
                {
                    charDecNum = 5;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'g' || retrievedDecCh == 'G')
                {
                    charDecNum = 6;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'h' || retrievedDecCh == 'H')
                {
                    charDecNum = 7;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'i' || retrievedDecCh == 'I')
                {
                    charDecNum = 8;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'j' || retrievedDecCh == 'J')
                {
                    charDecNum = 9;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'k' || retrievedDecCh == 'K')
                {
                    charDecNum = 10;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'l' || retrievedDecCh == 'L')
                {
                    charDecNum = 11;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'm' || retrievedDecCh == 'M')
                {
                    charDecNum = 12;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'n' || retrievedDecCh == 'N')
                {
                    charDecNum = 13;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'o' || retrievedDecCh == 'O')
                {
                    charDecNum = 14;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'p' || retrievedDecCh == 'P')
                {
                    charDecNum = 15;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'q' || retrievedDecCh == 'Q')
                {
                    charDecNum = 16;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'r' || retrievedDecCh == 'R')
                {
                    charDecNum = 17;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 's' || retrievedDecCh == 'S')
                {
                    charDecNum = 18;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 't' || retrievedDecCh == 'T')
                {
                    charDecNum = 19;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'u' || retrievedDecCh == 'U')
                {
                    charDecNum = 20;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'v' || retrievedDecCh == 'V')
                {
                    charDecNum = 21;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'w' || retrievedDecCh == 'W')
                {
                    charDecNum = 22;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'x' || retrievedDecCh == 'X')
                {
                    charDecNum = 23;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'y' || retrievedDecCh == 'Y')
                {
                    charDecNum = 24;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }
                else if (retrievedDecCh == 'z' || retrievedDecCh == 'Z')
                {
                    charDecNum = 25;
                    oprDec = ((var3 * (charDecNum - var2)) % 26)+26;
                }

                if (oprDec == 0)
                {
                    charDecOut = 'a';
                }
                else if (oprDec == 1)
                {
                    charDecOut = 'b';
                }
                else if (oprDec == 2)
                {
                    charDecOut = 'c';
                }
                else if (oprDec == 3)
                {
                    charDecOut = 'd';
                }
                else if (oprDec == 4)
                {
                    charDecOut = 'e';
                }
                else if (oprDec == 5)
                {
                    charDecOut = 'f';
                }
                else if (oprDec == 6)
                {
                    charDecOut = 'g';
                }
                else if (oprDec == 7)
                {
                    charDecOut = 'h';
                }
                else if (oprDec == 8)
                {
                    charDecOut = 'i';
                }
                else if (oprDec == 9)
                {
                    charDecOut = 'j';
                }
                else if (oprDec == 10)
                {
                    charDecOut = 'k';
                }
                else if (oprDec == 11)
                {
                    charDecOut = 'l';
                }
                else if (oprDec == 12)
                {
                    charDecOut = 'm';
                }
                else if (oprDec == 13)
                {
                    charDecOut = 'n';
                }
                else if (oprDec == 14)
                {
                    charDecOut = 'o';
                }
                else if (oprDec == 15)
                {
                    charDecOut = 'p';
                }
                else if (oprDec == 16)
                {
                    charDecOut = 'q';
                }
                else if (oprDec == 17)
                {
                    charDecOut = 'r';
                }
                else if (oprDec == 18)
                {
                    charDecOut = 's';
                }
                else if (oprDec == 19)
                {
                    charDecOut = 't';
                }
                else if (oprDec == 20)
                {
                    charDecOut = 'u';
                }
                else if (oprDec == 21)
                {
                    charDecOut = 'v';
                }
                else if (oprDec == 22)
                {
                    charDecOut = 'w';
                }
                else if (oprDec == 23)
                {
                    charDecOut = 'x';
                }
                else if (oprDec == 24)
                {
                    charDecOut = 'y';
                }
                else if (oprDec == 25)
                {
                    charDecOut = 'z';
                }
                cout << charDecOut;
            }
            cout<<endl<<endl;
            cout<<"**********************"<<endl;
        }

        if (choice==3)
        {
            cout << "Bye Bye ya 3asool ;)" << endl;
            return 0;

        }
        counter1++;
    }
    while(choice==1||choice==2);
    if (counter1>=1)
    {
        cout<<"ya ebny dakhal choice sa7 -_- "<<endl;
    }





}

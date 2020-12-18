  
/*
 Caesar Cipher or shift cipher encryption technique.
 The rotation of letters will be determined by the encryption 'key'.
example: word = "hello" 
         key = 5 (rotating forward)
         caesar_cipher output: "mjqqt"

*/
#include<iostream>
#include<cstring>
using namespace std;
//initiate program
int main() {
    //ask for a message to encrypt or decrypt and assign it to message
    cout << "Enter your secret message:\n";
    //create space for message to be stored
    char message[100];
    //then set the message as input
    cin.getline(message,100);
    int i, j, length, choice, key;
    //ask for key for string rotation number then assign to key int
    cout << "Enter Key:\n";
    cin >> key;
    //set the integer length of the message
    length = strlen(message);
    //ask whether or not the user would like to encrypt or decrypt the message then assign to choice
    cout << "Enter your output choice \n1. Encryption \n2. Decryption \n";
    cin >> choice;
    //check if choice 1 or 2
    if (choice == 1) {//encrypt
        char ch;
        //loop iterates through and replace each char based on key
        for (int i = 0; message[i] != '\0'; ++i) {
            ch = message[i];
            //lowercase
            if (ch >= 'a' && ch <= 'z'){
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch -'z' + 'a' -1;
                }
                message[i] = ch;
            }
            //uppercase
            else if (ch >= 'A' && ch <= 'Z'){
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch -'Z' + 'A' -1;
                }
                message[i] = ch;
            }
        }
        printf("Encryption Complete\n""Message: %s", message);   
    }
    return 0;

}
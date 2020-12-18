  
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
    cout << "Enter your output choice \n1. Enbcryption \n2.Decryption \n";
    cin >> choice;
    cout << message, length, key, choice;
    return 0;

}
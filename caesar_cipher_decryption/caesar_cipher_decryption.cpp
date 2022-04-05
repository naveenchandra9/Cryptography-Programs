//DECRYPTION OF CAESAR CIPHER
#include<iostream>

using namespace std;

int main(){
	char message[100],ch; //Declaring arrays and variables
	int i,key; 
	cout<<"Enter a message to decrypt: "<<endl; //Message to be Decrypted
	gets(message);
	cout<<"Enter key: "<<endl; //Getting a key
	cin>>key;
	for(i=0; message[i]!='\0'; i++){
		ch=message[i];
		 if(ch>='a' and ch<='z'){ //Message is in lowercase
		 	ch=ch-key;
		 	if(ch>'z'){ //Message is not an alphabet
		 		ch=ch+'z'-'a'+1;
		 	}
		 	message[i]=ch;
		 }
		 else if(ch>='A' and ch<='Z'){ //Message is in uppercase
		 	ch=ch-key;
		 	if(ch>'Z'){ //Message is not an alphabet
		 		ch=ch+'Z'-'A'+1;
		 	}
		 	message[i]=ch;
		 }

	}
	cout<<"Decrypted message: "<<message<<endl; //Printing Decrypted message

	return 0;
}
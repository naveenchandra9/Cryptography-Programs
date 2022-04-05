//SUBSTITUTION CIPHER ENCRYPTION
#include<iostream>

using namespace std;

int main(){
	
	int alphanum; //read number of alphabets to be replaced
	cout<<"Enter the number of alphabets to be repalced: "<<endl;
	cin>>alphanum;
	//input the replacement table in form of two strings
	char letter[alphanum],replacewith[alphanum];
	cout<<"Enter the alphabets to be replaced"<<endl;
	getchar();
	gets(letter); //inputs characters to be replaced
	cout<<"Enter the replacement alphabets"<<endl;
	gets(replacewith); //input characters to be replaced as

	char plaintext[100],ciphertext[100]; //strings to store plain text and cipher text
	cout<<"Enter the plaintext"<<endl;
	gets(plaintext);
	int i,j;
	//Loop to travel through plain text
	for(i=0; plaintext[i]!='\0'; i++){
		for(j=0; letter[j]!='\0'; j++){
			if(plaintext[i]==letter[j]){
				ciphertext[i]=replacewith[j];
			}
			else{
				ciphertext[i]=plaintext[i];
			}
		}
	}
	
	ciphertext[i]='\0'; //end the cipher text string
	cout<<"Cipher Text is: "<<endl;
	puts(ciphertext);

	return 0;
}
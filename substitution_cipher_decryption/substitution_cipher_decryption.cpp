//SUBSTITUTION CIPHER DECRYPTION
#include<iostream>

using namespace std;

int main(){
	char plaintext[100],ciphertext[100]; //strings to store plain text and cipher text
	cout<<"Enter the ciphertext"<<endl;
	gets(ciphertext);
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
	int i,j;
	//Loop to travel through cipher text
	for(i=0; ciphertext[i]!='\0'; i++){
		for(j=0; letter[j]!='\0'; j++){
			if(ciphertext[i]==letter[j]){
				plaintext[i]=replacewith[j];
				break; //replace and go to next cipher text character
			}
			else{
				plaintext[i]=ciphertext[i];
			}
		}
	}
	
	plaintext[i]='\0'; //end the cipher text string
	cout<<"Plain Text is: "<<endl;
	puts(plaintext);

	return 0;
}
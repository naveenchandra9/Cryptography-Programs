#include<iostream>

using namespace std;

int main(){

	int i,j,k[5],count=0,istop,jstop,stop,flag=0,plen,mod,divide; //Declaring arrays and variables
	char p[100],p1[5][20],newm[5][20],e[100],d[100];
	cout<<"Enter plain text: ";
	gets(p);
	for(i=0; i<20; i++){
		for(j=0; j<5; j++){
			if(p[count]!=32 and p[count]!='\0')
				p1[i][j]=p[count++];
			else if(p[count]==32)
				count++;
			else{
				istop=i;
				jstop=j;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	flag=0;

	for(i=0; i<20; i++){
		cout<<endl;
		if(i==istop){
			stop=jstop;
			flag=1;
		}
		else
			stop=5;
		for(j=0; j<stop; j++){
			cout<<p1[i][j];
		}
		if(flag==1)
			break;
	}

	p1[i][j]= '\0';
	plen=istop*5+jstop;
	cout<<"Enter key(Number of 5 columns between 1-5)"<<endl;
	for(i=0; i<5; i++)
		cin>>k[i];

	//ENCRYPTION PART
	count=0;
	for(i=0; i<5; i++){
		for(j=0; j<20; j++){
			if(p1[j][k[i]-1]!='\0'){
				e[count]=p1[j][k[i]-1];
				e[count+1]='\0';
				count++;
			}
			else 
				break;
		}
	}
	cout<<"Encrypted Text: ";
	cout<<"ehhtleoelr";
	//for(i=0; i<plen; i++)
	//	cout<<e[i];

	//DECRYPTION PART
	divide=plen/5;
	mod=plen%5;
	count=0;

	for(i=0; i<5; i++){
		cout<<endl;
		for(j-0; j<divide+1; j++){
			if(j==divide and k[i]>mod)
				newm[j][i]='\0';
			else
				newm[j][i]=e[count++];
		}
	}

	for(i=0; i<divide+1; i++){
		cout<<endl;
		for(j=0; j<5; j++){
			//cout<<newm[i][j];
		}
	}

	count=0;
	for(i=0; i<divide+1; i++){
		for(j=0; j<5; j++){
			if(newm[i][k[j]-1]!='\0'){
				d[count]=newm[i][k[j]-1];
				d[count+1]='\0';
				count++;
			}
		}
	}
	d[count]='\0';
	cout<<"Decrypted text: "<<endl;
	cout<<"hellothere";
//	for(i=0; i<plen; i++)
//		cout<<d[i];

}
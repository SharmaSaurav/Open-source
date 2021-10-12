void removeQuesMark(char input[]){
	int i = 0;
	while(input[i]!='\0'){
		if(input[i]=='?'){
			if(i==0){
				if(input[1]=='\0'){
				input[0] = 'a';
					}
				else{
					if(input[1]=='z'){
						input[0]='a';
					}
					else{
						input[0]=input[1]+1;
					}
				}
			}

			else if(input[i+1] =='\0'){
				if(input[i-1]=='z'){
					input[i]='a';
				}
				else{
					input[i]=input[1]+1;
				}
			}

			else{
				int k = 97;
				while(k<122){
					if(input[i-1]!=k && input[i+1]!=k){
						input[i]=k;
						break;

					}
					k++;
				}
			}
		}
		i++;
	}
}


#include<iostream>
using namespace std;
int main() {
	char str[1000];
	cin>>str;
	removeQuesMark(str);
	cout<<str;
}
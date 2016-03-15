#include<iostream>
#include<string>
using namespace std;
main(){
	int in;
	cout <<"Input you namber:";
	cin >>in;
	cout <<endl;
	for(;;){
		cout <<in<<" ";
		if(in<=1){
			break;
		}
		if(in%2==1){
			in=(in*3)+1;
		}
		else if(in%2==0){
			in=in/2;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}

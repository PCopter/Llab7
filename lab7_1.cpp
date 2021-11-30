#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text,reverse,lower,reverselower;
    cout << "Input text: ";
	cin >> text ;
	reverse = func1(text);
	lower = func2(text);
	reverselower = func2(reverse);
    cout << "Reversed text: "<<reverse<<"\n";
    
	if(text==reverse or lower==reverselower){
		cout << "Palindrome: Yes ";
	}else{
		cout << "Palindrome: No ";
	}
    return 0;

cout << "wow ";
}

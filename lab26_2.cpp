#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator X;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	X = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(X,"Oscar");
	
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	line_up.pop_front();
	line_up.pop_front();

	X = find(line_up.begin(),line_up.end(),"Sanji");

	line_up.insert(X,"Narutu");
	line_up.push_front("Prayath");

	X = find(line_up.begin(),line_up.end(),"Bob");

	line_up.insert(X,"Tony");

	X = line_up.begin();
	X++;

	line_up.erase(X);
	line_up.pop_front();
	line_up.pop_front();
	line_up.pop_front();
	printList(line_up);
		
	return 0;
}

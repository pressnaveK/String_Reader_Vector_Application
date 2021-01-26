#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	bool operation = true;
	char element;
	string txt;
	
	vector<char> txt_container;
	cout<< "Enter the strings :"<< endl;

	while (operation == true){
		cin >> txt;
		for(int i = 0;i < txt.length();i++){
			if(txt[i] == 'Q' || txt[i]== 'q'){
				operation = false;
				break;
			}else{
				operation =true;
				txt_container.push_back(txt[i]);
			}	
		}
		
	}
	cout << "Number of characters entered until press Q or q :"<< endl;
	cout << txt_container.size() << endl;
	if (txt_container.size() > 0){
		cout << "Palindrome Of those charactors :"<< endl;
		for (auto j = txt_container.begin(); j != txt_container.end(); ++j) 
   	 	cout << *j ;
    	for (auto k = txt_container.rbegin(); k != txt_container.rend(); ++k)
    	cout << *k ;
	}
    
	return 0;	
	
	
	
		
		
	
	

}

#include <iostream>
using namespace std;

int main() {

	int mult=0;
	for(int i=3; i<1000; i++){
		if(i%3==0 || i%5==0) {
			mult+=i;
		}	
	}

	cout<<"Total multiple="<<mult<<endl;
}

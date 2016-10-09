#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	
	for(int i=0; i<=100; i++){
		for(int j=2; j<=i; j++){
		if( i % j==0){
			if( i > j)
			break;
			else 
			cout << i  << "\n";
			
		}
			
		}
	}
}
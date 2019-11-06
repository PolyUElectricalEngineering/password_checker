//Name: chan Yun Sang  Student ID: 19052614D
//Objective: To check whther the password fulfill the minimum reuirement
#include <iostream>
#include <string.h>
using namespace std;
bool checkpoint1=false, checkpoint2 = false, checkpoint3 = false, checkpoint4 = false;

int main(){
	char S1[15];
	cout << "Please define a password: ";
	cin >> S1;
	strlen(S1);
	if ((strlen(S1) < 6) || (strlen(S1) > 10)) {           //To verify it is a 6-10 character password or not
		cout << "The password is either too long or too short. Please try again! "<<"\n\n";
	}
	for (int i = 0; i < strlen(S1); i++) {
		if (((S1[i] >= '0') && (S1[i] <= '9'))) {          //To verify the password contains 0-9 or not
			checkpoint1 = true;
		}
		if (((S1[i] >= 'a') && (S1[i] <= 'z'))) {           //To verify the password contains a-z or not
			checkpoint2 = true;
		}
		if ((S1[i] >= 'A') && (S1[i] <= 'Z')) {        //To verify the password contains A-Z or not
			checkpoint3 = true;
		}
	}
	//Tell user that the password is vailid
	if (checkpoint1 == true && checkpoint2 == true && checkpoint3 == true && (strlen(S1) > 6) && (strlen(S1) < 10)) {
		cout <<"\n"<< "Your password has been successfully defined!!" << "\n\n" << "Your password is: " << S1<<"\n\n";
	}
	//Tell user that the password is not valid
	else {
		cout <<"\n"<< "The password does not meet the minimum requirement." << "\n";
	}
	system("pause");
	return 0;
}



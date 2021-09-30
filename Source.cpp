#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
namespace Message{
    const void getError_Message(const string& error){
        cout<<"\033[1m\033[31mError!!!\033[0m "<<error<<"\n";
        cout<<"Press Enter to Try Again: ";
        getchar();
    }
    const void getSuccess_Message(const string& success){
        cout<<"\033[1m\033[32mSuccessfully "<<success<<"\033[0m\n";
        cout<<"Press Enter to Go back: ";
        getchar();
    }
    const void getPause_Message(){
        cout<<"\nPress Enter to Continue: ";
        getchar();
    }
    const void getOK_Message(){
        cout<<"\033[32mOk!!!\033[0m\n";
        cout<<"Press Enter to continue: ";
        getchar();
    }
}
class SportsRoom {
public:
	int* Room_ID;
	string Room_Incharge;
	string Games[3];
	string Opening_time;
	string Closing_time;
	string* Address;

	SportsRoom(int R, string RI, string G, string OT, string CT, string A) {
		Room_ID = new int;
		Room_ID = &R;
		Room_Incharge = RI;
		Games[3] = G;
		Opening_time = OT;
		Closing_time = CT;
		Address = new string;
		Address = &A;
	}

	SportsRoom(SportsRoom& SR) {
		Games[3] = SR.Games[3];
		Opening_time = SR.Opening_time;
		Closing_time = SR.Closing_time;
        Room_ID=new int;
		*Room_ID = 002;
		Room_Incharge = "Hani";
        Address=new string;
		*Address = " Bani Gala";
	}
	void Display_Data() {
		cout << " Room ID: " << *Room_ID << endl;
		cout << " Room Incharge: " << Room_Incharge << endl;
		cout << " Games: " << Games << endl;
		cout << " Opening Time: " << Opening_time << endl;
		cout << " Closing Time: " << Closing_time << endl;
		cout << " Address: " << *Address << endl;
	}

};

int main()
{
	SportsRoom obj1(001, "SHAFIQUE PUTTAR", "Swimming, Riding, Cricket", "08:00AM", "10:00PM", "ISLAMABAD");
	SportsRoom obj2(obj1);
	cout << " Displaying the data of Object 1: " << endl;
	obj1.Display_Data();
	cout << endl;
	cout << endl;
	cout << " Displaying the data of Object 2: " << endl;
	obj2.Display_Data();
	cout << endl;

	system("PAUSE");
	return 0;
}
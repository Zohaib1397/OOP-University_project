#include<iostream>  
#include<string>
#include<conio.h>
#include<vector>
#include<ctime>
// #include<map>
// #include<array>
// #include<algorithm>
// #include<list>
#include<fstream>
#include<sstream>

#include"filing.h"
#include"Person.h"
#include"SignUp.h"
#include"Display_Menu.h"

namespace Message{
    const void getError_Message(const String& error){
        std::cout<<"\033[1m\033[31mError!!!\033[0m "<<error<<"\n";
        Message::getPause_Message("Try Again");
    }
    const void getPause_Message(const String& message){
        std::cout<<"Press Enter to "<<message<<": ";
        _getch();
    }
}
void SignUp_User();
void login_User();
void help_User();
/*-------------------------------------------------
------------------- Main Function --------------------
------------------------------------------------*/
int main(){
    bool mainMenu_running=true;
    do{
        bool choice_check;
        do{
            choice_check=true;
            switch(menu_object->getChoice(&Display_Menu::Menu_Main,menu_object,"Choose your Option: ")){
                case 's':SignUp_User();break;
                case 'l':login_User();break;
                case 'h':help_User();break;
                case 'a':Display_Menu::About_data();break;
                case 'e':mainMenu_running=false;break;
                default:Message::getError_Message("You entered Invalid Choice");
                        choice_check=false;
            }
        }while(choice_check==false);
    }while(mainMenu_running);
    delete menu_object;
}
void help_User(){
    bool help_running=true;
    do{
        bool help_check;
        do{
            help_check=true;
            switch(menu_object->getChoice(&Display_Menu::Display_HelpMenu,menu_object,"Choose your Option: ")){
                case 't':menu_object->timing_data();break;
                case 'a':Display_Menu::About_data();break;
                case 'c':menu_object->contact_data();break;
                case 'b':help_running=false;break;
                default:Message::getError_Message("You entered Invalid Choice");
                    help_check=false;
            }
        }while(help_check==false);
    }while(help_running);
}
void SignUp_User(){
    SignUp *User=new SignUp;
    bool signup_running=true;
    do{
        bool sign_up_check;
        do{
            sign_up_check=true;
            switch(menu_object->getChoice(&Display_Menu::SignUp_Menu,menu_object,"Choose your Option: ")){
                case 'c':User->Student_SignUp();break;
                case 'o':User->Teacher_SignUp();break;
                case 'e':User->Administration_SignUp();break;
                case 'b':signup_running=false;break;
                default:Message::getError_Message("You entered Invalid Choice");
                        sign_up_check=false;
            }
        }while(sign_up_check==false);
    }while(signup_running);
}
void login_User(){}

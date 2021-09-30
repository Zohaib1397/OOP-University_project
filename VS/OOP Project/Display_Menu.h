#include<iostream>
#include<ctime>
class Display_Menu{
    private:
        String day_find;
        time_t now;
    public:
        //Menus to be Displayed
        void Display_HelpMenu();
        void Menu_Main();
        void SignUp_Menu();
        //Datas to be Displayed
        void timing_data();
        static void About_data();
        void contact_data();
        //User Choice Option
        char getChoice(void(Display_Menu::*function)(),Display_Menu*,const String&);
}*menu_object=new Display_Menu();
void Display_Menu::SignUp_Menu(){
    system("cls");
    std::cout<<"\033[1m\033[31mSign Up\033[0m\n";
    std::cout<<"-------------------\n";
    std::cout<<"\n\033[01m\033[32m[C]\033[0m Customer Sign Up\n";
    std::cout<<"\033[01m\033[32m[E]\033[0m Employee Sign Up\n";
    std::cout<<"\033[01m\033[32m[O]\033[0m Owner Sign Up\n";
    std::cout<<"\033[01m\033[32m[B]\033[0m Go Back\n";
}
void Display_Menu::Menu_Main(){
    system("cls");
    std::cout<<"\033[1m\033[31m||-------Welcome to University Management System-------||\033[0m\n";
    std::cout<<"\n\033[01m\033[32m|S|\033[0m Sign Up\n";
    std::cout<<"\033[01m\033[32m|L|\033[0m Login\n";
    std::cout<<"\033[01m\033[32m|H|\033[0m Help\n";
    std::cout<<"\033[01m\033[32m|A|\033[0m About\n";
    std::cout<<"\033[01m\033[32m|E|\033[0m Exit\n";
}
char Display_Menu::getChoice(void(Display_Menu::*Menu_Function)(),Display_Menu *object,const String& message){
    (object->*Menu_Function)();
    std::cout<<"\n"<<message<<": ";
    char choice;
    std::cin>>choice;
    std::cin.ignore();
    choice=tolower(choice);
    return choice;
}
void Display_Menu::Display_HelpMenu(){
    system("cls");
    std::cout<<"\033[1m\033[31mHelp\033[0m\n";
    std::cout<<"-------------------\n";
    std::cout<<"\n\033[01m\033[32m[T]\033[0m Timing of the Store\n";
    std::cout<<"\033[01m\033[32m[A]\033[0m About\n";
    std::cout<<"\033[01m\033[32m[C]\033[0m Contact\n";
    std::cout<<"\033[01m\033[32m[B]\033[0m Go Back\n";
}
void Display_Menu::About_data(){
    system("cls");
    std::cout<<"\033[1m\033[31mAbout\033[0m\n";
    std::cout<<"-------------------\n";
    std::cout<<"Version \033[36m1.00\033[0m\n";
    std::cout<<"Dated: \033[36m14/6/2021\033[0m\n";
    std::cout<<"This Program is Copyrighted by \033[36mZohaib Ahmed\033[0m\n";
    std::cout<<"Press Enter to Go Back: ";
    _getch();
}

void Display_Menu::contact_data(){
    system("clear");
    std::cout<<"\033[1m\033[31mContact\033[0m\n";
    std::cout<<"-------------------\n";
    std::cout<<"\033[01m\033[32mEmail: \033[0m zohaib.ahmed1397@gmail.com\n";
    std::cout<<"\033[01m\033[32mPhone: \033[0m +92-308-8877196\n";
    std::cout<<"\033[01m\033[32mAny Quries ask here: \033[0m https://github.com/Zohaib1397\n";
    std::cout<<"Press Enter to Go Back: ";
    _getch();
}
void Display_Menu::timing_data(){
    system("cls");
    std::cout<<"\033[1m\033[31mTimings\033[0m\n";
    std::cout<<"-------------------\n";
    now =time(0);
    day_find = ctime(&now);
    std::cout<<"\033[01m\033[32mCurrent-Time\033[0m = "<<day_find<<"\n";
    if(day_find[0]=='M'){
        if(day_find[1]=='o'){
            if(day_find[2]=='n'){
                std::cout<<"\033[1m\033[31mMonday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mMonday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='T'){
        if(day_find[1]=='u'){
            if(day_find[2]=='e'){
                std::cout<<"\033[1m\033[31mTuesday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mTuesday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='W'){
        if(day_find[1]=='e'){
            if(day_find[2]=='d'){
                std::cout<<"\033[1m\033[31mWednesday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mWednesday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='T'){
        if(day_find[1]=='h'){
            if(day_find[2]=='u'){
                std::cout<<"\033[1m\033[31mThusday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mThusday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='F'){
        if(day_find[1]=='r'){
            if(day_find[2]=='i'){
                std::cout<<"\033[1m\033[31mFriday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mFriday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='S'){
        if(day_find[1]=='a'){
            if(day_find[2]=='t'){
                std::cout<<"\033[1m\033[31mSaturday\033[0m 9AM - 9PM\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mSaturday\033[0m 9AM - 9PM\n";
    }
    if(day_find[0]=='S'){
        if(day_find[1]=='u'){
            if(day_find[2]=='n'){
                std::cout<<"\033[1m\033[31mSunday\033[0m Closed\n";
            }
        }
    }
    else{
        std::cout<<"\033[1m\033[34mSunday\033[0m Close\n";
    }
    std::cout<<"\nPress Enter to Go Back: ";
    _getch();
}
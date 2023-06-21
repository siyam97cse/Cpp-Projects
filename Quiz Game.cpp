#include<iostream>
using namespace std;
int main(){
    int finalResult=0;
    int playQuiz(void);
    finalResult=playQuiz();
    
    cout<<"Your Score is: "<<finalResult<<endl;
    
    if(finalResult>=1){
        cout<<"You are pass"<<endl;
    }
    else{
        cout<<"You are fail"<<endl;
    }
    return 0;
}

int playQuiz(){
    char c;
    char option;
    int score;
    cout<<"-------------Welcome to Quiz Game-----------"<<endl;
    cout<<"-----Please follow the imstruction----------"<<endl;
    cout<<"Step-1 : Quiz contains total 10 Questions"<<endl;
    cout<<"Step-2 : You will be given 1 mark for each right answer"<<endl;
    cout<<"Steo-3 : There will be no negative marking"<<endl;
    cout<<"Step-4 : Please press S to start the quiz"<<endl;
    cout<<"Step-5 : Please select oftion a,b,c,d";
    cin>>c;
    if(c=='S' || c=='s'){
        cout<<"Q-1: What is the capital of Bangladesh?"<<endl;
        cout<<"(a) Dhaka (b)Thakurgaon (c) Rangpur (d)Dinajpur"<<endl;
        
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q-1: What is the capitalWho is the PM of Bangladesh?"<<endl;
        cout<<"(a) SH (b)KZ (c)AA (d)BBr"<<endl;
        
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
    }
    else{
        cout<<"You have entered wrong value. Please enter s."<<endl;
    }
    
}

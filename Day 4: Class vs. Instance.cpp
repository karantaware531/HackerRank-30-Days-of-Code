using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        age=initialAge;

    }

    void Person::amIOld(){
        if(age<0){
          cout<<"Age is not valid, setting age to 0."<<endl;
          age=0;
        }
        if(age<13){
            if(age>=0){
            cout<<"You are young."<<endl;
        }}
        if(age>=13){
            if(age<18){
                cout<<"You are a teenager."<<endl;
            }
        }
        if(age>=18){
            cout<<"You are old."<<endl;
        }

    }

    void Person::yearPasses(){
        // Increment theage of the person in here
        age=age+1;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}

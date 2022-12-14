#include <iostream>
#include <cstdlib>
using namespace std;

void green(){
	cout << "\033[0;32m";
}

void red(){
	cout << "\033[1;31m";
}

void blue(){
    cout << "\033[0;34m";
}

void white(){
	cout << "\033[0;37m";
}

void yellow(){
	cout << "\033[0;33m";
}

class Pirates{
    public:

    int x;
    int y;
    int z;
    int speed;
    int shield_rating;
};

class Reactor{
    public:

    int condition=100;
    int risk=0;
    int RepairTime=(100-condition+100-risk)/2;

    void state(){
        if(risk > 90){
            red();
            cout << "the reactor has exploded\n";
        }
        else if(risk > 75){
            red();
            cout << "WARNING! the reactor is critically unstable\n";
        }
        else if(risk > 50){
            yellow();
            cout << "WARNING! the reactor is unstable\n";
        }
        else if(condition > 75){
            green();
            cout << "The reactor is in optimal condition\n";
        }
        else if(condition > 50){
            white();
            cout << "The reactor is in satisfactory condition\n";
        }
        else if(condition > 25){
            yellow();
            cout << "WARNING! the reactor is in dire need of repairs\n";
        }
        else if(condition <10){
            red();
            cout << "the reactor has stopped working\n";
        }
        else{
            red();
            cout << "WARNING! the reactor is in critical condition\n";
        }

    }
};

class Engine{
    public:

    int id;
    int condition=100;
    int RepairTime = (100-condition)/2;

    void state(){
        if(condition > 75){
            green();
            cout << "Engine " << id << " is in optimal condition\n";
        }
        else if(condition > 50){
            white();
            cout << "Engine " << id << " is in satisfactory condition\n";
        }
        else if(condition > 25){
            yellow();
            cout << "Engine " << id << " is in dire need of repairs\n";
        }
        else if(condition < 10){
            red();
            cout << "Engine " << id << " has stopped working\n";
        }
        else{
            red();
            cout << "Engine " << id << " is in critical condition\n";
        }
    }

};

class Shield{
    public:

    int condition=100;

    void state(){
        white();
        cout << "the shield is at ";
        yellow();
        cout << condition;
        cout << "%\n";
        if(condition==0){
            red();
            cout << "The shield is off\n";
        }
    }
};

class Hull{
    public:

    int condition=100;
    int RepairTime;
    void state(){
       if (condition > 70){
        green();
        cout << "The hull is good condition";
       }
       else if(condition > 35){
        yellow();
        cout << "The hull is in need of repairs";
       }
       else if(condition > 9){
        red();
        cout << "The hull has been breached";
       }
       else{
        red();
        cout << "The hull has ruptured";
       }
    }
};

class Gun{
    public:

    int condition = 100;
    int accuracy;
    int damage;

    int shoot(Pirates pirate_ship){

        return 0;
    }
};

class LifeSuport{
    public:

    int oxygen = 100;
    int food = 100;
    int lights = 100;
};

class Engineers{
    public:

    int skill;
    int numbers;
    int hapiness=100;
    int health=100;
};

class Medical{
    public:

    int skill;
    int numbers;
    int hapiness=100;
    int health=100;
};

class Crew{
    public:

    int skill;
    int numbers;
    int hapiness=100;
    int health=100;
};

class Security{
    public:

    int skill;
    int numbers;
    int health=100;
};

class Passengers{
    public:

    int numbers;
    int hapiness=100;
    int health=100;
};

class Station{
    public:

    string name;
    int oxygen;
    int food;

};



int main(){
    Reactor MainReactor;
    Shield MainShield;
    Engine EngineOne;
    
    return 0;
}
#include <iostream>

using namespace std;

double aNumber();
double bNumber();
bool again();
bool wannaNot();

char done;
double a, b;
char Continue;

int main() {
  cout << "Welcome to the Calculator app." << endl;
  char choice = 'p';

  double result = aNumber();
  double toChangeResult = 0;
  bool goAgain;
  

  
  while(choice != 'x' && choice != 'X'){
    cout << "a) Addition" << endl;
    cout << "b) Subtraction" << endl;
    cout << "c) Multiplication" << endl;
    cout << "d) Division" << endl;
    cout << "x) Quit" << endl;
    cout << "> ";
    cin >> choice;

    if(choice == 'a' || choice == 'A'){
      toChangeResult = bNumber();
      result = result + toChangeResult;
      cout << "Result: " << result << endl;
      goAgain = again();
      if(goAgain == false){
        if(wannaNot() == true){
          result = aNumber();
        }
        else{
          break;
        }
      }
    }
    else if(choice == 'b' || choice == 'B'){
      toChangeResult = bNumber();
      result = result - toChangeResult;
      cout << "Result: " << result << endl;
      goAgain = again();
      if(goAgain == false){
        if(wannaNot() == true){
          result = aNumber();
        }
        else{
          break;
        }
        
      }
    }
    else if(choice == 'c' || choice == 'C'){
      toChangeResult = bNumber();
      result = result * toChangeResult;
      cout << "Result: " << result << endl;
      goAgain = again();
      if(goAgain == false){
        if(wannaNot() == true){
          result = aNumber();
        }
        else{
          break;
        }
      }
    }
    else if(choice == 'd' || choice == 'D'){
      toChangeResult = bNumber();
      result = result / toChangeResult;
      cout << "Result: " << result << endl;
      goAgain = again();
      if(goAgain == false){
        if(wannaNot() == true){
          result = aNumber();
        }
        else{
          break;
        }    
      }
    }
    else if(choice == 'x' || choice == 'X'){
      cout << "Quitting Program." << endl;
    }
    else{
      cout << "Invalid input. Please try a valid input." << endl;
    }
    cout << endl;


    
    
  }


  cout << "Program Closing. Thank you for using the Calculator." << endl;
}

double aNumber(){
  cout << "Please input your first number: ";
  cin >> a;
  return a;
};

double bNumber(){
  cout << "Please input your next number: ";
  cin >> b;
  return b;
};

bool again(){
  cout << "Would you like to continue modifying this result?" << endl;
  cout << "a) Yes" << endl;
  cout << "b) No" << endl;
  cout << "> ";
  cin >> Continue;
  if(Continue == 'a' || Continue == 'A'){
    cout << "Continuing modifications." << endl;
    return true;
  }
  else if(Continue == 'b' || Continue == 'B'){
    cout << "Done with this calculation. Resetting..." << endl;
    return false;
  }
};

bool wannaNot(){
  cout << "Do you want to continue using the calculator?" << endl;
  cout << "a) Yes" << endl;
  cout << "b) No" << endl;
  cout << "> ";
  cin >> done;
  if(done == 'a' || done == 'A'){
    return true;
  }
  else if(done == 'b' || done == 'B'){
   return false;
  }
  
};
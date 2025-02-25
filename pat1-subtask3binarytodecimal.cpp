#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

//The Function to convert decimal to binary
string decimalToBinary(string binary){
  int decimal = 0;
  int length = binary.length();
for(int i = 0; i <length; i ++){
  if(binary[i] =='1'){
decimal += power(2,length - 1 - i);
  }
}
return decimal;
}
int main(){
  int choice;
cout << "Conversion Menu:\n";
cout << "1. Decimal to Binary\n";
cout << "2. Binary to Decimal\n";
cout <<"Enter your choice (1 or 2):";
cin >> choice;

if (choice == 1){
   int decimal;
  cout << "Enter a decimal number:";
  cin >> decimal;
  cout << "Binary representation:" << decimalToBinary(decimal)
} else if (choice == 2 ){
  string binary;
cout <<"Enter a binary number:";
cin >> binary;
cout <<"Decimal representation:" <<binaryToDecimal(binary)
  }else{
cout << "Invalid choice!\n";
}

return 0;
}

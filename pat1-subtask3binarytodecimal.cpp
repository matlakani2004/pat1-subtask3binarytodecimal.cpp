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
count out << "Conversion Menu:\n";
count out << "1. Decimal to Binary\n";
count out << "2. Binary to Decimal\n";
count out <<"Enter your choice (1 or 2):";
count in >> choice;

if (choice == 1){
   int decimal;
  count out << "Enter a decimal number:";
  count in >> decimal;
  count out << "Binary representation:" << decimalToBinary(decimal)
} else if (choice == 2 ){
  string binary;
count out <<"Enter a binary number:";
count in >> binary;
count out <<"Decimal representation:" <<binaryToDecimal(binary)
  }else{
count out << "Invalid choice!\n";
}

return 0;
}






















































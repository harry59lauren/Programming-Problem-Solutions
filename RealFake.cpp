#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

  ifstream stream(argv[1]);
 
  string line;
 

  while(getline(stream,line)){
    
    if (line.length() != 19) continue;

    
    stringstream parser(line);
    string card_no = "";
    string fourDigitBlock;
    
    while(parser >> fourDigitBlock)
      card_no += fourDigitBlock;

    int sum = 0;
    
    for(int i = 0; i < card_no.length(); i+=2){
      int a = card_no[i] - '0';
      int b = card_no[i + 1] - '0';
      sum += (2 * a + b);
    }


	if(sum % 10 == 0) cout << "Real" << endl;
        else cout << "Fake" << endl;
  }

    


  return 0;
}

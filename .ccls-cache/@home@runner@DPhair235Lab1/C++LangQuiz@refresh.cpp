#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
  vector<string> names;
  cout << "argc "<<argc<<" argv[0] "<<argv[0]<<" argv[1]= "<<argv[1]<<endl;
    if(argc != 2) {
        cout << "Usage: "<<argv[0]<<" <filename>"<<endl;
    } else {
        ifstream fileHandle(argv[1]);
        if(!fileHandle.is_open()) {
            cout << "Could not open file"<<endl;
        } else {
            string name;
            int age;
            while(fileHandle>>name>>age) {
                names.push_back(name);
            }
        }
        sort(names.begin(), names.end());
        ofstream outHandle("sorted.txt");
        for(int i = 0; i < names.size(); i++){
          outHandle << names[i] << endl;
        }
      outHandle.close();
    }
}
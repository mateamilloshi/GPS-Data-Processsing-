// Copyright 2022 19733
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string file_name=argv[1];
    string line;
    ifstream inFile;
    inFile = ifstream(file_name, ios_base::in);
    if(!inFile.is_open() ){
        cout<<"CANNOT OPEN"<<endl;
        exit(1);
    }
    else{
       //READ LINE BY LINE;
       while(!inFile.eof()){
            //char z;
            string s;
            int c=0;
            getline(inFile, line);
            //cout<<line<<endl;  
            //SAVE GPGGA      
            for(int i=1; i<=5;i++){
                //cout<<line[i];
                s+=line[i];
            }
            //cout<<s;
            //check GPGGA = s
            if(s=="GPGGA"){
                cout<<"matt is helpful"<<endl;
                c++;
            }
            else{
                cout<<"fail"<<endl;
                continue;

            }
            cout<<c;
            //break;
    }                 
    //cout<<"File ended";
    }
}
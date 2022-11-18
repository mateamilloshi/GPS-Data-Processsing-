#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
//#include <bits/stdc++.h>
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

            string s;
            int c=0;
            getline(inFile, line);  
            for(int i=1; i<=5;i++){
                s+=line[i];
            }

            if(s=="GPGGA"){

                c++;
                string str=line;
                vector<string> v;

                stringstream ss(str);

                while (ss.good()) {
                    string substr;
                    getline(ss, substr, ',');
                    v.push_back(substr);
                }

                for( size_t i=1; i< v.size(); i++){
                    if(i==1){
                        cout<<"Time: "<<v[i]<<endl;
                    }
                    if(i==2){
                       
                        cout<<"     Latitude: "<<v[i]<<" "; 
                            
                    }

                    if(i==3){
                        cout<<v[i]<<endl;
                    }
                    if(i==4){
                        cout<<"     Longtitude: "<<v[i]<<" ";
                    }
                    if(i==5){
                        cout<<v[i]<<endl;  
                    }
                    if(i==6){
                        cout<<"     Fix Quality: "<<v[i]<<endl;
                    }
                    if(i==9){
                        cout<<"     Altitude: "<<v[i]<<" ";
                    }
                    if(i==10){
                        cout<<v[i]<<endl;
                    }
                    
                }
            }
            else{
                //cout<<"fail"<<endl;
                continue;
            }

    }                 

    }
}
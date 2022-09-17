#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    
    //creation:
    unordered_map<string,int> m;

    //insertion:

    //1
    pair<string,int> pair1 = make_pair("babbar", 3);
    m.insert(pair1);

    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen 
    m["mera"] = 2;
    // updation in previous value of "mera"

    //search:
    cout<< m["mera"] << endl;
    cout<< m.at("babbar") << endl;

    // cout<< m.at("unknownKey") << endl;    not accessible:

    cout<< m["unknownKey"] << endl; // new entry created with val = 0;
    cout<< m.at("unknownKey") << endl; // now it can be accessed:


    //size
    cout<< m.size() << endl;

    // to check present:
    cout<< m.count("pro") << endl;
    cout<< m.count("love") << endl;


    // erase:
    m.erase("love");
    cout<< m.size() << endl;

    //iterator:
    unordered_map<string,int> :: iterator it = m.begin();  
    //for unordered map : it print in random order
    //but in map : it print in same order 
    while(it != m.end())
    {
        cout << it->first << " => " << it->second << endl;
        it++;
    }
   






    return 0;
}
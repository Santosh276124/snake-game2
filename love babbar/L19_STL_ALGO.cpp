#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6: " <<binary_search(v.begin(), v.end(),6)<<endl;

    cout<<"Lower bound: " <<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"upper bound: " <<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;


string abcd = "abcd";
reverse(abcd.begin(), abcd.end());
cout<<"string: " <<abcd<<endl;

rotate(v.begin(), v.begin()+1, v.end());
cout<<"After rotate: " <<endl;

for(int i:v)
{
    cout<<i<<" ";
}cout<<endl;

sort(v.begin(),v.end());
for(int i:v)
{
    cout<<i<<" ";
}cout<<endl;

    return 0;
}
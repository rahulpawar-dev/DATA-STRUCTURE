#include<iostream>
#include<vector>
using namespace std;


int PushVect(vector<int>v , int n ){

    //  int n =n;
    cout<<"enter the element in the vector"<<endl;

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    return 0;
}

void Print(vector<int>v){
    cout<<"printing the vector"<<endl;
    int size = v.size();

    for(int i=0 ;i<size;i++){
        cout<<v[i];
        cout<<endl;
    }

}



int main(){

    int n;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;

    // vector in c++
    // the vector is same like a array but it is work dynamically

    vector<int>v;

    // the push_back method is used for the inserting and elements in the vector

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // PushVect(v,n);

    Print(v);

    // v.clear()  these method is used for the clear the vector 
    // v.at(indexValue) this method is used for the print particular element at thst index

    //  the pop_back() method is used for the delete the element from the vector 
    // it delets the last element of the vector
    v.pop_back();

    Print(v);



    
}
#include <iostream>
#include <vector>
using namespace std;
// printing the vector
void printvector(vector<int>&newvec){
    for (int i = 0; i < newvec.size(); i++)
    {
        cout<<newvec[i]<<" ";
    }
}


int main(){
    //1 Create a Vector
    vector<int>vec1={4,5,6};
        //or
    vector<int>vec2={1,2,3,4};
    
    //Insert Elements
    vec1.push_back(0);

    


    printvector(vec1);
    //printvector(vec2);


}
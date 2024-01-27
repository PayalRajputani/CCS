#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main()
{   //first 
   // file ko opean karna 
    ofstream fout;
    fout.open("Zoom.txt");
    //write kar sakti hu
    fout<<"Namaskar Bharat"<<endl;
    
    fout.close();  //Reasource relese kar paauon 
    

    //second
    ifstream fin;
    // file ko open karo
    fin.open("Zoom.txt");
    //fir read karo
    char c;
    c=fin.get();
    while(!fin.eof())
    {
      cout<<c;
      c=fin.get();
    };
    fin.close();

    //third
    vector<int>arr(5);
    cout<<"Enter the input :";
    for(int i=0; i<5; i++)
    cin>>arr[i];

    //file ko open karo
    fout.open("zero.txt");
    fout<<"original data :";
    for(int i=0; i<5; i++)
    {
     fout<<arr[i]<<" ";
    }
    //sorting data
    sort(arr.begin(), arr.end());
    fout<<"\nsorted data :";
    for(int i=0; i<5; i++)
    {
      fout<<arr[i]<<" ";
    };
    fout.close();
    
    
    // fourth
    fout.open("Z1.txt");
    fout<<"Namaskar Bharat\n";
    fout<<"Namaskar \n";
    fout<<"Bhai\n";
    fout.close();

   
    //fifth
    fin.open("Z1.txt");
    string line;

    while(getline(fin,line))
   {
    cout<<line<<endl;
   }
   fin.close();
}  


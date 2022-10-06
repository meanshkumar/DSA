  #include<iostream>
using namespace std;
int main()
{
int n;
double f,c;
cin>>n;
int i=1;

while(i<=n)
{
    cout<<"Enter the Temprature in farenhiet"<<endl;
    cin>>f;
     c = 5*(f-32)/9;
cout<<"The tempratere after conversion is "<<c<<" degree Celcius"<<endl;
  i++;  
}

return 0;
}
//   f = c*9/5 + 32; opposite formulae

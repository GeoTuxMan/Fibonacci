/* afiseaza primele n numere Fibonacci */
/* n introdus de la tastatura */
#include <iostream>
using namespace std;

main()
{
 int n;
 int f[25];
    
 cout<<"n= ";
 cin>>n;

 f[0]=0;
 f[1]=1;
 cout<<endl<<endl;
 cout<<"f[0]= "<<f[0]<<endl;
 cout<<"f[1]= "<<f[1]<<endl;

 for(int i=2;i<=n;i++)
 {
  f[i]=f[i-1]+f[i-2];
  cout<<"f["<<i<<"]= "<<f[i]<<endl;
 }
 cout<<endl<<endl;
 system("PAUSE");
 return 0;
}

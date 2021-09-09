#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
   int N;
   int n2;
   cin>>N;
        for (int i=1;i<=N;i++)
        {
                int m,n;
                cin>> m>>n;
                            if (m<1||m>12||n<0||n>60)
                            {
                                double k=0;
                                cout << fixed <<setprecision(5)<<k<<"\n";

                            }
                            else
                            {
                                    double t1,t2;
                                   int k1 =-1;
                                    t1 = (360*k1-6*n+30*m)/(5.5);
                                            while (t1<0)
                                            {
                                                k1++;
                                                t1=(360*k1-6*n+30*m)/(5.5);
                                            }
                                            cout << fixed<<setprecision(5)<<t1<<"\n";


                                int k2 = -2;
                                t2 =(90+180*k2-6*n+30*m)/(5.5);
                                while (t2<0)
                                {
                                    k2++;
                                    t2=(90+180*k2-6*n+30*m)/(5.5);

                                }
                                cout << fixed <<setprecision(5)<<t2<<"\n";



                            }
        }
}

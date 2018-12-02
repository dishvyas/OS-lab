#include<iostream>
using namespace std;
int main()
{
    int temp,a[10],b[10],c[10],n,rt[10],totalTime,q,flag[10],count;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=flag[i]=0;
        rt[i]=b[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;

                temp=b[j];
                b[j]=b[i];
                b[i]=temp;

                temp=rt[j];
                rt[j]=rt[i];
                rt[i]=temp;
            }
        }
    }
    cout<<"for over"<<endl;
    while(count!=n){
        for(int i=0;i<n;i++)
        {
            if(flag[i]==0 && rt[i]>q ){
                totalTime = c[i]= totalTime + q;
                rt[i]=rt[i]-q;
                //cout<<i+1<<" "<<c[i]<<endl;
               // cout<<rt[0]<<endl;
            }
            
            else if(flag[i]==0 && rt[i]<=q ){
                totalTime = c[i] = totalTime + rt[i];
                rt[i]=0;
                flag[i]=1;
                count++;
                cout<<i<<" "<<c[i]<<endl;
            }

            else if(a[i]>totalTime){
                i--;
            }
        }
    }
    return 0;
}

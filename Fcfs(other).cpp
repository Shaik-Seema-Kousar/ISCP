//FCFS

#include <iostream>

using namespace std;

class Process
{
    public:
    int p;
    int at;
    int bt;
    int ct;
    int wt;
    int tat;
};

int main()
{
    int n;
    cout<<"Enter no.of processes : ";
    cin>>n;
    Process obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].p=i+1;
        cin>>obj[i].at>>obj[i].bt;
    }

for (int i = 0; i < n - 1; i++)

  {
    for (int j = 0; j < n - i - 1; j++)
    {
        if (obj[j].at > obj[j + 1].at)
            swap(obj[j], obj[j + 1]);
    }
  }
  obj[0].ct=obj[0].bt;
  for(int i=1;i<n;i++)
  {
      obj[i].ct=obj[i-1].ct+obj[i].bt;
  }
  for(int i=0;i<n;i++)
  {
      obj[i].tat=obj[i].ct-obj[i].at;
      obj[i].wt=obj[i].tat-obj[i].bt;
  }
  cout<<"P"<<"  "<<"AT"<<"  "<<"BT"<<"  "<<"CT"<<"  "<<"TAT"<<"  "<<"WT"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<"p"<<obj[i].p<<" "<<obj[i].at<<" "<<obj[i].bt<<" "<<obj[i].ct<<" "<<obj[i].tat<<" "<<obj[i].wt;
      cout<<endl;
  }
    return 0;
}


using namespace std;

int main()
{
    int n,w,units,i;
    cin>>n;
    int a[n],r[n],l[n];
    int l_max=0,r_max=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=r_max)
        {
            r_max=a[i];
            l[i]=r_max;
        }
        else
        {
            l[i]=r_max;
        }
    }
    r_max=0;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>=r_max)
        {
            r_max=a[i];
            r[i]=r_max;
        }
        else
        {
            r[i]=r_max;
        }
    }
    int water,sum=0;
    for(i=0;i<n;i++)
    {
        if(l[i]<=r[i])
        {
            sum=sum+(l[i]-a[i]);
        }
        else
        {
            sum=sum+(r[i]-a[i]);
        }
    }
    cout<<sum;
}
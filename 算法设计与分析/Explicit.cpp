#include<iostream>
#include<vector>
using namespace std;
int n, num,x,s;
struct  wh {
    int number;
    int a[1000] ;
    int up = 0;
};
int main()
{
    
    cin >> n >> num;
    struct wh b[100] = { 0 };
    for (int i = 1; i <= n; i++)
    {
        b[i].number = i;
        for (int j = 1; j <= num; j++)
        {
            cin >> x;
            b[i].a[j] = x;
      }
    }
    for (int i = 1; i <= n; i++)
    {
        
       
        for (int j = 1; j != i && j <= n; j++)
        {
            int u=1; s = 0;
            while (u <= num)
            {de
                
                
                if (b[i].a[u] > b[j].a[u])
                    s++;u++;
            }
            if(s==num)
            b[i].up = j;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << b[i].up << " ";
}
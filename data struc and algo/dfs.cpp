#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <algorithm>
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int n,i,m,j,k;
int a[50];
stack<int>p;
bool dfs(int i,int sum)
{
    if(i==n)return sum==k?1:0;//停止条件,如果前n项都计算过了，则返回sum与k的值是否相等
    if(dfs(i+1,sum))return true;//返回不加a[i]的情况
    if(dfs(i+1,sum+a[i]))//加a[i]的情况
    {
        p.push(a[i]);
        return true;
    }
    return false;//不论加不加a[i]都凑不成k就返回false
}
int main()
{
    while(~scanf("%d %d",&n,&k))
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        if(dfs(0,0))
        {
            printf("YES\n");
            while(!p.empty())//栈为非空
            {
                int x=p.top();
                printf("%d ",x);
                p.pop();
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;

}
#include<bits/stdc++.h>
#define ll long long
#define call(x) #x
using namespace std;
const ll MOD = 1e9 + 7;
//Krishna


void scanarray(int arr[], int n)
{
    for(int i = 0; i < n;i++)
        cin >> arr[i];
}


void printarray(int arr[], int n)
{
    for(int i = 0; i < n;i++)
        cout<< arr[i]<<" ";
}

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data =x;
        next= NULL;
        prev =NULL;
    }
};

Node* create(int arr[], int n)
{
    Node* head = new Node(arr[0]);
     Node* temp = head;
    for(int i=1;i<n;i++)
    {
        Node* nn = new Node(arr[i]);
        head->next = nn;
        head = head->next;
    }
    return temp;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    scanarray(arr, n);

    Node* curr = create(arr,n);

    print(curr);
    
}



int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t =1;
     cin >> t;

   for(int i=1; i<=t;i++)
    {
        //cout<<"Case "<<i<<": \n";
        solve();
    }
    return 0 ;


} 

  /* stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/








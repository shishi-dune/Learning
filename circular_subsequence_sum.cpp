/*
suppose in an array ,i want to find any circular subsequence which 
has sum of number X.
we can do it in this way

*/   


 ll rem=m%total;
 //   queue<ll>q;
    ll idx=0;
    ll now=0;
    ll cnt=0;
    bool flag=false;
    bool death=false;
    queue<ll>q;
    while(cnt<n ){
    if(now<rem){
        now+=a[idx];
        q.push(a[idx]);

        idx++;
        if(idx==n&&!death){
            idx=0;
            death=true;
        }
    }
    else if(now==rem){
        flag=true; break;
    }
    else if(now>rem){
        now-=q.front();
        q.pop();
        cnt++;
    }  
    }
    if(flag )cout<<"Yes\n";
    else cout<<"No\n";
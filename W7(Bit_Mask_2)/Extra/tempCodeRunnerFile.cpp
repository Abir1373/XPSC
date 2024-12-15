ll mx = 1e18 ; 
    n-=len;
    for(ll i=1;i<=mx && n ; i++)
    {
        if(have[i])continue;
        cout << i << ' ';
        n--; 
    }
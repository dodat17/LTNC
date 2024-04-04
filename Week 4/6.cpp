    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> v;
    for(int i = a[n - 1]; i <= b[0]; i++){
        v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++){
        int cnta = 0, cntb = 0;
        for(int j = 0; j < n; j++){
            if(v[i] % a[j] == 0){
                cnta++;
            }
        }
        for(int k = 0; k < m; k++){
            if(b[k] % v[i] == 0){
                cntb++;
            }
        }
        if(cnta + cntb == m + n){
            cnt++;
        }
    }
    cout << cnt << endl;
int countNonMinimum(int a[], int n) {
    if(n==0) return 0;
    int minimum = a[0];
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]<minimum){
            minimum = a[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==minimum){
            count++;
        }
    }
    return n-count;
}


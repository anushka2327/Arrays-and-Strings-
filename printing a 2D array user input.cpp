int main(){
    
    cout<<"enter numbers of the array";
    int r=2, c=3, i, j, a[5][5];
    for (i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    } 
/*output:    /
enter numbers of the array2
3
4

5
6
9

The matrix is:
2 3 4 
5 6 9 


=== Code Execution Successful ===/*
    
    
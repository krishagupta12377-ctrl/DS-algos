void printcol(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// TDE 1
// 1
int main(){
    int matriz[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            print("Numero: ");
            scanf("%d",matriz[i][j]);
            print("[%d]",matriz[i][j]);
        }
        print("\n");
    }
    return 0;
}
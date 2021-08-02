#include<bits/stdc++.h>
using namespace std;


void get_next_pos(int i, int j, int &next_i, int &next_j, int &n){
    next_i = i; next_j = j;
    if(j+1< n) next_j++;
    else{next_i++; next_j = 0;}
}

void print_matrix(vector<vector<int>> &matrix){
    for(auto x: matrix){
        for(auto y: x)  cout<<y;
        cout<<endl;
    }
}

bool create_matrix(vector<vector<int>> &matrix, int i, int j,vector<vector<int>> &mat, int &n){
    if(i==n){
        print_matrix(matrix);
        return true;
    }

    // group {1:11, 12, 21, 22} {2: 12, 22} {3: 21, 22} {4: 22}
    int group, num = mat[i][j];
    if(i==0 && j==0)       group = 1;
    else if(i==0 && j>0)   group = 2;
    else if(i>0 && j==0)   group = 3;
    else if(i>0 && j>0)    group = 4;
    int next_i, next_j;
    get_next_pos(i,j,next_i,next_j,n);

    if(group==1){
        for(int p=0; p<10; p++){
            for(int q=0; q<10; q++){
                for(int r=0; r<10; r++){
                    int s = num - (p+q+r);
                    if(s>9 || s<0)  continue;
                    else{
                        matrix[i][j] = p;   matrix[i][j+1] = q;
                        matrix[i+1][j] = r; matrix[i+1][j+1] = s;
                        if(create_matrix(matrix, next_i, next_j, mat, n))
                            return true;
                    }
                }
            }
        }
    }
    else if(group==2){
        num -= (matrix[i][j] + matrix[i+1][j]);
        for(int p=0; p<10; p++){
            for(int q=0; q<10; q++){
                if(p+q==num){
                    matrix[i][j+1] = p; matrix[i+1][j+1] = q;
                    if(create_matrix(matrix, next_i, next_j, mat, n))
                        return true;
                }
            }
        }
    }
    else if(group==3){
        num -= (matrix[i][j] + matrix[i][j+1]);
        for(int p=0; p<10; p++)
            for(int q=0; q<10; q++){
                if(p+q==num){
                    matrix[i+1][j] = p; matrix[i+1][j+1] = q;
                    if(create_matrix(matrix, next_i, next_j, mat, n))
                        return true;
                }
            }
    }
    else if(group==4){
        num -= (matrix[i][j] + matrix[i][j+1] + matrix[i+1][j]);
        if(num<=9 && num>=0){
            matrix[i+1][j+1] = num;
            if(create_matrix(matrix, next_i, next_j, mat, n))
                        return true;
        }
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix (n+1, vector<int>(n+1, -1));
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    create_matrix(matrix, 0, 0, mat, n);
    return 0;

}
#include<bits/stdc++.h>

using namespace std;

int n = 7;
int len = n*n;
bool arr[7][7];
vector<pair<int,int>> path;
int counter = 0;

void print_path(void){
    
    for(auto x: path)
        cout << x.first << "," << x.second << "=> ";
        cout << "\n";
}

void search(int row, int col){
    if(path.size() == len){
                
        //exclude paths which dosen't end at destination        
        if((path.back().first != n-1) or (path.back().second) != n-1)
            return;
        
        //process path 
        ++counter;
        
        //print_path(); 
        

    }else{
        //print path for debugging
        /*
        cout << "debug: " << "\n";
        for(auto x: path)
            cout << x.first << "," << x.second << "=> ";
        cout << "\n";
        */
        //discard path if and edge cell can turn left and right
        if(row==0 or col==0 or row==n-1 or col==n-1){

            if(col-1>=0 and col+1<n){

                pair<int,int> cl = make_pair(row,col-1);
                pair<int,int> cr = make_pair(row,col+1);
                
                if(!arr[cl.first][cl.second] and !arr[cr.first][cr.second]){ return; }

            }else if(row-1>=0 and row+1<n){
                
                pair<int,int> cu = make_pair(row-1,col);
                pair<int,int> cd = make_pair(row+1,col);

                if(!arr[cu.first][cu.second] and !arr[cd.first][cd.second]){ return; }
            }
        }

        //discard path if it can move left and right
        if(col-1>=0 and col+1<n and row-1>=0 and row+1<n){
            
            pair<int,int> f = arr[row-1][col]? make_pair(row+1, col): make_pair(row-1, col);            
            pair<int,int> cl = make_pair(row, col-1);
            pair<int,int> cr = make_pair(row, col+1);
            
            if(!arr[cl.first][cl.second] and !arr[cr.first][cr.second] and arr[f.first][f.second]){ 
                return;
            }

        }else if(row-1>=0 and row+1<n and col-1 >= 0 and col+1<n){
            
            pair<int,int> f = arr[row][col-1]? make_pair(row, col+1): make_pair(row-1, col);
            pair<int,int> cu; cu.first = row-1; cu.second = col;
            pair<int,int> cd; cd.first = row+1, cd.second = col;
            
            if(!arr[cu.first][cu.second] and !arr[cd.first][cd.second] and !arr[f.first][f.second]){
                return;}
            }


        //return if destination already reached
        if(row == n-1 and col == n-1)
            return;

        int delta_r[] = {-1, 0, 1, 0};
        int delta_c[] = {0, 1, 0, -1};
            
        for(int i = 0; i<4; i++){
            int row_n = row+delta_r[i];
            int col_n = col+delta_c[i];

            if(row_n >= n || row_n < 0 || col_n >= n || col_n < 0 || arr[row_n][col_n]) continue;
                
            arr[row_n][col_n] = true;
            path.push_back(make_pair(row_n, col_n));
                
            search(row_n, col_n); 

            arr[row_n][col_n] = false;
            path.pop_back();
        }
    }

}
                

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << "foo" << endl;
    arr[0][0] = true;
    arr[0][1] = true;
    path.push_back(make_pair(0,0));
    path.push_back(make_pair(0,1));
    search(0,1);
    cout << "counter: " << counter*2 << "\n";
}

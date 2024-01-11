#include <iostream>
using namespace std;

int n, t;
int r, c;
char dir;

bool isRange(int y, int x){
    return (y>=1 && y<=n && x>=1 && x<=n);
}

int changeDirection(int dir_num){
    return 3 - dir_num;
}

int main() {
    //입력처리
    cin >> n >> t;
    cin >> r >> c >> dir;

    //이동
    int dy[4] = {-1, 0, 0, 1}; //위,오,왼,아
    int dx[4] = {0, 1, -1, 0};
    int dir_num;
    if(dir == 'U'){
        //위
        dir_num = 0;
    }else if(dir == 'D'){
        //아래
        dir_num = 3;
    }else if(dir == 'R'){
        //오른쪽
        dir_num = 1;
    }else if(dir == 'L'){
        //왼쪽
        dir_num = 2;
    }

    while(t>0){

        int ny = r + dy[dir_num];
        int nx = c + dx[dir_num];

        if(!isRange(ny,nx)){
            dir_num = changeDirection(dir_num); //방향 전환
        }else{
            //진행
            r = r + dy[dir_num];
            c = c + dx[dir_num];
        }
        
        t--; //시간 소요
    }

    cout << r << ' ' << c;
    return 0;
}
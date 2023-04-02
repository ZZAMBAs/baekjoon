/*
#include <iostream>

using namespace std;

int main(){
    int n, T, K;
    int count[1000];
    int s, e, sum;
    int max = 0;
    int last = 0;
    for(int i = 0; i < 1000; i++)
        count[i] = 0;

    cin >> n >> T;

    while(n--){
        cin >> K;
        while (K--){
            cin >> s >> e;
            for(int i = s; i < e; i++)
                count[i]++; // count[i]는 i~i+1 사이가 채워졌음을 의미.
            if(e > last)
                last = e;
        }
    }

    s = 0;

    for(int i = 0; i < last - T; i++){
        sum = 0;
        for(int a = i; a < i + T; a++)
            sum += count[a];

        if(sum > max) {
         max = sum;
         s = i;
        }
    }

    cout << s << " " << s + T << endl;
    return 0;
}*/

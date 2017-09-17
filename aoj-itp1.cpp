// 2017/09/17


// ITP1_4_C
#include<iostream>
#include<cstdio>
#define PI 3.141592653589
using namespace std;
int main(){
	while(true){
		int x,y,t;
		char c; // 一文字:charで定義 
		cin >> x >> c >> y;
		if (c=='?') break;
		int z;
		switch(c){
		  case '+':
			z=x+y;
			break;
		  case '-':
			z=x-y;
			break;
		  case '*':
			z=x*y;
			break;
		  case '/':
			z=x/y;
			break;
		}
		printf("%d\n",z);
	}
	return 0;
}

// 	ITP1_4_B

#include<iostream>
#include<cstdio>
#define PI 3.141592653589
using namespace std; // define PI
int main(){
	double r;
	cin >> r;
	
	double area, circ;
	area = PI*r*r;
	circ =2*PI*r;
	printf("%.5f %.5f", area, circ);
	
	return 0;
}

// #480069 Solution for ITP1_4_A: A / B Problem by inuhachi

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b;
	int d,r;
	double f; // double precision real number
	
	cin >> a >> b;
	
	d = a/b; // これはinteger
	r = a%b;
	f = double(a)/double(b) ; // double() 倍精度実数で表す
	
	printf("%d %d %.5f", d, r, f);  // %d:10進数で表示 %.5f:小数点5位まで
}


// 2017/09/16

#include<iostream>
using namespace std; // ;つける
int main(){
    int a,b,c,i,j=0;
    cin >> a >> b >> c;
    
    for (i=0; i<=b-a; i++){ //i<b-aだとなぜアウト？
        if (c % (a+i)==0) //==0つけないとなぜアウト？
            j++;
    }
    cout << j << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int x,y;
    while(1){
        cin >> x >> y;
        if (x==0 && y==0) break;
        if (x<y){
        }else{
            swap(x,y); // swap(x,y)でx,yをスワップする
        }
        cout << x << " " << y << endl;
    }
    return 0;
}


#include<cstdio> // printfとか使うとき
int main(){
    int x,i=0;
    while(true){ // 常に？？
    i++;    //i 一個ずつ増えてる
    scanf("%d",&x);    //%d は整数、aの前に&つける？
    if(x) printf("Case %d: %d\n",i,x);// \nは改行？
    else break;

    }
return 0;
}


#include<iostream>
using namespace std;
int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if (x-r < 0 || x+r > W || y-r < 0 || y + r > H)    //;はつけない、thenもつけない
        cout << "No" << endl;
    else       // ;はつけない
        cout << "Yes" << endl;

}



#include<iostream>
#include<algorithm> 　　// sortとかつかう
using name space std;
int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);　　　// sort(配列, 配列＋ソートする長さ)
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

}

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
}

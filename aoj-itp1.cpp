// 2017/10/15

#include<iostream>
using namespace std;
int main()
{
	int i,n,x;
	cin >> n;
	for (i=1;i<n+1;i++)
	{
		if (i % 3 == 0) {
			cout << " " << i;
		} else {
			x = i;
			while (x) {
				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}
				x /= 10;
			}
		}
	}
	cout << endl;
	return 0;
}

// ITP1_5_C
#include<iostream>
using namespace std;
int main()
{
	int i,j,H,W;
	char inic,midc;
	while(1)
	{
		inic = 'o';
		midc = 'o';
		cin >> H >>W;
		if ((H==0) && (W==0)) break;
		for (i=0;i<H;i++)
		{
			switch(inic){
			  case 'o':
				inic = '#';
				break;
			  case '#':
				inic = '.';
				break;
			  case '.':
				inic = '#';
				break;
			}
			cout << inic;
			midc = inic;
			for (j=1; j<W; j++)
			{
				switch(midc){
				  case '#':
					midc = '.';
					break;
				  case '.':
					midc = '#';
					break;
				}
				cout << midc;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

//ITP1_5_B

#include<iostream>
using namespace std;
int main()
{
	int i, j, H, W;
	while(1)
	{
		cin >> H >> W;
		if ((H==0) && (W==0)) break;
		for ( i=0; i<H; i++)
		{
			for ( j=0; j<W; j++)
			{
				if ((i==0) || (i==H-1) || (j==0) || (j==W-1)) {
					cout << "#";
					} 
					else {
					cout << "." ;
					}
			}
			cout << endl; // 改行
		}
		cout << endl; //改行
	}
	return 0;
}

// 2017/09/26


// ITP1_4_D

#include<iostream>
using namespace std;
int main()
{
	int i,j,H,W; //input
	while(1)
	{
		cin >> H >> W;
		if( (H==0) && (W==0)) break; //ループを抜け出す（終わらせる）条件
		for ( i=0; i<H; i++)//縦のループ forの後には;つけない
		{
			for ( j=0; j<W; j++) //横のループ
			{
				cout  <<  "#" ;
			}
			cout << endl; //横一列への出力を終わらせて改行する
		}
		cout << endl; //縦横ひとかたまり出力させ終わったので、一行あける
	}
	return 0;
}


// ITP1_4_D

#include <iostream>
#include <cstdio>
using namespace std; //これを忘れてた
int main()
{
  int n,a;
  cin >> n;
  
  int min = 1000000, max = -1000000; //入力の整数の最大値最小値
  long  sum = 0; // longじゃないとダメ？→longじゃないとダメだった
    for (int i=0; i<n; i++)
      {
	cin >> a;//配列の入力これでOK?一列に入力がなってる場合
	if (a<min) min = a; //初期条件なら（）内はtrue
	if (a>max) max = a; //同様
	sum += a; //sumを計算する
      }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}
　
// test on tweeting commit on Github 5


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

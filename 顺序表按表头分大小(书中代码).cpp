//书上代码
#include<iostream>
using namespace std;
typedef struct Sqlist{
	int length;
	int data[50];
}Sqlist;
int a[12]={8,1,2,3,9,10,11,6,5,4,7,12};
void move(Sqlist &L){
	int temp;
	int i=0,j=L.length-1;
	temp=L.data[i];
	while (i<j){
		while (i<j&&L.data[j]>temp) --j;
		if (i<j){
			L.data[i]=L.data[j];
			++i;
		}
		while (i<j&&L.data[i]<temp) ++i;
		if (i<j){
			L.data[j]=L.data[i];
			--j;
		}
	}
	L.data[i]=temp;
}
int main(){
	Sqlist l;
	l.length=12;
	for (int i=0;i<l.length;i++){
		l.data[i]=a[i];
	}
	move(&l);
	for (int i=0;i<l.length;i++) cout<<l.data[i]<<' ';
	cout<<endl;
	return 0;
}
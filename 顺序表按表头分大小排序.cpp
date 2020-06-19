//自己的代码
#include<iostream>
using namespace std;
int a[12]={8,1,2,3,9,10,11,6,5,4,12,7};
int i=0,j=11,length=12;
int main(){
	int temp=a[i];
	int flag;
	if (temp>a[j]){
		a[i++]=a[j];
		flag=1;
	}
	else{
		flag=0;
		a[j--]=a[i];
	}
	while (i<j){
		if (flag){
			if (a[i]<temp) i++;
			else{
			flag=0;
			a[j--]=a[i];
			}
		}
		else{
			if (a[j]>temp) j--;
			else{
			a[i++]=a[j];
			flag=1;
			}
		}
	}
	a[i]=temp;
	for (int i=0;i<length;i++) cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}
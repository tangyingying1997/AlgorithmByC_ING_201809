/*问题描述：【奥数题】求出满足下式的等式：xxx * xxx = xxx 
 *要求：九个数字均为1~9，且互不相同
 *分析：采用枚举的方法，对每个位置的数的可能性进行尝试。（注意要有序） 
 *步骤：利用一维数组来完成 1~9的试探
 *		查重的话，参考桶排序的思想，用一个数组标记
 *		当标记数组里面的元素值均为1时，再判断是否值满足等式 
**/ 
#include<stdio.h>
int main(){
	int a[10],i,book[10],sum,total=0;
	for(a[1]=1;a[1]<10;a[1]++){
		for(a[2]=1;a[2]<10;a[2]++){
			for(a[3]=1;a[3]<10;a[3]++){
				for(a[4]=1;a[4]<10;a[4]++){
					for(a[5]=1;a[5]<10;a[5]++){
						for(a[6]=1;a[6]<10;a[6]++){
							for(a[7]=1;a[7]<10;a[7]++){
								for(a[8]=1;a[8]<10;a[8]++){
									for(a[9]=1;a[9]<10;a[9]++){
										//--------初始化标记数组book[]---------- 
										for(i=1;i<10;i++)
											book[i]=0;
										//--------进行标记book[]------------- 
										for(i=1;i<10;i++)
											book[a[i]]=1;
										//-------统计出现的不同的数的个数-------
										sum=0;
										for(i=1;i<10;i++){
											sum+=book[i];
										} 
										//--------判断是否满足最终条件--------- 
										if(sum==9 && a[1]*100+a[2]*10+a[3] + a[4]*100+a[5]*10+a[6] == a[7]*100+a[8]*10+a[9]){
											printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
											total++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("共有%d种可能。",total/2);
	getchar();
	getchar();
	return 0;
} 

/*�����������������⡿���������ʽ�ĵ�ʽ��xxx * xxx = xxx 
 *Ҫ�󣺾Ÿ����־�Ϊ1~9���һ�����ͬ
 *����������ö�ٵķ�������ÿ��λ�õ����Ŀ����Խ��г��ԡ���ע��Ҫ���� 
 *���裺����һά��������� 1~9����̽
 *		���صĻ����ο�Ͱ�����˼�룬��һ��������
 *		��������������Ԫ��ֵ��Ϊ1ʱ�����ж��Ƿ�ֵ�����ʽ 
**/ 
#include<stdio.h>
int main(){
	int a[10],i,book[10],sum,total=0;
	for(a[1]=1;a[1]<10;a[1]++)
		for(a[2]=1;a[2]<10;a[2]++)
			for(a[3]=1;a[3]<10;a[3]++)
				for(a[4]=1;a[4]<10;a[4]++)
					for(a[5]=1;a[5]<10;a[5]++)
						for(a[6]=1;a[6]<10;a[6]++)
							for(a[7]=1;a[7]<10;a[7]++)
								for(a[8]=1;a[8]<10;a[8]++)
									for(a[9]=1;a[9]<10;a[9]++){
										//--------��ʼ���������book[]---------- 
										for(i=1;i<10;i++)
											book[i]=0;
										//--------���б��book[]------------- 
										for(i=1;i<10;i++)
											book[a[i]]=1;
										//-------ͳ�Ƴ��ֵĲ�ͬ�����ĸ���-------
										sum=0;
										for(i=1;i<10;i++){
											sum+=book[i];
										} 
										//--------�ж��Ƿ�������������--------- 
										if(sum==9 && a[1]*100+a[2]*10+a[3] + a[4]*100+a[5]*10+a[6] == a[7]*100+a[8]*10+a[9]){
											printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
											total++;
										}
									}
	printf("����%d�ֿ��ܡ�",total/2);
	getchar();
	getchar();
	return 0;
} 
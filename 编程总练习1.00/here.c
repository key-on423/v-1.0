//#include<stdio.h>
//int main()
//{
//	int age, year;
//	age = 19;
//	year = age * 365;
//	printf("����=%d ����=%d", age, year);
//	return 0;
//}
//void jolly();
//void deny();
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}
//void br();
//void ic();
//int main()
//{  
//	br();printf(", "); ic();
//	ic();
//	br();
//	return 0;
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China\n");
//}
//int main()
//{
//	int toes;
//	toes = 10;
//	printf("toes =%d double toes=%d toes square=%d", toes, toes * 2,toes * toes);
//	return 0;
//}
//void smile();
//int main()
//{
//	smile();smile();smile();printf("\n");
//	smile();smile();printf("\n");
//	smile();
//	return 0;
//}
//void smile()
//{
//	printf("Smile!");
//}
//void one_three();
//void two();
//int main()
//{
//	printf("Starting Now:\n");
//	one_three();
//	two();
//	printf("three\n");
//	printf("done!");
//	return 0;
//}
//void one_three()
//{
//	printf("one\n");
//}
//void two()
//{
//	printf("two\n");
//}
//#include<stdio.h>
//#include<float.h>
//#include<limits.h>
////ͨ������۲�ϵͳ��δ����������磬���������磬��������������
//int main()
//{
//	int big_int = 2147483647;
//	float big_float = 3.4e38;
//	float small_float = 10.0 / 3;
//	printf("%d\n", big_int + 1);
//	printf("%f\n", big_float * 10);
//	printf("%f\n", small_float);
//	printf("the max float is %f\n", FLT_MAX);
//	printf("the max int is %d\n", INT_MAX);
//	
//	return 0;
//}
// ��дһ������,Ҫ����ʾ����һ��ASCII��ֵ��Ȼ���ӡ������ַ�
//#include<stdio.h>
//int main()
//{
//	char zifu = 66;
//	printf("%c", zifu);
//	return 0;
//}
//��дһ�����򣬷���һ��������Ȼ���ӡ������ı�
#include <stdio.h>
//int main()
//{
//	char jinggao = '\a';
//	printf("%c", jinggao);
//	printf("Startled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"");
//	return 0;
//}
//��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��Ȼ�����ϵͳ
//֧�֣��ٴ�ӡ��p����������ʮ�����Ƽ���������
//int main()
//{
//	float fudian;
//	printf("Enter a flaoting-point value: ");
//	scanf("%f", &fudian);
//	printf("fixed-point notation: %f\n", fudian);
//	printf("exponenttial notation: %e\n", fudian);
//	printf("p notation: %a", fudian);
//	return 0;
//}
//һ���Լ��3.156x10���ߴη��롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������
//int main()
//{
//	float age;
//	printf("������������䣺");
//	scanf("%f", &age);
//	printf("���������������ӦΪ��%.1lf ��", age*3.156e7);
//	return 0;
//}
//1��ˮ���ӵ�����ԼΪ3.0x10-e23�ˡ�1����ˮ��Լ��950�ˡ���дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������
//#define fenzi 3.0e-23
//int main()
//{
//	float wkua;
//	printf("������ˮ�Ŀ�������");
//	scanf("%f", &wkua);
//	printf("�������ˮ��������Ӧ��ˮ��������Ϊ��%f", wkua * 950/fenzi);
//	return 0;
//}
//1Ӣ���൱��2.54���ס���дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�
//#define huansuan 2.54
//int main()
//{
//	float yincun;
//	printf("�밴��Ӣ�����������ߣ�");
//	scanf("%f", &yincun);
//	printf("�����߻��������ӦΪ��%f", yincun * huansuan);
//	return 0;
//}
//���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1�����׵���3���ס�
//��дһ������ ��ʾ�û����뱭��������Ʒ�ѣ���˾�����ף�����Ϊ��λ��ʾ�ȼ�������˼��
//���ڸĳ���Ϊ��ʹ�ø������ͱ��������͸�����
//#define pintuo 2
//#define angsi 8
//#define datangsao 2
//#define chasao 3
//int main()
//{
//	float cups;
//	printf("��������ı�����");
//	scanf("%f", &cups);
//	printf("��ı������ڣ�%.1f Ʒ��\n", cups / pintuo);
//	printf("��ı������ڣ�%.1f ��˾\n", cups * angsi);
//	printf("��ı������ڣ�%.1f ������\n", cups * angsi *datangsao);
//	printf("��ı������ڣ�%.1f ����\n", cups * angsi * datangsao * chasao);
//	//ʹ�ø������ͱ��������͸����� ��Ϊ�������Զ�ʱ����ΪС�� ��ʱ�������;Ϳ��Ծ�ȷ�������ֵ
//	return 0;
//}
//#define cash 10000000000
//int main()
//{
//	char name[40];
//	scanf("%s", name);
//	printf("The %16s family just may be $%-5lld dollars richer! ",name, cash);
//	return 0;
//}

//�빹��һ��ʹ��BOOK,cost����percent��printf������䣬��ӡ....
//#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
//	printf("That is %.1f%% of list.\n", percent);
//	return 0;
//}
//1. ��дһ������ ��ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ����
//int main()
//{
//	char first_name [20];
//	char last_name [20];
//	printf("Please enter your first name, last name.\n");
//	scanf("%s", first_name);
//	scanf("%s", last_name);
//	printf("So you are %s,%s", first_name, last_name);
//	return 0;
//}
//2.��дһ��������ʾ�û��������֣���ִ�����²�����
// ��ӡ���֣�����˫���š�  �ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���š� �ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���š� �ڱ�������ȿ�3���ֶ��д�ӡ���֡�
//int main()
//{
//	/*char first_name [20];
//	char last_name [20];*/
//	char name[20];
//	int width;
//	printf("Please enter your name.\n");
//	/*scanf("%s", first_name);
//	scanf("%s", last_name);*/
//	scanf("%s", name);
//	width = strlen(name);
//	/*printf("So you are \"%s,%s\"", first_name, last_name);*/
//	printf("a: So you are \"%s\".\n", name);
//	printf("b: So you are \"%20s\".\n", name);
//	printf("c: So you are \"%-20s\".\n", name);
//	printf("d: So you are %*s.\n", (width+30),name); //*ָ����Ȳ���
//	return 0;
//}
//3.��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
//int main()
//{
//	float x,y;
//	scanf("%f", &x);
//	scanf("%f", &y);
//	printf("The input is %.1f or %.1e\n", x, x);
//	printf("The input is %+.3f or %.3e.", y, y);
//	return 0;
//}
//4.������������� �������� ������Ϊ��λ��ʾ����
//int main()
//{
//	float high;
//	char name[20];
//	scanf("%f,%s", &high, name);
//	printf("%s ������Ϊ��%.2fmeters.", name, high/100.0);
//	return 0;
//}
//5.��дһ��������ʾ�û�������Mb/sΪ��λ�����ٶȺ���MBΪ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��
//ʹ��float���ͣ�����/��Ϊ���š��ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȣ��ļ���С������ʱ�䣩����ʾС���������λ����
//int main()
//{
//	float megabits, megabytes, seconds;
//	printf("���������������ٶȺ��ļ���С\n");
//	scanf("%f %f", &megabits, &megabytes);
//	seconds = megabytes / megabits;
//	printf("At %.2f megabits per second, a file of %.2f megabytes \ndownloads in %.2f seconds.", megabits, megabytes, seconds);
//	return 0;
//}
//6.��дһ����������ʾ��������Ȼ����ʾ�û������ա���һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ����
//��ĸ��Ҫ�������յĽ�β���롣
//#include <string.h>
//int main()
//{
//	int widthm, widthx;
//	char ming[20];
//	char xing[20];
//	printf("�������������\n");
//	scanf("%s", &ming);
//	printf("�����������: \n");
//	scanf("%s", &xing);
//	widthm = strlen(ming);
//	widthx = strlen(xing);
//	printf("%s %s\n", ming, xing);
//	printf("%*d %*d\n", widthm, widthm, widthx, widthx);
//	printf("%s %s\n", ming, xing);
//	printf("%-*d %-*d\n", widthm, widthm, widthx, widthx);
//
//	return 0;
//}
//7.��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0,һ��float���͵ı�������Ϊ1.0/3.0�� �ֱ���ʾ���μ�������3�Σ� һ����ʾС�������6Ϊ���֣�
//һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ�� 1.0/3.0��ֵ����Щֵһ����
//#include<float.h>
//int main()
//{
//	double x = 1.0 / 3.0;
//	float y = 1.0 / 3.0;
//	printf("%.6lf %.6f\n", x, y);
//	printf("%.12lf %.12f\n", x, y);
//	printf("%.16lf %.16f\n", x, y);
//	printf("%d %d\n", FLT_DIG, DBL_DIG); //DIG��Ч��λ���ֵ ӦΪ����
//	return 0;
//}
//8.��дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�������һλ���֡�
//��������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ������
//����ʾ�������ʾС�������1λ���֡�ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�
//ȼ�ϲ���������ֵԽ��Խ�ã���ʹ��#define�������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����
//#define jialun 3.785
//#define yingli 1.609
//int main()
//{
//	float miles, gas,huansuan;
//	float jia,ying,huansuan2;
//	printf("���������������г��������ĵ�������\n");
//	scanf("%f %f", &miles, &gas);
//	huansuan = miles / gas;
//	printf("%.1f����\\��\n", huansuan);
//	jia = gas / jialun;
//	ying = miles / yingli;
//	printf("jia = %.1f  ying = %.1f\n", jia, ying);
//	huansuan2 = ying / jia;
//	/*printf("%.1fӢ��\\����\n", miles / yingli / gas *jialun);*/
//	printf("%.1fӢ��\\����\n", huansuan2);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	size_t nihao;
//	nihao = sizeof(int);
//	printf("%d %zd %zd", n, sizeof n, nihao);
//
//	return 0;
//}
//#define Ten 10
//int main()
//{
//	int n = 0;
//	char a = 'a';
//	while (n++ < Ten-3)
//	{
//		printf("%5c",a );
//			a++;
//	}
//	printf("\n");
//	return 0;
//}
//1.��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣ʹ��define��const����һ����ʾ60�ķ��ų���
//��const������ͨ��whileѭ�����û��ظ�����ֵ��֪���û�����С�ڻ����0��ֵ��ֹͣѭ����
//#define fenzhong 60
//int main()
//{
//	int fenzhongshu,hour,minute;
//	printf("������������Ҫת���ķ�����\n");
//	scanf("%d", &fenzhongshu);
//	hour = fenzhongshu / fenzhong;
//	minute = fenzhongshu % fenzhong;
//	printf("ת����Ľ����%3dСʱ%3d����", hour, minute);
//	return 0;
//}
//2.��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ�����������10���������������磬�û�����5�����ӡ5��15����������������5��15����Ҫ���ӡ
//�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
//int main()
//{
//	int input,xunhuan;
//	xunhuan = 0;
//	printf("������һ��ֵ\n");
//	scanf("%d", &input);
//	printf("�������������ֵ�ᱻ��ӡ��11����������\n");
//	while (xunhuan++ < 11)
//	{   
//		printf("%d \t", input);
//			input++;
//	}
//	printf("�������\n");
//	return 0;
//3.��дһ��������ʾ�û�����������Ȼ����ת�������������������磬�û�����18����ת��Ϊ2��4�죬������ĸ�ʽ��ʾ�����
//int main()
//{
//	int day, week, days;
//	printf("����������Ҫ����ת��������\n");
//	scanf("%d", &day);
//	week = day / 7;
//	days = day % 7;
//	printf("%d days are %d weeks, %d days\n", day, week, days);
//	return 0;
//}
//4.��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ�ߣ�Ӣ��Ϊ��λ��ʾ��ֵ��
//������С�����֡�����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
//#define yingchi 30.48
//#define yingcun 2.54
//int main()
//{
//	float high,cunh,chih,zhuan;
//	high = 1;
//	printf("��������������������\n");
//	while (high > 0)
//	{    
//		scanf("%f", &high);
//		if (high == 0)
//		{
//			break;
//		}
//		chih =(int)( high / yingchi);
//		cunh = (high-(int)(high / yingchi)*yingchi)/ yingcun;
//		printf("%.1f cm = %.0f feet, %.1f inches\n", high, chih,cunh);
//	}
//	printf("bye\n");
//	return 0;
//}
//5.�����û������ֵ����20����׬�˶���Ǯ
//int main()
//{
//	int count,sum,cheng;
//	count = 0;
//	//printf("�����������ʮ����ÿ��׬�˶���\n");
//	//scanf("%d", &cheng);
//	sum = 0;
//	while (count++ < 20)
//	{       
//		//sum = sum + cheng;
//		sum =sum+ count * count;//����������ƽ����6.
//	}
//	printf("��ʮ��׬�� %d Ԫ\n", sum);
//	return 0;
//}
//7.��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ���Լ����һ���������㲢��ӡ����ֵ
//main��������Ҫ���û������ֵ���ݸ��ú�����
//void lifang(double input)
//{
//	input = input * input * input;
//	printf("����ֵ������Ϊ %.3lf\n", input);
//}
//int main()
//{
//	printf("������һ��double���͵�����֮���Ϊ���ӡ����������ֵ\n");
//	double input;
//	scanf("%lf", &input);
//	lifang(input);
//	return 0;
//}
//8.��дһ��������ʾ��ģ����Ľ�������û�����ĵ�һ��������Ϊ��ģ������ĵڶ��������
//��������������б��ֲ��䡣�û�������������ǵ�1��������󡣵��û�����һ������ֵ�ǣ��������

//int main()
//{
//	int x, y,z;
//	x = y = 1;
//	while (x > 0 && y > 0)
//	{
//		printf("��ģ���� ��������ģ�����ģ��\n");
//		scanf("%d", &x);
//		if (x < 0)
//			break;
//		printf("�����뱻ģ��\n");
//		scanf("%d", &y);
//		if (y < 0)
//			break;
//		z = y % x;
//		printf("ģ�����Ľ��Ϊ%d\n", z);
//
//	}
//	printf("Done\n");
//	return 0;
//}
//9. ��дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���Temperatures()��
//�ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�Ҫ��ʹ�ò�ͬ���±�����ʾ��3���¶�ֵ
//�����ǻ����¶�ת�����¶ȵĹ�ʽ��
//�����¶�=5.0/9.0*�������¶�-32��
//�����¶ȳ����ڿ�ѧ�о���0��ʾ����0�ȡ������������¶�ת�����¶ȵĹ�ʽ��
//�����¶�=�����¶�+273.16
//Temperatures()��������const�����¶�ת����ʹ�õı�������main����������ʹ��һ��ѭ�����û��ظ������¶�
//���û�����q�������������ǣ�ѭ��������scanf���������������ݵ����������������ȡ�����򷵻�1�������ȡq��
//������1.����ʹ��==�������scanf�����ķ���ֵ��1���Ƚϣ�������ֻ�Ƿ���ȡ�

//void Temperature(double hua,double kai,double she)
//{
//	const kaizhuan = 273.16;
//	
//		she = 5.0/9.0*(hua - 32.0);
//		kai = she + kaizhuan;
//		printf("����Ļ��϶�Ϊ%.2lf��\n", hua);
//		printf("ת��Ϊ���϶�Ϊ%.2lf���϶�\n", she);
//		printf("ת��Ϊ���϶�Ϊ%.2lf���϶�\n", kai);
//}
//int main()
//{
//	double hua, kai, she;
//	hua=kai = she = 0;
//	printf("������һ�������¶�\n");
//	
//	while (scanf("%lf",&hua)==1)//scanf()�������ض�ȡ���ݵ����� ��ȡ�����򷵻�1
//	{    
//		Temperature(hua, kai, she);
//		printf("�����ַ����� �������ּ���\n");
//	}
//	printf("done\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age, year;
//	age = 19;
//	year = age * 365;
//	printf("年龄=%d 天数=%d", age, year);
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
////通过试验观察系统如何处理整数上溢，浮点数上溢，浮点数下溢的情况
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
// 编写一个程序,要求提示输入一个ASCII码值，然后打印输入的字符
//#include<stdio.h>
//int main()
//{
//	char zifu = 66;
//	printf("%c", zifu);
//	return 0;
//}
//编写一个程序，发出一声警报，然后打印下面的文本
#include <stdio.h>
//int main()
//{
//	char jinggao = '\a';
//	printf("%c", jinggao);
//	printf("Startled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"");
//	return 0;
//}
//编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式，然后如果系统
//支持，再打印成p计数法（即十六进制计数法）。
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
//一年大约有3.156x10的七次方秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
//int main()
//{
//	float age;
//	printf("请输入你的年龄：");
//	scanf("%f", &age);
//	printf("你的岁数换成秒数应为：%.1lf 秒", age*3.156e7);
//	return 0;
//}
//1个水分子的质量约为3.0x10-e23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
//#define fenzi 3.0e-23
//int main()
//{
//	float wkua;
//	printf("请输入水的夸脱数：");
//	scanf("%f", &wkua);
//	printf("您输入的水夸脱数对应的水分子数量为：%f", wkua * 950/fenzi);
//	return 0;
//}
//1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
//#define huansuan 2.54
//int main()
//{
//	float yincun;
//	printf("请按照英寸输入你的身高：");
//	scanf("%f", &yincun);
//	printf("你的身高换算成厘米应为：%f", yincun * huansuan);
//	return 0;
//}
//在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
//编写一个程序 提示用户输入杯数，并以品脱，盎司，汤勺，茶勺为单位显示等价容量，思考
//对于改程序，为和使用浮点类型比整数类型更合适
//#define pintuo 2
//#define angsi 8
//#define datangsao 2
//#define chasao 3
//int main()
//{
//	float cups;
//	printf("请输入你的杯数：");
//	scanf("%f", &cups);
//	printf("你的杯数等于：%.1f 品脱\n", cups / pintuo);
//	printf("你的杯数等于：%.1f 盎司\n", cups * angsi);
//	printf("你的杯数等于：%.1f 大汤勺\n", cups * angsi *datangsao);
//	printf("你的杯数等于：%.1f 茶勺\n", cups * angsi * datangsao * chasao);
//	//使用浮点类型比整数类型更合适 因为常数除以二时可能为小数 此时浮点类型就可以精确地输出数值
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

//请构造一个使用BOOK,cost，和percent的printf（）语句，打印....
//#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
//	printf("That is %.1f%% of list.\n", percent);
//	return 0;
//}
//1. 编写一个程序， 提示用户输入名和姓，然后以“名，姓”的格式打印出来
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
//2.编写一个程序，提示用户输入名字，并执行以下操作：
// 打印名字，包括双引号。  在宽度为20的字段右端打印名字，包括双引号。 在宽度为20的字段左端打印名字，包括双引号。 在比姓名宽度宽3的字段中打印名字。
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
//	printf("d: So you are %*s.\n", (width+30),name); //*指定宽度参数
//	return 0;
//}
//3.编写一个程序，读取一个浮点数，首先以小数点计数法打印，然后以指数计数法打印。
//int main()
//{
//	float x,y;
//	scanf("%f", &x);
//	scanf("%f", &y);
//	printf("The input is %.1f or %.1e\n", x, x);
//	printf("The input is %+.3f or %.3e.", y, y);
//	return 0;
//}
//4.以厘米输入身高 输入姓名 并以米为单位显示出来
//int main()
//{
//	float high;
//	char name[20];
//	scanf("%f,%s", &high, name);
//	printf("%s 你的身高为：%.2fmeters.", name, high/100.0);
//	return 0;
//}
//5.编写一个程序，提示用户输入以Mb/s为单位下载速度和以MB为单位的文件大小。程序中应计算文件的下载时间。注意，这里1字节等于8位。
//使用float类型，并用/作为除号。该程序要以下面的格式打印3个变量的值（下载速度，文件大小和下载时间），显示小数点后面两位数字
//int main()
//{
//	float megabits, megabytes, seconds;
//	printf("请依次输入下载速度和文件大小\n");
//	scanf("%f %f", &megabits, &megabytes);
//	seconds = megabytes / megabits;
//	printf("At %.2f megabits per second, a file of %.2f megabytes \ndownloads in %.2f seconds.", megabits, megabytes, seconds);
//	return 0;
//}
//6.编写一个程序，先提示输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
//字母数要与名和姓的结尾对齐。
//#include <string.h>
//int main()
//{
//	int widthm, widthx;
//	char ming[20];
//	char xing[20];
//	printf("请输入你的名：\n");
//	scanf("%s", &ming);
//	printf("请输入你的姓: \n");
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
//7.编写一个程序，将一个double类型的变量设置为1.0/3.0,一个float类型的变量设置为1.0/3.0。 分别显示两次计算结果各3次： 一次显示小数点后面6为数字；
//一次显示小数点后面12位数字；一次显示小数点后面16位数字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。 1.0/3.0的值与这些值一致吗？
//#include<float.h>
//int main()
//{
//	double x = 1.0 / 3.0;
//	float y = 1.0 / 3.0;
//	printf("%.6lf %.6f\n", x, y);
//	printf("%.12lf %.12f\n", x, y);
//	printf("%.16lf %.16f\n", x, y);
//	printf("%d %d\n", FLT_DIG, DBL_DIG); //DIG有效数位最大值 应为整型
//	return 0;
//}
//8.编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。
//接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），
//并显示结果，显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的
//燃料测量方案（值越低越好）。使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
//#define jialun 3.785
//#define yingli 1.609
//int main()
//{
//	float miles, gas,huansuan;
//	float jia,ying,huansuan2;
//	printf("请输入您汽车的行程数和消耗的汽油量\n");
//	scanf("%f %f", &miles, &gas);
//	huansuan = miles / gas;
//	printf("%.1f公里\\升\n", huansuan);
//	jia = gas / jialun;
//	ying = miles / yingli;
//	printf("jia = %.1f  ying = %.1f\n", jia, ying);
//	huansuan2 = ying / jia;
//	/*printf("%.1f英里\\加仑\n", miles / yingli / gas *jialun);*/
//	printf("%.1f英里\\加仑\n", huansuan2);
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
//1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。使用define或const创建一个表示60的符号常量
//或const变量。通过while循环让用户重复输入值，知道用户输入小于或等于0的值才停止循环。
//#define fenzhong 60
//int main()
//{
//	int fenzhongshu,hour,minute;
//	printf("请输入你所需要转换的分钟数\n");
//	scanf("%d", &fenzhongshu);
//	hour = fenzhongshu / fenzhong;
//	minute = fenzhongshu % fenzhong;
//	printf("转换后的结果是%3d小时%3d分钟", hour, minute);
//	return 0;
//}
//2.编写一个程序，提示用户输入一个整数，然后打印从该数到比数大10的所有整数（例如，用户输入5，则打印5到15的所有整数，包括5和15）。要求打印
//的各值之间用一个空格，制表符或换行符分开。
//int main()
//{
//	int input,xunhuan;
//	xunhuan = 0;
//	printf("请输入一个值\n");
//	scanf("%d", &input);
//	printf("接下来你输入的值会被打印成11个相连的数\n");
//	while (xunhuan++ < 11)
//	{   
//		printf("%d \t", input);
//			input++;
//	}
//	printf("输入完毕\n");
//	return 0;
//3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换为2周4天，以下面的格式显示结果；
//int main()
//{
//	int day, week, days;
//	printf("请输入你想要进行转换的天数\n");
//	scanf("%d", &day);
//	week = day / 7;
//	days = day % 7;
//	printf("%d days are %d weeks, %d days\n", day, week, days);
//	return 0;
//}
//4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英尺，英寸为单位显示该值，
//允许有小数部分。程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
//#define yingchi 30.48
//#define yingcun 2.54
//int main()
//{
//	float high,cunh,chih,zhuan;
//	high = 1;
//	printf("请以厘米数输入你的身高\n");
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
//5.按照用户输入的值计算20天里赚了多少钱
//int main()
//{
//	int count,sum,cheng;
//	count = 0;
//	//printf("请输入你这二十天内每天赚了多少\n");
//	//scanf("%d", &cheng);
//	sum = 0;
//	while (count++ < 20)
//	{       
//		//sum = sum + cheng;
//		sum =sum+ count * count;//计算整数的平方和6.
//	}
//	printf("二十天赚了 %d 元\n", sum);
//	return 0;
//}
//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。自己设计一个函数计算并打印立方值
//main（）函数要把用户输入的值传递给该函数。
//void lifang(double input)
//{
//	input = input * input * input;
//	printf("输入值的立方为 %.3lf\n", input);
//}
//int main()
//{
//	printf("请输入一个double类型的数，之后会为你打印该数的立方值\n");
//	double input;
//	scanf("%lf", &input);
//	lifang(input);
//	return 0;
//}
//8.编写一个程序，显示求模运算的结果。把用户输入的第一个整数作为求模运算符的第二运算对象
//该数在运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值是，程序结束

//int main()
//{
//	int x, y,z;
//	x = y = 1;
//	while (x > 0 && y > 0)
//	{
//		printf("求模运算 请输入求模运算的模数\n");
//		scanf("%d", &x);
//		if (x < 0)
//			break;
//		printf("请输入被模数\n");
//		scanf("%d", &y);
//		if (y < 0)
//			break;
//		z = y % x;
//		printf("模出来的结果为%d\n", z);
//
//	}
//	printf("Done\n");
//	return 0;
//}
//9. 编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperatures()。
//该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。要求使用不同的温标来表示这3个温度值
//下面是华氏温度转摄氏温度的公式：
//摄氏温度=5.0/9.0*（华氏温度-32）
//开氏温度常用于科学研究，0表示绝对0度。下面是摄氏温度转开氏温度的公式：
//开氏温度=摄氏温度+273.16
//Temperatures()函数中用const创建温度转换中使用的变量。在main（）函数中使用一个循环让用户重复输入温度
//当用户输入q或其他非数字是，循环结束。scanf（）函数返还数据的数量，所以如果读取数字则返回1，如果读取q则
//不返回1.可以使用==运算符将scanf（）的返回值和1作比较，测试两只是否相等。

//void Temperature(double hua,double kai,double she)
//{
//	const kaizhuan = 273.16;
//	
//		she = 5.0/9.0*(hua - 32.0);
//		kai = she + kaizhuan;
//		printf("输入的华氏度为%.2lf度\n", hua);
//		printf("转换为摄氏度为%.2lf摄氏度\n", she);
//		printf("转换为开氏度为%.2lf开氏度\n", kai);
//}
//int main()
//{
//	double hua, kai, she;
//	hua=kai = she = 0;
//	printf("请输入一个华氏温度\n");
//	
//	while (scanf("%lf",&hua)==1)//scanf()函数返回读取数据的数量 读取数字则返回1
//	{    
//		Temperature(hua, kai, she);
//		printf("输入字符结束 输入数字继续\n");
//	}
//	printf("done\n");
//	return 0;
//}

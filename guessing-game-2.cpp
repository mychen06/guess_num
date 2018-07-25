//程序要求：编写一个猜数游戏程序，用户给出范围，程序通过提问来猜测用户所想的数字是什么（例如：你的数字小于50吗？）
//我在这里使用了二分查找法，提问用户所想的值是否小于等于中间值，如果小于则将范围缩小到（min，middle），如果大于则将范围缩小至（middle，max），不断递归，直到max-min==1，返回max；提问问题的次数等于（log2（max-min））+1；
#include<iostream>
using namespace std;

int guess_num(int min, int max)
{   
	    if (max - min == 1)
			return max;
		else
		{
			int middle = (min + max) / 2;
			cout << "is you number greater than " << min << "and less than or equal to " << middle<< "?(Y or N)" << endl;
			char ans_2;
			cin >> ans_2;
			if (ans_2 == 'Y')
			{
				if (middle - min == 1)
					return middle;
				else
					guess_num(min, middle);
			}
			else
			{
				if (max - middle == 1)
					return max;
				else
					guess_num(middle, max);
			}
		}
}

int main()
{   
	int min;
	int max;
	int num;
	cout << "please input the range(min , max):" << endl;
	cin >> min;
	cin >> max;
	cout << "is you number in this range?(Y or N)" << endl;
	char ans_1;
	cin >> ans_1;
	if (ans_1 == 'Y')
	{
		num = guess_num(min, max);
		cout << "your number is " << num << endl;
	}
	else
	{
		cout << "error! you number is out of range!" << endl;
	}
	return 0;
}
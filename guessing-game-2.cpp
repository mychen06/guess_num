//����Ҫ�󣺱�дһ��������Ϸ�����û�������Χ������ͨ���������²��û������������ʲô�����磺�������С��50�𣿣�
//��������ʹ���˶��ֲ��ҷ��������û������ֵ�Ƿ�С�ڵ����м�ֵ�����С���򽫷�Χ��С����min��middle������������򽫷�Χ��С����middle��max�������ϵݹ飬ֱ��max-min==1������max����������Ĵ������ڣ�log2��max-min����+1��
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
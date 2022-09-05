// Baekjoon9375.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int length, questionlength, answer = 1;
	string wearscode, wearsname;
	cin >> questionlength;
	for (int i = 0; i < questionlength; i++)
	{
		cin >> length;
		map<string, int> clothes;
		for (int j = 0; j < length; j++)
		{
			cin >> wearsname >> wearscode;
			if (clothes.find(wearscode) != clothes.end())
			{
				clothes[wearscode]++;
			}
			else
			{
				clothes.insert({ wearscode,1 });
			}
		}
		int answer=1;
		for (auto clothing = clothes.begin(); clothing != clothes.end(); clothing++)
		{
			answer*= clothing->second+1;
		}
		cout << answer-1 << endl;
	}
}

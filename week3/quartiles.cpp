/*
	25% => 출력
	50%(중앙값) => 출력
	75% => 출력
*/
#include <iostream>
#include <vector>
#include <algorithm> //sort()

using namespace std;

typedef vector<int>::size_type vec_sz;

int main() {
	//프로그램 설명 하기
	cout << "Enter all words, then EOF: ";

	vector<int> val;
	int in;
	while (cin >> in) {
		val.push_back(in);
	}

	//오류 채킹
	vec_sz size = val.size();
	if (size == 0) {
		cout << "No values. Try again!" << endl;
		return 1; //오류
	}

	//정렬
	sort(val.begin(), val.end());

	vec_sz q1 = size / 4; // 제1사분의수25%
	vec_sz q2 = size / 2; // 제2사분의수50%
	vec_sz q3 = size / 4 * 3; // 제3사분의수75%

	int q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0 ? (val[q1] + val[q1 - 1]) / 2 : val[q1];
	q2_val = size % 2 == 0 ? (val[q2] + val[q2 - 1]) / 2 : val[q2];
	q3_val = 3 * size % 4 == 0 ? (val[q3] + val[q3 - 1]) / 2 : val[q3];

	cout <<
		"Q1: " << q1_val << endl <<
		"Q2(중앙값): " << q2_val << endl <<
		"Q3: " << q3_val << endl;

	return 0;
}
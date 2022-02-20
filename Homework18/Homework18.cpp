#include <iostream>

using namespace std;

inline int inlineFunc(int N = 0, int M = 0);

int findMaxNumber(int N = 0, int M = 0, int K = 0);
float findMaxNumber(float N = 0, float M = 0, float K = 0);
double findMaxNumber(double N = 0, double M = 0, double K = 0);

template <typename T1> T1 maxEllOfArray(T1 array[], int lenght);

int main() {

	setlocale(LC_ALL, "Russian");

	// ������ 1

	int n = 5, m = 2;
	cout << "������ 1.\n������� ������������� ������������ �������: " << inlineFunc(n, m) << "\n\n";

	// ������ 2

	cout << "������ 2.\n";
	cout << "������������ ����� �� ���������� ���� int: " << findMaxNumber(4, 5, 6) << endl;
	cout << "������������ ����� �� ��������� ���� float: " << findMaxNumber(1.0f, 2.0f, 4.0f) << endl;
	cout << "������������ ����� �� ���������� ���� double: " << findMaxNumber(1.0, 2.0, 3.0) << endl;
	cout << "\n";

	// ������ 3

	int lenght = 5;
	int arr1[5] = { 1, 2, 3, 4, 5 };
	cout << "������ 3.\n������������ �������� ������� ���� int: " << maxEllOfArray(arr1, 5) << endl;
	float arr2[5] = { 1.0f, 2.0f, 3.0f, 5.0f, 6.0f };
	cout << "������������ �������� ������� ���� float: " << maxEllOfArray(arr2, 5) << endl;
	double arr3[5] = { 2.0, 3.0, 4.0, 7.0, 8.0 };
	cout << "������������ �������� ������� ���� double: " << maxEllOfArray(arr3, 5) << endl;


	return 0;
}

// ������ 3

template <typename T1> T1 maxEllOfArray(T1 array[], int lenght) {
	int maxEl = 0;
	for (int i = 0; i < lenght; i++) {
		
		if (array[i] > maxEl)
			maxEl = array[i];
	}
	return maxEl;
}

// ������ 2
int findMaxNumber(int N, int M, int K) {
	if (N > M && N > K)
		return N;
	if (M > N && M > K)
		return M;
	if (K > N && K > M)
		return K;
}

float findMaxNumber(float N, float M, float K) {
	if (N > M && N > K)
		return N;
	if (M > N && M > K)
		return M;
	if (K > N && K > M)
		return K;
}

double findMaxNumber(double N, double M, double K) {
	if (N > M && N > K)
		return N;
	if (M > N && M > K)
		return M;
	if (K > N && K > M)
		return K;
}

// ������ 1
inline int inlineFunc(int N, int M) {
	return (N + M) / 2;
}
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*const int size = 12;
	int mas[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand()%51-20;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = size - 1; i >= 0; i=i-2)
	{
		cout << mas[i] << " ";
	}*/
	
	/*const int size = 10;
	int mas[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand()%41-20;
		cout << mas[i] << " ";
	}
	cout << endl;
	int k=0;
	for (int i = 0; i < size; i++)
	{
		if(mas[i]<0){
			k++;
		}
	}
	cout << k << endl;
	*/
	
	//Array4.Дано целое число N(> 1), а также первый член A и знаменатель D геометрической прогрессии.Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии : A, A·D, A·D2, A·D3, ....
	/*const int N = 12;
	int mas[N];
	int A, D;
	cin >> A >> D;
	for (int i = 0; i < N; i++)
	{
		mas[i] = A * pow(D,i);
	}
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << endl;
	}*/
	//Array6.Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих.
	/*const int N = 10;
	int mas[N];
	int A, B;
	cin >> A >> B;
	for (int i = 2; i < N; i++)
	{
		mas[0] = A;
		mas[1] = B;
		mas[i] = 0;
		for (int j = 1; j <= i; j++)
		{
			mas[i] += mas[i - j];
		}
		
	}
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	*/
	//Array7◦.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int N = 12;
	int mas[N];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++)
	{
		mas[i] =rand();
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 11; i >= 0; i--)
	{
		cout << mas[i] << " ";
	}*/
	//Array8.Дан целочисленный массив размера N.Вывести все содержащиеся в данном массиве нечетные числа в порядке возрастания их индексов, а также их количество K.
	/*const int N = 10;
	int mas[N];
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> mas[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 2 != 0) {
			cout << mas[i] << endl;
			k++;
		}
		
	}
	cout << k;*/
	//Array9.Дан целочисленный массив размера N.Вывести все содержащиеся в данном массиве четные числа в порядке убывания их индексов, а также их количество K.
	/*const int N = 10;
	int mas[N];
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> mas[i];
	}
	cout << "Все содержащиеся в данном массиве четные числа в порядке убывания их индексов: " << endl;
	for (int i = N-1; i >= 0; i++)
	{
		if (mas[i] % 2 == 0) {
			cout << mas[i] << endl;
			k++;
		}

	}
	cout << k;*/
	//Array10.Дан целочисленный массив размера N.Вывести вначале все содержащиеся в данном массиве четные числа в порядке возрастания их индексов, а затем — все нечетные числа в порядке убывания их индексов.
	/*const int N = 10;
	int mas[N];
	srand(time(nullptr));
	cout << "Все числа: " << endl;
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand()%51-25;
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Четные числа в порядке возрастания их индексов: " << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 2 == 0) {
			cout << mas[i] << " ";
		}
		
	}
	cout << endl;
	cout << "Все нечетные числа в порядке убывания их индексов: " << endl;
 	for (int i = N - 1; i >= 0; i--)
	{
		if (mas[i] % 2 != 0) {
			cout << mas[i] << " ";
		}

	}*/
	//Сам2
	/*const int N = 10;
	int mas[N];
	srand(time(nullptr));
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 31 - 10;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 3 == 0) {
			cout << mas[i] << " ";
		}
	}*/
	//Сам3
	/*const int N = 10;
	int mas[N];
	int pr = 1;
	srand(time(nullptr));
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 51 - 30;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 3 != 0) {
			pr = pr * mas[i];
		}
	}
	cout << pr << endl;
	*/
	//Сам4
	/*const int N = 10;
	int mas[N];
	double sr;
	int k=0;
	int sum=0;
	srand(time(nullptr));
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 61 - 10;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] > 0) {
			sum+=mas[i];
			k++;
		}
	}
	sr=(double)sum/(double)k;
	cout << sr << endl;
	*/
	//Сам5
	/*const int N = 10;
	int mas[N];
	double sr;
	double geo;
	int k = 0;
	int sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 6;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 3 != 0 && mas[i] % 5 != 0) {
			sum += mas[i];
			k++;	
		}
	}
	sr = (double)sum / (double)k;
	geo = sqrt(sr);
	cout << geo << endl;*/
}
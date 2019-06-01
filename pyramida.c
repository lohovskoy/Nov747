int otsev(int* arr, int rt, int btm)
{
	int max;
	int tmp = 0;

	while (rt * 2 <= btm)
	{
		if ((rt * 2 == btm) || (arr[rt * 2] > arr[rt * 2 + 1]))
		{
			max = rt * 2;
		}
		else
		{
			max = rt * 2 + 1;
		}
		if (arr[rt] < arr[max])
		{
			int t = arr[rt];
			arr[rt] = arr[max];
			arr[max] = t;
			rt = max;
			tmp++;
		}
		else
		{
			tmp++;
			break;
		}
	}
	return tmp;
}

int pyramida(int* arr, int arr_len) //ïèðàìèäàëüíàÿ
{
	int tmp = 0;
	for (int i = (arr_len / 2); i >= 0; i--)
		tmp += otsev(arr, i, arr_len - 1);
	for (int i = arr_len - 1; i >= 1; i--)
	{
		int t = arr[0];
		arr[0] = arr[i];
		arr[i] = t;
		tmp += otsev(arr, 0, i - 1);
	}
	return tmp;
}


int main()
{
	srand(time(0));
	clock_t start, stop;
	unsigned long t;
	double rez, sr_rez = 0;
	int n[15] = { 1,2,3,4,5,10,15,20,25,30,50,75,100,250,500 };
	for (int f = 0; f < 15; f++)
	{
		int* a;
		a = (int*)malloc(n[f] * sizeof(int));
		start = clock();
		for (int j = 0; j < 1000; j++)
		{
			for (int i = 0; i < n[f]; i++)
			{
				a[i] = rand() % 10000 - 8000;
			}
			rez += pyramida(a, n[f]);
		}
		stop = clock();
		printf("%d\n %f \n", n[f], rez / 1000);
		rez = 0;
		double clock_rez = (stop - start) / (double)CLOCKS_PER_SEC;
		printf("%f \n", clock_rez * 100000);
		start, stop = 0;
		clock_rez = 0;
	}
}

void hSort(int *A, int N) //N - длина массива A
{
    int tmp;
    if (N <= 1)
        return;
    int l = 0, r = N - 1; //l - левая граница, r - правая
    int pivot = A[rand()%N];
    while (l != r)
    {
        if (A[l] >= pivot)
        {
            if (A[r] < pivot)
            {
                tmp = A[l];
                A[l] = A[r];
                A[r] = tmp;
                l++;
            }
            if (l != r) r--;
        }
        else l++;
    }
    if (A[0] == A[N-1]) return; 
    hSort(A, l);
    hSort(A + l, N-l);
}
int main()
{
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
    hSort(arr,n);

        for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        printf("\n");
        return 0;
}


int quick_sort(int *a,int n){
	int i,j,k,tmp;

	if(n<2)return;

	k = n/2;

	for(i=0,j=n-1;;i++,j--){
		while(a[i]<a[k])i++;
		while(a[k]<a[j])j--;
		if(i>=j)break;
		tmp = a[i]; a[i] = a[j]; a[j] = tmp;
	}

	quick_sort(a,i);
	quick_sort(a+i,n-i);
}

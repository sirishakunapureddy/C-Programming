 #include <stdio.h>
int binary_search_rec(int *A, int n, int key, int low, int high) {
	if (low > high) {
		return -1;
	}
	else {
		int mid = (low + high) / 2;
		if (A[mid] == key)
			return mid;
		else if (A[mid] > key) 
			return binary_search_rec(A, n, key, low, mid - 1);
		else 
			return binary_search_rec(A, n, key, mid + 1, high);
	}
}

int main() {
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int key;
	scanf("%d", &key);
	int result = binary_search_rec(arr, n,key,0,n-1);
	if (result == -1) printf("Key not found");
	else printf("Key found at %d index", result);
}

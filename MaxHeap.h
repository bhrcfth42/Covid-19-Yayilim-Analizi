#ifndef MaxHeap_H
#define MaxHeap_H
void max_heap(double *a, int m, int n) {
   int j;
   double t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(double *a,int n) {
   for(int k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}

void printArray(double* arr, int n,double* riskPuani)
{
	cout<<"Max Heap"<<endl;
    for (int i = 1; i <= n; ++i){
    	if(arr[i]!=0){
    		int konum;
    		for(int j=0;j<50;j++){
    			if(arr[i]==riskPuani[j]){
    				konum=j;
    				break;
				}
			}
			cout << kisi[konum].id <<"\t"<<kisi[konum].ad<<"\t"<<arr[i]<<endl;
		}
	}
    cout << "\n";
}
#endif

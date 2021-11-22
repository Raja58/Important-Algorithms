// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        22 Nov 2021
//  @Detail  :        Quick Select
//  ============================
//  -->

int quickSelect(int start, int end, int pos, vector<int> &a)
{
	while(start <= end) //important
	{
		int left = start + 1, right = end;
		int pivot = start + rand() % (end - start + 1);
		swap(a[start], a[pivot]);
		pivot = start;
		while(left <= right)
		{
			if(a[left] > a[pivot] && a[right] < a[pivot])
				swap(a[left], a[right]);
			if(a[left] <= a[pivot])
				left++;
			if(a[right] >= a[pivot])
				right--;
		}
		swap(a[pivot], a[right]);
		if(right == pos)
			return a[right];
		if(right < pos)
			start = right + 1;
		else
			end = right - 1;
	}
	return - 1;
}

int quickselect(vector<int> array, int k){
  return quickSelect(0, array.size() - 1, k - 1, array);
}

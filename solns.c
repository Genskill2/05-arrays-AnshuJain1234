//max
int max(int arr[],int n){
  int j;
  j=arr[0];
  for(int i=0; i<n; i++){
    if(j<arr[i]){
      j=arr[i];
    }
  }    
  return j;
 } 
 
//min
int min(int arr[],int n){
  int k;
  k=arr[0];
  for(int i=0; i<n; i++){
    if(k>arr[i]){
      k=arr[i];
    }
  }   
  return k;
} 
//Average
float average(int arr[], int n){
  int sum=0;
  for(int i=0; i<n; i++){
       sum+=arr[i];
  }
  return (float)sum/((float)n);
} 
//mode
int mode(int a[], int n){ 
   int maxValue = 0;
   int maxCount = 0;

   for (int i = 0; i < n; i++) {
      int count = 0;
      
      for (int j = 0; j < n; j++) {
         if (a[j] == a[i])
         count++;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}  
//factors

      int factors(int x, int a[]){
  int i,j,count,num=0;
  for(i=2;i<=x;i++){
  count=0;
    if((x%i==0)){
    for(j=1;j<=i;j++){
       if((i%j==0)){
         count++;
          }
       }
    if(count<=2){
        while(x%i==0){
           a[num]=i;
           x=x/i;
           num++;
          }
         }
         }
            
            }
     return num;
           }
      














         

long long double_the_difference(vector<float> lst){
  long long sum = 0;
  for (float num : lst) {
    if (num > 0 && floor(num) == num && fmod(num, 2) != 0) {
      sum += num * num;
    }
  }
  return sum;
}
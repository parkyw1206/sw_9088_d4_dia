#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case, answer;
	int T, N, K, temp;
    int l,r;
    vector<int> dia;
    
    cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> K;
        answer = 0;
        l = 0;
        r = l+1;
		for(int i = 0 ; i < N ; i++){
        	cin >> temp ;
            dia.push_back(temp);
        }
        sort(dia.begin() , dia.end());
        while(r < N){
            //cout << "(" << l << "," << r << ")-->" << dia[r]- dia[l] << endl;
        	if(dia[r] - dia[l] <= K){
            	if(r-l+1 >= answer) {
                    answer = r-l+1;
                    //cout << r << "-" << l << "+1=" << answer << endl;
                }
                r++;
            }
            else{
            	l++;
            }
        }
        dia.clear();
        cout << "#" << test_case << " " << answer<< endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
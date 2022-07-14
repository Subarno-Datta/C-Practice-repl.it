#define print(x) cout << x << endl;

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int iq;
	cout << "Enter your IQ (from range 0 to 250): ";
	cin>>iq;

	int jiq = iq-(47 * (float)rand()/RAND_MAX);

	if(iq<39) {
		print("Please don't be so humble.");
	}
	
	else if(iq<90) {
		print("I know that you are telling the truth. I believe you. GOOD JOB");
	}

	else
	{
		print("Stop lying. There is no way that your IQ can be so high. Your true iq is nearly: " << jiq);
	}

	return 0;
}
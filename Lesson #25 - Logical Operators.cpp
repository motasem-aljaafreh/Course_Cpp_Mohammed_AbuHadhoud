#include <iostream>
using namespace std;

int main()
{
	//I defined 30 variables in one data type boolean.
	bool r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20,
		r21, r22, r23, r24, r25, r26, r27, r28, r29, r30;

	//First Table
	r1 = 12 >= 12;
	r2 = 12 > 7;
	r3 = 8 < 6;
	r4 = 8 == 8;
	r5 = 12 <= 12;
	r6 = 7 == 8;

	//Second Table
	r7 = !(12 >= 12);
	r8 = !(12 < 7);
	r9 = !(8 < 6);
	r10 = !(8 == 8);
	r11 = !(12 <= 12);
	r12 = !(7 == 5);

	//Third Table
	r13 = (1 && 1);
	r14 = (true && false);
	r15 = (0 || 1);
	r16 = (0 || 0);
	r17 = !(0);
	r18 = !(1 || 0);

	//Forth Table
	r19 = (7 == 7) && (7 > 5);
	r20 = (7 == 7) && (7 < 5);
	r21 = (7 == 7) || (7 < 5);
	r22 = (7 < 7) || (7 > 5);
	r23 = !(7 == 7) && (7 > 5);
	r24 = (7 == 7) && !(7 < 5);
	
	//Solved the second questions at the end of the video
	r25 = (5 > 6 && 7 == 7) || (1 || 0);
	r26 = !(5 > 6 && 7 == 7) || (1 || 0);
	r27 = !(5 > 6 && 7 == 7) || !(1 || 0);
	r28 = !(5 > 6 || 7 == 7) && !(1 || 0);
	r29 = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && (true);
	r30 = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || (true);



	// cout for Results from r1 to r30
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	cout << r5 << endl;
	cout << r6 << "\n\n\n";
	cout << r7 << endl;
	cout << r8 << endl;
	cout << r9 << endl;
	cout << r10 << endl;
	cout << r11 << endl;
	cout << r12 << "\n\n\n";
	cout << r13 << endl;
	cout << r14 << endl;
	cout << r15 << endl;
	cout << r16 << endl;
	cout << r17 << endl;
	cout << r18 << "\n\n\n";
	cout << r19 << endl;
	cout << r20 << endl;
	cout << r21 << endl;
	cout << r22 << endl;
	cout << r23 << endl;
	cout << r24 << "\n\n\n";
	cout << r25 << endl;
	cout << r26 << endl;
	cout << r27 << endl;
	cout << r28 << endl;
	cout << r29 << endl;
	cout << r30 << endl;
	
	return 0;
}

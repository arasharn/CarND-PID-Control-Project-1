#include "PID.h"
#include <math.h>


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double kp_, double ki_, double kd_) {

	Kp=kp_;
	Ki=ki_;
	Kd=kd_;
}

void PID::UpdateError(double cte) {

	d_error=cte-p_error;
	p_error=cte;
	i_error+=cte;
}

double PID::TotalError() {

	double tot_error;
	tot_error=-p_error*Kp-d_error*Kd-i_error*Ki;
	return tot_error;//*2*M_PI/360;
}


//Write the function code that returns the product of hours and hourly_rate.
double gross_pay(double hours, double hourly_rate)
{
	double over_time_hours = 0;
	double over_time_rate = hourly_rate * 1.5;


	if (hours > 40)
	{
		over_time_hours = hours - 40;
		hours = 40;

	}
	return (hours * hourly_rate) + (over_time_hours * over_time_rate);

	/*if (hours > 40)
	{
		return (40 * hourly_rate) + ((hours - 40)*(hourly_rate * 1.5));
	}
	else
	{
		return hours * hourly_rate;
	}*/
}

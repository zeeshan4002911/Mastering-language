// INFO: Headers from the standard library should be inserted at the top via
#include <iostream>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return (double)(8 * hourly_rate);
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    return before_discount - ((discount / 100) * before_discount);
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    double price = 22 * daily_rate(hourly_rate); 
    return ceil(price - ((discount / 100) * price));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    return floor(budget / apply_discount(daily_rate(hourly_rate), discount));
}
#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t current_time = time(NULL);
	struct tm *time = localtime(&current_time);
	int year_of_linux_desktop = time->tm_yday < 182 ? time->tm_year + 1900 : time->tm_year + 1901;
	printf("%d\n", year_of_linux_desktop);
}

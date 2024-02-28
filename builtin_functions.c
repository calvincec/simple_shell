#include "shl.h"

/**
 * my_exit - exits the shell
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: exits with a given exit status
 *         (0) if info.argv[0] != "exit"
 */
int my_exit(my_info *info)
{
	int check_exit;

	if (info->argv[1])  /* If there is an exit arguement */
	{
		/*Convert the exit argument to an integer using _erratoi*/ 
		check_exit = _eatoi(info->argv[1]);
		/* Check if _erratoi encountered an error (returns -1)*/
		if (check_exit == -1)
		{
			/* Set the status in the info structure to 2*/
			info->sts = 2;
			/*Print an error message*/
			print_error(info, "invalid number: ");
			_errputs(info->argv[1]);
			_errputchar('\n');
			/*Return 1 to indicate an error*/
			return (1);
		}
		/*Set the error number in the info structure to the converted value*/
		info->err_num = _eatoi(info->argv[1]);
		/*Return -2 to indicate that the program should exit*/
		return (-2);
	}
	/*If no exit argument provided, set the error number to -1*/
	info->err_num = -1;
	/*Return -2 to indicate that the program should exit*/
	return (-2);
}
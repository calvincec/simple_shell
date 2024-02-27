#include "shl.h"

char *path_get(char *cmd){
    char *pth_cp,  *file_path;
    int cmd_size, folder_size;
    struct stat buf;
	char **all_paths;
	int i = 0;

    char *pth = getenv("PATH");
    if (stat(cmd, &buf) == 0)
        return (cmd);

    if (pth){
        pth_cp = str_dup(pth);
        cmd_size = str_len(cmd);
		all_paths = str_tok(pth_cp, ":");
		for (; all_paths[i] != NULL; i++)
		{
            folder_size = str_len(all_paths[i]);
            file_path = malloc(cmd_size + folder_size + 2);
            str_cpy(file_path, all_paths[i]);
            str_cat(str_cat(str_cat(file_path, "/"), cmd), "\0");
            if (stat(file_path, &buf) == 0){
                free(pth_cp);
                return (file_path);
            }
            else{
                free(file_path);
            }

        }
        free(pth_cp);
        return (NULL);
    }


    return (NULL);
}


/**
 * POSSIBLE ERRORS/SUGGESTIONS
 * remember to free up memory(the array returned by str_tok) after using it
 * always use free_ls to free up memory for the array returned by strtow
*/

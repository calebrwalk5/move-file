#include <stdio.h>

int main() {
	char source_file[512];
	char dest_dir[] = "YOUR LOCATION GOES HERE";

	printf("Enter file name: ");
	scanf("%511s", source_file);

	char dest_file[1024];
	snprintf(dest_file, sizeof(dest_file), "%s%s", dest_dir, source_file);
	
	if(rename(source_file, dest_file) == 0) {
		printf("Success\n");
	} else {
		perror("Error\n");
	}
	return 0;
}

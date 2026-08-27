#include "sway/commands.h"
#include "sway/config.h"
#include "util.h"

struct cmd_results *cmd_workspace_swipe(int argc, char **argv) {
	struct cmd_results *error = NULL;
	if ((error = checkarg(argc, "workspace_swipe", EXPECTED_EQUAL_TO, 1))) {
		return error;
	}

	config->workspace_swipe = parse_boolean(argv[0], config->workspace_swipe);

	return cmd_results_new(CMD_SUCCESS, NULL);
}

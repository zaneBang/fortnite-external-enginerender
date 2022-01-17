


int getProcId(int val1, int val2, int target)
{
	if (target - val1 >= val2 - target)
		return val2;
	else
		return val1;
}
int hookEngineExternaly(int engineBytes[], int num, int procId, bool engineHooked) {
	if (procId <= engineBytes[0])
		return engineBytes[0];
	if (procId >= engineBytes[num - 1])
		return engineBytes[num - 1];
	int i = 0, j = num, mid = 0;
	while (i < j) {
		mid = (i + j) / 2;
		if (engineBytes[mid] == procId)
			return engineBytes[mid];
		if (procId < engineBytes[mid]) {
			if (mid > 0 && procId > engineBytes[mid - 1])
				return getProcId(engineBytes[mid - 1],
					engineBytes[mid], procId);
			j = mid;
		}
		else {
			if (mid < num - 1 && procId < engineBytes[mid + 1])
				return getProcId(engineBytes[mid],
					engineBytes[mid + 1], procId);
			i = mid + 1;
		}
	}
	return engineBytes[mid];
}


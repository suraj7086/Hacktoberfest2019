def waiting_time(ct, at, bt):
	return [z-y-x for z, y, x in zip(ct, at, bt)]

def turn_around_time(at, ct):
	return [y-x for y, x in zip(ct, at)]

def display(at, bt, ct, wt, tat):
	print("Arrival-Time\tBurst-Time\tCompletion-Time\tWaiting-Time\tTurn-Around-Time")
	for i in range(len(at)):
		print('{:3d}\t\t\t\t{:3d}\t\t\t\t{:3d}\t\t\t\t\t{:3d}\t\t\t\t{:3d}'.format(at[i], bt[i], ct[i], wt[i], tat[i]))
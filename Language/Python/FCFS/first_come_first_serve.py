import functions as func

def completion_time(bt):
    ct = []
    for i in range(len(bt)):
        if i != 0:
            ct.append(bt[i] + ct[i - 1])
        else:
            ct.append(bt[0])
    return ct


if __name__ == "__main__":
    print('Non-Preemptive process')
    print('Criteria:- Arrival Time')
    arrival_time = [0, 1, 2, 3, 4]
    burst_time = [4, 3, 1, 2, 5]
    comp_time = completion_time(burst_time)
    tat = func.turn_around_time(arrival_time, comp_time)
    w_time = func.waiting_time(comp_time, arrival_time, burst_time)
    func.display(arrival_time, burst_time, comp_time, w_time, tat)

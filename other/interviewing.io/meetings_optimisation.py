# https://interviewing.io/recordings/Javascript-Google-5

from itertools import permutations

def optimise_meetings(meetings, hours_in_day=8):
    for permutation in permutations([x['hours'] for x in meetings]):
        total = 0
        new_permutation = []
        for hours in permutation:
            if total + hours > hours_in_day:
                break
            total += hours
            new_permutation.append(hours)
            if total == hours_in_day:
                return new_permutation

meetings = [
    {'hours': 4},
    {'hours': 2},
    {'hours': 1},
    {'hours': 2},
    {'hours': 5},
]

schedule = optimise_meetings(meetings)
print(schedule)
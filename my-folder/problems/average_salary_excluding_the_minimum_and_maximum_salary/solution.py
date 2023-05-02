class Solution:
    def average(self, salary: List[int]) -> float:
        total = sum(salary)
        salary.sort()
        total -= salary[0]
        total -= salary[len(salary)-1]
        return (total/(len(salary)-2))
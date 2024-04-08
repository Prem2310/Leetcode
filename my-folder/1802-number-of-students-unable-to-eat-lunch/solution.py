class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        iterStudents = 0
        iterSandwiches = 0
        found = False
        count = 0
        while True:
            if students[0] == sandwiches[iterSandwiches]:
                if len(students) == 0:
                    break
                students.pop(0)
                sandwiches.pop(0)
                found = False
                count = 0
                
            else:
                popped = students.pop(iterStudents)
                students.append(popped)
                count += 1
                if count == len(students):
                    return count
        
            if len(students) == 0:
                break
        return 0

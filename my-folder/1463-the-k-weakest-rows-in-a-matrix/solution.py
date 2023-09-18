class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
            rows = [(i, sum(row)) for i, row in enumerate(mat)]
            rows.sort(key=lambda x: (x[1], x[0]))
            result = [row[0] for row in rows[:k]]
            return result


class Solution(object):
    def getImportance(self, employees, id):
        emps = {employee.id: employee for employee in employees}
        def dfs(id):
            subordinates_importance = sum([dfs(sub_id) for sub_id in emps[id].subordinates])
            return subordinates_importance + emps[id].importance
        return dfs(id)
class Solution:
    def util(self,rooms,room_number,visited):
        if room_number in visited:
            return visited
        visited.append(room_number)
        for i in rooms[room_number]:
            self.util(rooms,i,visited)
        return visited
            
    
    def canVisitAllRooms(self, rooms):
        visited=[]
        result=self.util(rooms,0,visited)
        if len(result)==len(rooms):
            return True
        else:
            return False
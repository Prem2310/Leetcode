class MyHashMap:

    def __init__(self):
        self.hashMap={}
        

    def put(self, key: int, value: int) -> None:
        self.hashMap[key] = value

    def get(self, key: int) -> int:
        try:
            return self.hashMap[key]
        except:
            return -1


    def remove(self, key: int) -> None:
        try:
            self.hashMap.pop(key)
        except:
            return

# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
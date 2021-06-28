'''
Circular Queue
'''
class CircularQueue:
    def __init__(self, max = 3):
        self.max = max
        self.queue = [None] * self.max
        self.size = self.front = 0
        self.rear = None

    def is_empty(self):
        return self.size == 0

    def next_index(self, idx):
        return (idx + 1) % self.max

    def is_full(self):
        if self.rear == None:
            return False

        return self.next_index(self.rear) == self.front

    def enQueue(self, value):
        if self.is_full():
            raise Exception('Queue Full')

        # 시작 index를 0으로
        if self.rear == None:
            self.rear = 0
        else:
            self.rear = self.next_index(self.rear)

        self.queue[self.rear] = value
        self.size += 1

        return self.queue[self.rear]

    def deQueue(self):
        if self.is_empty():
            raise Exception('Queue Empty')

        self.queue[self.front] = None
        self.front = self.next_index(self.front)

        return self.queue[self.front]

    def displayQueue(self):
        print(self.queue)


cir_queue = CircularQueue()
cir_queue.enQueue('a')
cir_queue.enQueue('b')
cir_queue.enQueue('c')
cir_queue.displayQueue()
cir_queue.deQueue()
cir_queue.enQueue('a')
cir_queue.displayQueue()
print(cir_queue.is_full())
cir_queue.deQueue()
cir_queue.deQueue()
cir_queue.deQueue()
cir_queue.displayQueue()
print(cir_queue.is_empty())
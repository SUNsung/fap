
        
        
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    
def find_circular_references(garbage=None):
    def inner(level):
        for item in level:
            item_id = id(item)
            if item_id not in garbage_ids:
                continue
            if item_id in visited_ids:
                continue
            if item_id in stack_ids:
                candidate = stack[stack.index(item):]
                candidate.append(item)
                found.append(candidate)
                continue
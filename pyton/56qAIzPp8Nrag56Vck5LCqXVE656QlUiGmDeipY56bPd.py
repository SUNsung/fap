
        
        try:
    import json
except ImportError:
    import simplejson as json
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
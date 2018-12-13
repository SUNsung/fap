
        
                #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
        def undo(self):
        self.rename(self.dest, self.src)
    
    
# Abstract Building
class Building(object):
    def __init__(self):
        self.build_floor()
        self.build_size()
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
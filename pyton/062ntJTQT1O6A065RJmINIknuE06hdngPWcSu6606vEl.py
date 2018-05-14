
        
                if not current.propagate:
            break
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
    def line_length(filename):
    return sum(1 for line in open(filename))
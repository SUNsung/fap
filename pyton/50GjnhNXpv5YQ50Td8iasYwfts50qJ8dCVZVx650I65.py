
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
        def _park_starting_at_spot(self, spot, vehicle):
        '''Occupy starting at spot.spot_number to vehicle.spot_size.'''
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}
        self.linked_list = LinkedList()
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
    'certbot-apache': (
        'https://letsencrypt-apache.readthedocs.org/en/latest/', None),
    'certbot-nginx': (
        'https://letsencrypt-nginx.readthedocs.org/en/latest/', None),
}

    
    
# -- Options for HTML output ----------------------------------------------
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
    # 128  --> 0.77094
# 256  --> 0.85710
# 512  --> 0.92635
# 1024 --> 0.97130
# 2048 --> 0.99431
#
# Ideal Distribution Ratio = 0.92635 / (1-0.92635) = 12.58
# Random Distribution Ration = 512 / (2965+62+83+86-512) = 0.191
#
# Typical Distribution Ratio, 25% of IDR
    
    
class Latin1Prober(CharSetProber):
    def __init__(self):
        super(Latin1Prober, self).__init__()
        self._last_char_class = None
        self._freq_counter = None
        self.reset()
    
    
class MultiByteCharSetProber(CharSetProber):
    '''
    MultiByteCharSetProber
    '''
    
    EUCKR_CLS  = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    1,1,1,1,1,1,1,1,  # 40 - 47
    1,1,1,1,1,1,1,1,  # 48 - 4f
    1,1,1,1,1,1,1,1,  # 50 - 57
    1,1,1,1,1,1,1,1,  # 58 - 5f
    1,1,1,1,1,1,1,1,  # 60 - 67
    1,1,1,1,1,1,1,1,  # 68 - 6f
    1,1,1,1,1,1,1,1,  # 70 - 77
    1,1,1,1,1,1,1,1,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,3,3,3,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,3,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    2,2,2,2,2,2,2,2,  # e0 - e7
    2,2,2,2,2,2,2,2,  # e8 - ef
    2,2,2,2,2,2,2,2,  # f0 - f7
    2,2,2,2,2,2,2,0   # f8 - ff
)
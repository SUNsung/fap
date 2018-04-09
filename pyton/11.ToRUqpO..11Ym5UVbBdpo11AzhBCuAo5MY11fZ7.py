
        
                Punctuation:               'bold #000000',   # class: 'p'
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
        @property
    def unverifiable(self):
        return self.is_unverifiable()
    
    import chardet
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
    from .structures import LookupDict
    
                # Update history and keep track of redirects.
            # resp.history must ignore the original request in this loop
            hist.append(resp)
            resp.history = hist[1:]
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
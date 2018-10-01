
        
        '''
# noinspection PyCompatibility
from argparse import (
    RawDescriptionHelpFormatter, FileType,
    OPTIONAL, ZERO_OR_MORE, SUPPRESS
)
from textwrap import dedent, wrap
    
    
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME
            assert username == USERNAME
            assert password is None
            return basic_auth()
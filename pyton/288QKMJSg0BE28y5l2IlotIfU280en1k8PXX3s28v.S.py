
        
        
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
        :param url: URL for the new :class:`Request` object.
    :param params: (optional) Dictionary or bytes to be sent in the query string for the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
    Requests is an HTTP library, written in Python, for human beings. Basic GET
usage:
    
        def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
          # Also check if we are starting or ending an inline assembly block.
      if inner_block.inline_asm in (_NO_ASM, _END_ASM):
        if (depth_change != 0 and
            inner_block.open_parentheses == 1 and
            _MATCH_ASM.match(line)):
          # Enter assembly block
          inner_block.inline_asm = _INSIDE_ASM
        else:
          # Not entering assembly block.  If previous line was _END_ASM,
          # we will now shift to _NO_ASM state.
          inner_block.inline_asm = _NO_ASM
      elif (inner_block.inline_asm == _INSIDE_ASM and
            inner_block.open_parentheses == 0):
        # Exit assembly block
        inner_block.inline_asm = _END_ASM
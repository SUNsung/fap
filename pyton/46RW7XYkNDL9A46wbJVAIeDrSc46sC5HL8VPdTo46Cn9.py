
        
        if sys.version_info < (3,):
  #  -- pylint: disable=no-member
  # BINARY_TYPE = str
  itervalues = dict.itervalues
  iteritems = dict.iteritems
else:
  # BINARY_TYPE = bytes
  itervalues = dict.values
  iteritems = dict.items
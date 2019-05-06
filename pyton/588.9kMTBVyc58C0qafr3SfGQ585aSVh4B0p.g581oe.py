
        
                self.assertEqual(jws, JWS.from_json(jws.to_json()))
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    
# -- Options for HTML output ----------------------------------------------
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
        公式
        `o = x * softmax(Wx + b)`
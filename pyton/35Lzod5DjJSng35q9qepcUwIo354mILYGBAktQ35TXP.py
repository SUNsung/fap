
        
            return inner
    
    
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
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
            :param req: The :class:`PreparedRequest <PreparedRequest>` used to generate the response.
        :param resp: The urllib3 response object.
        :rtype: requests.Response
        '''
        response = Response()
    
        pyopenssl_info = {
        'version': None,
        'openssl_version': '',
    }
    if OpenSSL:
        pyopenssl_info = {
            'version': OpenSSL.__version__,
            'openssl_version': '%x' % OpenSSL.SSL.OPENSSL_VERSION_NUMBER,
        }
    cryptography_info = {
        'version': getattr(cryptography, '__version__', ''),
    }
    idna_info = {
        'version': getattr(idna, '__version__', ''),
    }
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        for param in params:
        param = param.strip()
        if param:
            key, value = param, True
            index_of_equals = param.find('=')
            if index_of_equals != -1:
                key = param[:index_of_equals].strip(items_to_strip)
                value = param[index_of_equals + 1:].strip(items_to_strip)
            params_dict[key] = value
    return content_type, params_dict
    
      if Match(r'\s*{\s*$', line):
    # We allow an open brace to start a line in the case where someone is using
    # braces in a block to explicitly create a new scope, which is commonly used
    # to control the lifetime of stack-allocated variables.  Braces are also
    # used for brace initializers inside function calls.  We don't detect this
    # perfectly: we just don't complain if the last non-whitespace character on
    # the previous non-blank line is ',', ';', ':', '(', '{', or '}', or if the
    # previous line starts a preprocessor block. We also allow a brace on the
    # following line if it is part of an array initialization and would not fit
    # within the 80 character limit of the preceding line.
    prevline = GetPreviousNonBlankLine(clean_lines, linenum)[0]
    if (not Search(r'[,;:}{(]\s*$', prevline) and
        not Match(r'\s*#', prevline) and
        not (GetLineWidth(prevline) > _line_length - 2 and '[]' in prevline)):
      error(filename, linenum, 'whitespace/braces', 4,
            '{ should almost always be at the end of the previous line')
    }
    }
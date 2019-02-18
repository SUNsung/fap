
        
        import optparse
import os
from os.path import dirname as dirn
import sys
    
    secret_msg = b'Secret message goes here'
    
    if __name__ == '__main__':
    main()

    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
html_theme = 'default'
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
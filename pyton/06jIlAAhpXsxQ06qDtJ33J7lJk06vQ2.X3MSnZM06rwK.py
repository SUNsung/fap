
        
        PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
    from ..common import *
from ..extractor import VideoExtractor
    
    
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
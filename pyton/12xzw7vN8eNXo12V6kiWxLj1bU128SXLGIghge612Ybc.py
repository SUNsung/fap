
        
        containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
        parser.add_argument('-t', '--test',
                        dest='test',
                        action='store_true',
                        help='show what would be downloaded without downloading')
    
    alphanumeric_range = r'''
    \[
        (?:
            [a-z]:[a-z]|                # one-char alphabetic range
            [0-9]+:[0-9]+               # ...or a numeric one
        )
        (?::[0-9]+)?                    # numeric :step (optional)
    \]
'''
    
        if result is None:
        return '{}'
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
        requires_project = False
    crawler_process = None
    
            run = self.testsRun
        plural = 's' if run != 1 else ''
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError
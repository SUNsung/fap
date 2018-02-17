
        
            infile, outfile = args
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def assertMatch(self, url, ie_list):
        self.assertEqual(self.matching_ies(url), ie_list)
    
    
class ClipRsIE(OnetBaseIE):
    _VALID_URL = r'https?://(?:www\.)?clip\.rs/(?P<id>[^/]+)/\d+'
    _TEST = {
        'url': 'http://www.clip.rs/premijera-frajle-predstavljaju-novi-spot-za-pesmu-moli-me-moli/3732',
        'md5': 'c412d57815ba07b56f9edc7b5d6a14e5',
        'info_dict': {
            'id': '1488842.1399140381',
            'ext': 'mp4',
            'title': 'PREMIJERA Frajle predstavljaju novi spot za pesmu Moli me, moli',
            'description': 'md5:56ce2c3b4ab31c5a2e0b17cb9a453026',
            'duration': 229,
            'timestamp': 1459850243,
            'upload_date': '20160405',
        }
    }
    
    # The name of an image file (within the static path) to use as favicon of the
# docs.  This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
html_favicon = '_static/flask-favicon.ico'
    
        r = client.get('/world')
    assert r.status_code == 200
    
    
def test_messages(client, app):
    '''Test that messages work'''
    login(client, app.config['USERNAME'],
          app.config['PASSWORD'])
    rv = client.post('/add', data=dict(
        title='<Hello>',
        text='<strong>HTML</strong> allowed here'
    ), follow_redirects=True)
    assert b'No entries here so far' not in rv.data
    assert b'&lt;Hello&gt;' in rv.data
    assert b'<strong>HTML</strong> allowed here' in rv.data

    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
    
class Galaxy(object):
    ''' Keeps global galaxy info '''
    
    # Documents to append as an appendix to all manuals.
#latex_appendices = []
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
    
  # This is the blocking version of the method. See below for async.
  # |timeout| is num seconds to tolerate no response from server before giving
  # up; see Requests docs for details (we just pass the param along).
  @staticmethod
  def PostDataToHandler( data, handler, timeout = _READ_TIMEOUT_SEC ):
    return JsonFromFuture( BaseRequest.PostDataToHandlerAsync( data,
                                                               handler,
                                                               timeout ) )
    
          with HandleServerException( display = False ):
        BaseRequest.GetDataFromHandler( 'healthy' )

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
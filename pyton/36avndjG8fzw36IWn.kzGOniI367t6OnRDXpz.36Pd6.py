
        
        
class TestAES(unittest.TestCase):
    def setUp(self):
        self.key = self.iv = [0x20, 0x15] + 14 * [0]
        self.secret_msg = b'Secret message goes here'
    
        def _get_ip(self, protocol):
        if self._SKIP_SOCKS_TEST:
            return '127.0.0.1'
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        @possible_keys
    def test_delitem(self, key):
        del self.case_insensitive_dict[key]
        assert key not in self.case_insensitive_dict
    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
        def multiple_domains(self):
        '''Returns True if there are multiple domains in the jar.
        Returns False otherwise.
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def get_redirect_target(self, resp):
        '''Receives a Response. Returns a redirect URI or ``None``'''
        # Due to the nature of how requests processes redirects this method will
        # be called at least once upon the original response and at least twice
        # on each subsequent redirect response (if any).
        # If a custom mixin is used to handle this logic, it may be advantageous
        # to cache the redirect location onto the response object as a private
        # attribute.
        if resp.is_redirect:
            location = resp.headers['location']
            # Currently the underlying http module on py3 decode headers
            # in latin1, but empirical evidence suggests that latin1 is very
            # rarely used with non-ASCII characters in HTTP headers.
            # It is more likely to get UTF8 header rather than latin1.
            # This causes incorrect handling of UTF8 encoded location headers.
            # To solve this, we re-encode the location in latin1.
            if is_py3:
                location = location.encode('latin1')
            return to_native_string(location, 'utf8')
        return None
    
        def iter_content(self, chunk_size=1, decode_unicode=False):
        '''Iterates over the response data.  When stream=True is set on the
        request, this avoids reading the content at once into memory for
        large responses.  The chunk size is the number of bytes it should
        read into memory.  This is not necessarily the length of each item
        returned as decoding can take place.
    
    
if __name__ == '__main__':
    main()
    
    
      3. find centroids and clusters using kmeans function.
  
        centroids, cluster_assignment = kmeans(
            X, 
            k, 
            initial_centroids, 
            maxiter=400,
            record_heterogeneity=heterogeneity, 
            verbose=True # whether to print logs in console or not.(default=False)
            )
  
  
  4. Plot the loss function, hetrogeneity values for every iteration saved in hetrogeneity list.
        plot_heterogeneity(
            heterogeneity, 
            k
        )
  
  5. Have fun..
  
'''
from __future__ import print_function
from sklearn.metrics import pairwise_distances
import numpy as np
    
            a += a
        b >>= 1
    
            # Some people use different formatting conventions, which makes
        # untokenize a little trickier. Note that this test involves trailing
        # whitespace after the colon. Note that we use hex escapes to make the
        # two trailing blanks apparent in the expected output.
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    ##
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client.mac == device:
                return client.ip
        return None
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_ACCESS_TOKEN, CONF_USERNAME
import homeassistant.helpers.config_validation as cv
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_APP_NAME, default=DEFAULT_APP_NAME): cv.string,
    vol.Optional(CONF_APP_ICON): vol.Url,
    vol.Optional(CONF_HOSTNAME, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})
    
        def __init__(self, hass, host, port):
        '''Initialize the service.'''
        self._hass = hass
        self._host = host
        self._port = port
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        _LOGGER.debug('Sending to: %s, %s', self._recipient, str(self._device))
        data = {
            'secret': self._secret,
            'to': self._recipient,
            'device': self._device,
            'payload': message,
        }
    
    REQUIREMENTS = ['messagebird==1.2.0']
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Pushetta notification service.'''
    api_key = config[CONF_API_KEY]
    channel_name = config[CONF_CHANNEL_NAME]
    send_test_msg = config[CONF_SEND_TEST_MSG]
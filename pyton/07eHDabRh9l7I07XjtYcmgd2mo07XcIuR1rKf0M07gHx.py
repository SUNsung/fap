
        
            # incorporate derivatives flowing through the checkpointed nodes
    checkpoints_sorted_lists = tf_toposort(checkpoints, within_ops=fwd_ops)
    for ts in checkpoints_sorted_lists[::-1]:
        debug_print('Processing list {}'.format(ts))
        checkpoints_other = [r for r in checkpoints if r not in ts]
        checkpoints_disconnected_other = [checkpoints_disconnected[r] for r in checkpoints_other]
    
    
class Mask():
    ''' Parent class for masks
    
    
_HELPTEXT = (
    'CV2 DNN Detector options.\n'
    'A CPU only extractor, is the least reliable, but uses least resources and runs fast on CPU. '
    'Use this if not using a GPU and time is important'
)
    
    import numpy as np
import tensorflow as tf
from keras import backend as K
from keras import initializers
from keras.utils.generic_utils import get_custom_objects
    
    
def read_file(input_path):
    with open(input_path, 'r') as fb:
        return fb.read()
    
            # It is no more the first time...
        self.first_grab = False
    
        @percents.setter
    def percents(self, value):
        self.__percent = value
    
            # Wait duration (in s) time
        exitkey = False
        countdown = Timer(duration)
        # Set the default timeout (in ms) for the getch method
        self.term_window.timeout(int(duration * 1000))
        while not countdown.finished() and not exitkey:
            # Getkey
            pressedkey = self.__catch_key(return_to_browser=return_to_browser)
            # Is it an exit key ?
            exitkey = (pressedkey == ord('\x1b') or pressedkey == ord('q'))
            if not exitkey and pressedkey > -1:
                # Redraw display
                self.flush(stats, cs_status=cs_status)
                # Overwrite the timeout with the countdown
                self.term_window.timeout(int(countdown.get() * 1000))
    
            try:
            res = urlopen(PYPI_API_URL, timeout=3).read()
        except (HTTPError, URLError, CertificateError) as e:
            logger.debug('Cannot get Glances version from the PyPI RESTful API ({})'.format(e))
        else:
            self.data[u'latest_version'] = json.loads(nativestr(res))['info']['version']
            logger.debug('Save Glances version to the cache file')
    
    
def safe_rmtree(path):
    def onerror(fun, path, excinfo):
        exc = excinfo[1]
        if exc.errno != errno.ENOENT:
            raise
    
    from glances.logger import logger
from glances.amps.glances_amp import GlancesAmp
    
        @staticmethod
    def find_active_ip_address():
        '''Try to find the active IP addresses.'''
        import netifaces
        # Interface of the default gateway
        gateway_itf = netifaces.gateways()['default'][netifaces.AF_INET][1]
        # IP address for the interface
        return netifaces.ifaddresses(gateway_itf)[netifaces.AF_INET][0]['addr']
    
            Example for the mem plugin:
        {'percent': [
            (datetime.datetime(2018, 3, 24, 16, 27, 47, 282070), 51.8),
            (datetime.datetime(2018, 3, 24, 16, 27, 47, 540999), 51.9),
            (datetime.datetime(2018, 3, 24, 16, 27, 50, 653390), 52.0),
            (datetime.datetime(2018, 3, 24, 16, 27, 53, 749702), 52.0),
            (datetime.datetime(2018, 3, 24, 16, 27, 56, 825660), 52.0),
            ...
            ]
        }
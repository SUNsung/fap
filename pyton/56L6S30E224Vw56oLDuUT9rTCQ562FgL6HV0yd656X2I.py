
        
            def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
    
class HitCounts(MRJob):
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def __iter__(self):
        '''Return an iterator over `self.msg`.'''
        if self.with_headers:
            yield self.get_headers()
            yield b'\r\n\r\n'
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
    __all__ = ['ehow_download']
    
    vimeo_embed_patters = [ 'player\.vimeo\.com/video/(\d+)' ]
    
        def mapping(self, num):
        res = []
        while num > 0:
            res.append(self.mapping_table[num % self.base])
            num = num // self.base
        return ''.join(res[::-1])
    
        def scan_devices(self):
        '''Scan for new devices and return a list with found device IDs.'''
        self._update_info()
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Command Line notification service.'''
    command = config[CONF_COMMAND]
    
        def send_message(self, message='', **kwargs):
        '''Send some message.'''
        payload = {'access_token': self.page_access_token}
        targets = kwargs.get(ATTR_TARGET)
        data = kwargs.get(ATTR_DATA)
    
    import homeassistant.util.dt as dt_util
from homeassistant.components.notify import (
    ATTR_TITLE, ATTR_TITLE_DEFAULT, PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_FILENAME
import homeassistant.helpers.config_validation as cv
    
        return FlockNotificationService(url, session, hass.loop)
    
        return AutomateNotificationService(secret, recipient, device)
    
            text = message
        mycroft = MycroftAPI(self.mycroft_ip)
        if mycroft is not None:
            mycroft.speak_text(text)
        else:
            _LOGGER.log('Could not reach this instance of mycroft')

    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
        #Parsing the arguments
    parser = argparse.ArgumentParser()
    parser.add_argument('dir_path', help = 'Path to tldr 'pages' directory')
    parser.add_argument('-c', choices=['solarized-light', 'solarized-dark'], help='Color scheme of the PDF')
    args = parser.parse_args()
    
    loc = args.dir_path
    if args.c == 'solarized-light' or args.c == 'solarized-dark':
        colorscheme = args.c
        
    main(loc, colorscheme)

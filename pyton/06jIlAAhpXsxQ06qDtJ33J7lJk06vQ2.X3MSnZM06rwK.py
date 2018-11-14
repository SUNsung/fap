
        
            def can_fit_vehicle(self, vehicle):
        if self.vehicle is not None:
            return False
        return vehicle.can_fit_in_spot(self)
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    
@bp.route('/create', methods=('GET', 'POST'))
@login_required
def create():
    '''Create a new post for the current user.'''
    if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
        To integrate applications, :class:`Flask` has a hook to intercept URL build
    errors through :attr:`Flask.url_build_error_handlers`.  The `url_for`
    function results in a :exc:`~werkzeug.routing.BuildError` when the current
    app does not have a URL for the given endpoint and values.  When it does, the
    :data:`~flask.current_app` calls its :attr:`~Flask.url_build_error_handlers` if
    it is not ``None``, which can return a string to use as the result of
    `url_for` (instead of `url_for`'s default to raise the
    :exc:`~werkzeug.routing.BuildError` exception) or re-raise the exception.
    An example::
    
    
class JSONDecoder(_json.JSONDecoder):
    '''The default JSON decoder.  This one does not change the behavior from
    the default simplejson decoder.  Consult the :mod:`json` documentation
    for more information.  This decoder is not only used for the load
    functions of this module but also :attr:`~flask.Request`.
    '''
    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                yield blueprint, loader
    
        def __len__(self):
        return len(self._store)
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
    from urllib3.poolmanager import PoolManager, proxy_from_url
from urllib3.response import HTTPResponse
from urllib3.util import parse_url
from urllib3.util import Timeout as TimeoutSauce
from urllib3.util.retry import Retry
from urllib3.exceptions import ClosedPoolError
from urllib3.exceptions import ConnectTimeoutError
from urllib3.exceptions import HTTPError as _HTTPError
from urllib3.exceptions import MaxRetryError
from urllib3.exceptions import NewConnectionError
from urllib3.exceptions import ProxyError as _ProxyError
from urllib3.exceptions import ProtocolError
from urllib3.exceptions import ReadTimeoutError
from urllib3.exceptions import SSLError as _SSLError
from urllib3.exceptions import ResponseError
from urllib3.exceptions import LocationValueError
    
        def __ne__(self, other):
        return not self == other
    
    
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
        When porting the weights of a convnet from one data format to the other,
    if the convnet includes a `Flatten` layer
    (applied to the last convolutional feature map)
    followed by a `Dense` layer, the weights of that `Dense` layer
    should be updated to reflect the new dimension ordering.
    
        # Example
    
                type, ext, size = url_info(real_url)
    
    from ..common import *
import json
import random
from urllib.parse import urlparse, parse_qs
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
    
@click.command()
@click.argument('known_people_folder')
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel (can speed up processing lots of images). -1 means 'use all in system'')
@click.option('--tolerance', default=0.6, help='Tolerance for face comparisons. Default is 0.6. Lower this if you get multiple matches for the same person.')
@click.option('--show-distance', default=False, type=bool, help='Output face distance. Useful for tweaking tolerance setting.')
def main(known_people_folder, image_to_check, cpus, tolerance, show_distance):
    known_names, known_face_encodings = scan_known_people(known_people_folder)
    
            if file.filename == '':
            return redirect(request.url)
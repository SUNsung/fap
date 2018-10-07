
        
        
@bp.route('/<int:id>/delete', methods=('POST',))
@login_required
def delete(id):
    '''Delete a post.
    
        def __init__(self, blueprint, app, options, first_registration):
        #: a reference to the current application
        self.app = app
    
        .. describe:: 'key' in g
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        Implements the bridge to Jinja2.
    
        :param app: The Flask application to configure the environment from.
    :param path: URL path being requested.
    :param base_url: Base URL where the app is being served, which
        ``path`` is relative to. If not given, built from
        :data:`PREFERRED_URL_SCHEME`, ``subdomain``,
        :data:`SERVER_NAME`, and :data:`APPLICATION_ROOT`.
    :param subdomain: Subdomain name to append to :data:`SERVER_NAME`.
    :param url_scheme: Scheme to use instead of
        :data:`PREFERRED_URL_SCHEME`.
    :param json: If given, this is serialized as JSON and passed as
        ``data``. Also defaults ``content_type`` to
        ``application/json``.
    :param args: other positional arguments passed to
        :class:`~werkzeug.test.EnvironBuilder`.
    :param kwargs: other keyword arguments passed to
        :class:`~werkzeug.test.EnvironBuilder`.
    '''
    
            self._checking_lock.acquire()
        self._checking_num -= 1
        self._checking_lock.release()
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
        
    def getLine(self):
        return self.line
    
    def setLine(self, line):
        self.line = line
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
            # Print results on the console
        for name, (top, right, bottom, left) in predictions:
            print('- Found {} at ({}, {})'.format(name, left, top))
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
        def vapix_service(call):
        '''Service to send a message.'''
        for _, device in AXIS_DEVICES.items():
            if device.name == call.data[CONF_NAME]:
                response = device.vapix.do_request(
                    call.data[SERVICE_CGI],
                    call.data[SERVICE_ACTION],
                    call.data[SERVICE_PARAM])
                hass.bus.fire(SERVICE_VAPIX_CALL_RESPONSE, response)
                return True
        _LOGGER.info('Couldn't find device %s', call.data[CONF_NAME])
        return False
    
        def _update_info(self):
        '''Ensure the information from the router is up to date.
    
    _LOGGER = logging.getLogger(__name__)
    
            if self._userid is None:
            if not self._login():
                _LOGGER.error('Could not obtain a user ID from the router')
                return False
        last_results = []
    
    from homeassistant.util import slugify
from homeassistant.helpers.dispatcher import (
    dispatcher_connect, dispatcher_send)
from homeassistant.components.volvooncall import DATA_KEY, SIGNAL_VEHICLE_SEEN
    
            send_data(name, json_body)
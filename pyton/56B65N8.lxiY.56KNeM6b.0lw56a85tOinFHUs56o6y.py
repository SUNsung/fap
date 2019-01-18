
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
    
def hex_str(int_list):
    return codecs.encode(intlist_to_bytes(int_list), 'hex')
    
    
def build_lazy_ie(ie, name):
    valid_url = getattr(ie, '_VALID_URL', None)
    s = ie_template.format(
        name=name,
        bases=', '.join(map(get_base_name, ie.__bases__)),
        valid_url=valid_url,
        module=ie.__module__)
    if ie.suitable.__func__ is not InfoExtractor.suitable.__func__:
        s += '\n' + getsource(ie.suitable)
    if hasattr(ie, '_make_valid_url'):
        # search extractors
        s += make_valid_template.format(valid_url=ie._make_valid_url())
    return s
    
    import io
import sys
import re
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
        def test_format_selection(self):
        formats = [
            {'format_id': '35', 'ext': 'mp4', 'preference': 1, 'url': TEST_URL},
            {'format_id': 'example-with-dashes', 'ext': 'webm', 'preference': 1, 'url': TEST_URL},
            {'format_id': '45', 'ext': 'webm', 'preference': 2, 'url': TEST_URL},
            {'format_id': '47', 'ext': 'webm', 'preference': 3, 'url': TEST_URL},
            {'format_id': '2', 'ext': 'flv', 'preference': 4, 'url': TEST_URL},
        ]
        info_dict = _make_result(formats)
    
    
if __name__ == '__main__':
    unittest.main()

    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
    tmpl_api_call_video_info = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    '&method=flickr.video.getStreamInfo'
    '&api_key=%s'
    '&photo_id=%s'
    '&secret=%s'
)
    
            try:
            url = 'https://plus.google.com/' + r1(r'(photos/\d+/albums/\d+/\d+)\?authkey', html)
            html = get_html(url, faker=True)
            temp = re.findall(r'\[(\d+),\d+,\d+,'([^']+)'\]', html)
            temp = sorted(temp, key = lambda x : fmt_level[x[0]])
            urls = [unicodize(i[1]) for i in temp if i[0] == temp[0][0]]
            assert urls
            real_urls = urls # Look ma, there's really a video!
    
    import os
import warnings
    
        url = FLASH_BRIEFINGS_API_ENDPOINT
    name = 'api:alexa:flash_briefings'
    
    
def setup_button(hass, config, add_entities, client, address):
    '''Set up a single button device.'''
    timeout = config.get(CONF_TIMEOUT)
    ignored_click_types = config.get(CONF_IGNORED_CLICK_TYPES)
    button = FlicButton(hass, client, address, timeout, ignored_click_types)
    _LOGGER.info('Connected to button %s', address)
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/datadog/
'''
import logging
    
            self.last_results = {}
        response = self._make_request()
        if response.status_code != 200:
            _LOGGER.error(
                'Got HTTP status code %d when getting device list',
                response.status_code)
            return False
        try:
            data = response.json()
            result = data['responses'][0]
            devices = result['output']['devices']
            for device in devices:
                macs = device['knownMACAddresses']
                if not macs:
                    _LOGGER.warning(
                        'Skipping device without known MAC address')
                    continue
                mac = macs[-1]
                connections = device['connections']
                if not connections:
                    _LOGGER.debug('Device %s is not connected', mac)
                    continue
    
    CONF_HOME_ID = 'home_id'
    
            devices = {}
        for device in devices_result:
            match = _DEVICES_REGEX.search(device.decode('utf-8'))
            if match:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'host': match.group('host'),
                    'status': match.group('status')
                    }
        return devices

    
    DEPENDENCIES = ['http']
    
    REMOTE_SCHEMA = vol.Schema({
    vol.Optional(CONF_NAME, default=DOMAIN):
        vol.Exclusive(cv.string, 'remotes'),
    vol.Required(CONF_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Sparkle the eyes
    d.polygon(face_landmarks['left_eye'], fill=(255, 255, 255, 30))
    d.polygon(face_landmarks['right_eye'], fill=(255, 255, 255, 30))
    
    known_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
    
        return np.linalg.norm(face_encodings - face_to_compare, axis=1)
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)
    
    # Initialize some variables
face_locations = []
face_encodings = []
face_names = []
process_this_frame = True
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
        # 载入用户上传的图片
    img = face_recognition.load_image_file(file_stream)
    # 为用户上传的图片中的人脸编码
    unknown_face_encodings = face_recognition.face_encodings(img)
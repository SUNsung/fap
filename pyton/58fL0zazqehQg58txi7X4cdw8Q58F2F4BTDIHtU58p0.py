
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
                # >leading or trailing LWS MAY be removed without
            # >changing the semantics of the field value'
            # -https://www.w3.org/Protocols/rfc2616/rfc2616-sec4.html
            # Also, requests raises `InvalidHeader` for leading spaces.
            value = value.strip()
    
    
class ConverterPlugin(object):
    
    from httpie.plugins.base import AuthPlugin
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
    from utils import TESTS_ROOT
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    # NOTE: This example requires flask to be installed! You can install it with pip:
# $ pip3 install flask
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
        # Create a subprocess to capture frames
    p.append(Process(target=capture, args=(read_frame_list,)))
    p[0].start()
    
        def step(self, action):
        assert self.action_space.contains(action)
        if self.np_random.rand() < self.slip:
            action = not action  # agent slipped, reverse action taken
        if action:  # 'backwards': go back to the beginning, get small reward
            reward = self.small
            self.state = 0
        elif self.state < self.n - 1:  # 'forwards': go up along the chain
            reward = 0
            self.state += 1
        else:  # 'forwards': stay at the end of the chain, collect large reward
            reward = self.large
        done = False
        return self.state, reward, done, {}
    
            Returns:
            int: The registration ID of this object. It is the caller's responsibility to save this ID if early closing is desired.
        '''
        assert hasattr(closeable, 'close'), 'No close method for {}'.format(closeable)
    
        Args:
        a (Optional[int, str]): None seeds from an operating system specific randomness source.
        max_bytes: Maximum number of bytes to use in the seed.
    '''
    # Adapted from https://svn.python.org/projects/python/tags/r32/Lib/random.py
    if a is None:
        a = _bigint_from_bytes(os.urandom(max_bytes))
    elif isinstance(a, str):
        a = a.encode('utf8')
        a += hashlib.sha512(a).digest()
        a = _bigint_from_bytes(a[:max_bytes])
    elif isinstance(a, integer_types):
        a = a % 2**(8 * max_bytes)
    else:
        raise error.Error('Invalid type for seed: {} ({})'.format(type(a), a))
    
        logger.info('Generating rollout for {}'.format(spec.id))
    
        def _create_particle(self, point1, point2, grass):
        class Particle:
            pass
        p = Particle()
        p.color = WHEEL_COLOR if not grass else MUD_COLOR
        p.ttl = 1
        p.poly = [(point1[0],point1[1]), (point2[0],point2[1])]
        p.grass = grass
        self.particles.append(p)
        while len(self.particles) > 30:
            self.particles.pop(0)
        return p
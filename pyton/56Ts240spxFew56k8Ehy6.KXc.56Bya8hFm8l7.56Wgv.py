
        
            @app.route('/hello')
    def hello():
        return 'Hello, World!'
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
        if blueprint is not None and seems_fishy:
        info.append('  The template was looked up from an endpoint that '
                    'belongs to the blueprint '%s'.' % blueprint)
        info.append('  Maybe you did not place a template in the right folder?')
        info.append('  See http://flask.pocoo.org/docs/blueprints/#templates')
    
            :param tag_class: tag class to register. Will be instantiated with this
            serializer instance.
        :param force: overwrite an existing tag. If false (default), a
            :exc:`KeyError` is raised.
        :param index: index to insert the new tag in the tag order. Useful when
            the new tag is a special case of an existing tag. If ``None``
            (default), the tag is appended to the end of the order.
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        def invoke(self, cli=None, args=None, **kwargs):
        '''Invokes a CLI command in an isolated environment. See
        :meth:`CliRunner.invoke <click.testing.CliRunner.invoke>` for
        full method documentation. See :ref:`testing-cli` for examples.
    
        def __init__(self):
        self.name = 'citext'
    
            # No redirect was found. Return the response.
        return response

    
        objects = BaseSessionManager()
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
            :param str title: The title of the save. If a title is given, the
            configuration will be saved as a new checkpoint and put in a
            timestamped directory.
    
        def conflicts(self, addrs):
        '''See if vhost conflicts with any of the addrs.
    
    class SelectVhostTest(unittest.TestCase):
    '''Tests for certbot_apache.display_ops.select_vhost.'''
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    from certbot import configuration
from certbot_nginx import configurator
from certbot_nginx import constants
from certbot_compatibility_test import errors
from certbot_compatibility_test import interfaces
from certbot_compatibility_test import util
from certbot_compatibility_test.configurators import common as configurators_common
    
    

    
    print(longestSub([4,8,7,5,1,12,2,3,9]))
print(longestSub([9,8,7,6,5,7]))
    
                self.decision_boundary = X[best_split]
            self.left = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.right = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.left.train(left_X, left_y)
            self.right.train(right_X, right_y)
        else:
            self.prediction = np.mean(y)
    
    letters = [letter for letter in string.ascii_letters]
digits = [digit for digit in string.digits]
symbols = [symbol for symbol in string.punctuation]
chars = letters + digits + symbols
random.shuffle(chars)
    
        def is_block_device(self):
        '''
        Whether this path is a block device.
        '''
        try:
            return S_ISBLK(self.stat().st_mode)
        except OSError as e:
            if not _ignore_error(e):
                raise
            # Path doesn't exist or is a broken symlink
            # (see https://bitbucket.org/pitrou/pathlib/issue/12/)
            return False
        except ValueError:
            # Non-encodable path
            return False
    
        def _AsyncWith(self, t):
        self.fill('async with ')
        interleave(lambda: self.write(', '), self.dispatch, t.items)
        self.enter()
        self.dispatch(t.body)
        self.leave()
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
    
def read_binary(package: Package, resource: Resource) -> bytes:
    '''Return the binary contents of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_binary(package, resource) as fp:
        return fp.read()
    
    --Pepé
''')
    
    '''Send the contents of a directory as a MIME message.'''
    
    def getText(nodelist):
    rc = []
    for node in nodelist:
        if node.nodeType == node.TEXT_NODE:
            rc.append(node.data)
    return ''.join(rc)
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
    *References:
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
https://fkromer.github.io/python-pattern-references/design/#factory-method
https://sourcemaking.com/design_patterns/factory_method
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
        def on_switchover(self):
        super(Standby, self).on_switchover()  # message ignored
        self._hsm._next_state('active')
    
        def add(self, graphic):
        self.graphics.append(graphic)
    
    
### OUTPUT ###
# Displaying mobile index page
# Displaying tablet index page
# cant dispatch the request
# request must be a Request object

    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
        def test_relatives_after_access(self):
        print(u'John's relatives: {0}'.format(self.John.relatives))
        self.assertIn('relatives', self.John.__dict__)
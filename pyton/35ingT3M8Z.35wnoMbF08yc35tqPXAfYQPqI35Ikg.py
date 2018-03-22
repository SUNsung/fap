
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        class Plugin(AuthPlugin):
        auth_type = 'test-prompt-false'
        prompt_password = False
    
    
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
        try:
        if args.download:
            args.follow = True  # --download implies --follow.
            downloader = Downloader(
                output_file=args.output_file,
                progress_file=env.stderr,
                resume=args.download_resume
            )
            downloader.pre_request(args.headers)
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
    import pytest
import pytest_httpbin.certs
from requests.exceptions import SSLError
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
                    if (not credentials.has_password() and
                        plugin.prompt_password):
                    if self.args.ignore_stdin:
                        # Non-tty stdin read by now
                        self.error(
                            'Unable to prompt for passwords because'
                            ' --ignore-stdin is set.'
                        )
                    credentials.prompt_password(url.netloc)
                self.args.auth = plugin.get_auth(
                    username=credentials.key,
                    password=credentials.value,
                )
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
            new_fields = []
        fields = to_key_val_list(data or {})
        files = to_key_val_list(files or {})
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
      def update_snapshot_name(self, var_coll_name):
    var_list = self._metagraph.collection_def[var_coll_name]
    for i, value in enumerate(var_list.bytes_list.value):
      var_def = variable_pb2.VariableDef()
      var_def.ParseFromString(value)
      # Somehow node Model/global_step/read doesn't have any fanout and seems to
      # be only used for snapshot; this is different from all other variables.
      if var_def.snapshot_name != 'Model/global_step/read:0':
        var_def.snapshot_name = with_autoparallel_prefix(
            0, var_def.snapshot_name)
      value = var_def.SerializeToString()
      var_list.bytes_list.value[i] = value
    
      This chunks up raw_data into batches of examples and returns Tensors that
  are drawn from these batches.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir(), 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir(), 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
    
class VatxtModel(object):
  '''Constructs training and evaluation graphs.
    
    import tensorflow as tf
    
    py_binary(
    name = 'cifar10_train',
    srcs = [
        'cifar10_train.py',
    ],
    srcs_version = 'PY2AND3',
    visibility = ['//tensorflow:__subpackages__'],
    deps = [
        ':cifar10',
    ],
)
    
    # The font size ('10pt', '11pt' or '12pt').
#'pointsize': '10pt',
    
            # unicode encoding
        query = 'SELECT * FROM 'tb_name' WHERE city = 'Lübeck''
        self.assertEquals({'tb_name'}, self.extract_tables(query))
    
        # 3. Delete empty permission view menues from roles
    roles = sm.get_session.query(sm.role_model).all()
    for role in roles:
        role.permissions = [p for p in role.permissions if p]
    sm.get_session.commit()
    
        list_columns = [
        'link', 'database',
        'changed_by_', 'modified']
    order_columns = ['modified']
    add_columns = ['database', 'schema', 'table_name']
    edit_columns = [
        'table_name', 'sql', 'filter_select_enabled', 'slices',
        'fetch_values_predicate', 'database', 'schema',
        'description', 'owner',
        'main_dttm_col', 'default_endpoint', 'offset', 'cache_timeout']
    show_columns = edit_columns + ['perm']
    related_views = [TableColumnInlineView, SqlMetricInlineView]
    base_order = ('changed_on', 'desc')
    search_columns = (
        'database', 'schema', 'table_name', 'owner',
    )
    description_columns = {
        'slices': _(
            'The list of slices associated with this table. By '
            'altering this datasource, you may change how these associated '
            'slices behave. '
            'Also note that slices need to point to a datasource, so '
            'this form will fail at saving if removing slices from a '
            'datasource. If you want to change the datasource for a slice, '
            'overwrite the slice from the 'explore view''),
        'offset': _('Timezone offset (in hours) for this datasource'),
        'table_name': _(
            'Name of the table that exists in the source database'),
        'schema': _(
            'Schema, as used only in some databases like Postgres, Redshift '
            'and DB2'),
        'description': Markup(
            'Supports <a href='https://daringfireball.net/projects/markdown/'>'
            'markdown</a>'),
        'sql': _(
            'This fields acts a Superset view, meaning that Superset will '
            'run a query against this string as a subquery.',
        ),
        'fetch_values_predicate': _(
            'Predicate applied when fetching distinct value to '
            'populate the filter control component. Supports '
            'jinja template syntax. Applies only when '
            '`Enable Filter Select` is on.',
        ),
        'default_endpoint': _(
            'Redirects to this endpoint when clicking on the table '
            'from the table list'),
        'filter_select_enabled': _(
            'Whether to populate the filter's dropdown in the explore '
            'view's filter section with a list of distinct values fetched '
            'from the backend on the fly'),
    }
    base_filters = [['id', DatasourceFilter, lambda: []]]
    label_columns = {
        'slices': _('Associated Charts'),
        'link': _('Table'),
        'changed_by_': _('Changed By'),
        'database': _('Database'),
        'changed_on_': _('Last Changed'),
        'filter_select_enabled': _('Enable Filter Select'),
        'schema': _('Schema'),
        'default_endpoint': _('Default Endpoint'),
        'offset': _('Offset'),
        'cache_timeout': _('Cache Timeout'),
        'table_name': _('Table Name'),
        'fetch_values_predicate': _('Fetch Values Predicate'),
        'owner': _('Owner'),
        'main_dttm_col': _('Main Datetime Column'),
        'description': _('Description'),
    }
    
        Calls to context.execute() here emit the given string to the
    script output.
    
    # revision identifiers, used by Alembic.
revision = '1226819ee0e3'
down_revision = '956a063c52b3'
    
    '''
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    __all__ = ['kugou_download']
    
    from ..common import *
import re
    
            for s in self.stream_types:
            quality = s['id']
            src = match1(content,
                         r'src: '([^']+)', 'data-res': '%s'' % quality)
            if src is not None:
                url = 'http://en.musicplayon.com%s' % src
                self.streams[quality] = {'url': url}
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    from tornado.test.util import unittest
    
    
@gen.engine
def e2(callback):
    callback()
    
    '''Usage: python file_receiver.py
    
        for filename in filenames:
        filename_bytes = filename.encode()
        mtype = mimetypes.guess_type(filename)[0] or 'application/octet-stream'
        buf = (
            (b'--%s\r\n' % boundary_bytes) +
            (b'Content-Disposition: form-data; name='%s'; filename='%s'\r\n' %
             (filename_bytes, filename_bytes)) +
            (b'Content-Type: %s\r\n' % mtype.encode()) +
            b'\r\n'
        )
        yield write(buf)
        with open(filename, 'rb') as f:
            while True:
                # 16k at a time.
                chunk = f.read(16 * 1024)
                if not chunk:
                    break
                yield write(chunk)
    
    define('family', default='unspec',
       help='Address family to query: unspec, inet, or inet6')
    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
    
class Provider:
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15

    
        print(root_specification.is_satisfied_by(andrey))
    print(root_specification.is_satisfied_by(ivan))
    print(root_specification.is_satisfied_by(vasiliy))
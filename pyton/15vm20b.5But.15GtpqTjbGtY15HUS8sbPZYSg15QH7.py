
        
        
class JWSTest(unittest.TestCase):
    '''Tests for acme.jws.JWS.'''
    
    
# -- Options for HTML output ----------------------------------------------
    
    Certbot will emit a warning if it detects that the credentials file can be
accessed by other users on your system. The warning reads 'Unsafe permissions
on credentials configuration file', followed by the path to the credentials
file. This warning will be emitted each time Certbot uses the credentials file,
including for renewal, and cannot be silenced except by addressing the issue
(e.g., by using a command like ``chmod 600`` to restrict access to the file).
    
    import os
import warnings
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
        return major, minor, patch
    
        def time_existing_series(self):
        pd.Categorical(self.series)
    
    
def list_of_tuples_with_none(arr):
    return [(i, -i) for i in arr][:-1] + [None]
    
        # reset probability to zero
    config.DYNAMODB_ERROR_PROBABILITY = 0.0
    
            if 'Content-Disposition' in head_parsed:
            _, params = cgi.parse_header(head_parsed['Content-Disposition'])
            yield params, part
    
    
def get_config_file_homedir():
    return get_or_create_file(CONFIG_FILE_PATH)
    
        :type paths: list
    :param paths: List of strings. Additional paths to prepend to the classpath.
    
    
def replay_command(command):
    function = getattr(requests, command['m'].lower())
    data = command['d']
    if data:
        data = base64.b64decode(data)
    endpoint = aws_stack.get_local_service_url(command['a'])
    full_url = (endpoint[:-1] if endpoint.endswith('/') else endpoint) + command['p']
    result = function(full_url, data=data, headers=command['h'], verify=False)
    return result
    
    
def setUp():
    document = {
        'first_name': 'Jane',
        'last_name': 'Smith',
        'age': 32,
        'about': 'I like to collect rock albums',
        'interests': ['music']
    }
    resp = add_document(TEST_DOC_ID, document)
    assert_equal(201, resp.status_code,
        msg='Request failed({}): {}'.format(resp.status_code, resp.text))
    
        def test_extract_query_params(self):
        path, query_params = apigateway_listener.extract_query_string_params(
            '/foo/bar?foo=foo&bar=bar&bar=baz'
        )
        self.assertEqual(path, '/foo/bar')
        self.assertEqual(query_params, {'foo': 'foo', 'bar': ['bar', 'baz']})
    
    
# determine requirements
with open('requirements.txt') as f:
    requirements = f.read()
for line in re.split('\n', requirements):
    if line and line[0] == '#' and '#egg=' in line:
        line = re.search(r'#\s*(.*)', line).group(1)
    if line and line[0] != '#':
        if '://' not in line and IGNORED_LIB_MARKER not in line:
            install_requires.append(line)
    
    
def docopt_full_help(docstring, *args, **kwargs):
    try:
        return docopt(docstring, *args, **kwargs)
    except DocoptExit:
        raise SystemExit(docstring)
    
    from compose.config.errors import DependencyError
    
    from .testcases import DockerClientTestCase
from compose.config.errors import ConfigurationError
from compose.const import LABEL_NETWORK
from compose.const import LABEL_PROJECT
from compose.network import Network
    
        def test_format_unicode_error(self):
        message = b'\xec\xa0\x95\xec\x88\x98\xec\xa0\x95'
        output = self.formatter.format(make_log_record(logging.ERROR, message))
        expected = colors.red('ERROR') + ': '
        assert output == '{0}{1}'.format(expected, message.decode('utf-8'))

    
        def test_remove_local_volume(self, mock_client):
        vol = volume.Volume(mock_client, 'foo', 'project')
        vol.remove()
        mock_client.remove_volume.assert_called_once_with('foo_project')
    
        for op in graph.get_operations():
      for x in op.inputs:
        op_to_all[op.name].append(x.name)
      for y in op.outputs:
        output_to_op[y.name].append(op.name)
        op_to_all[op.name].append(y.name)
      if str(op.type) == 'Assign':
        for y in op.outputs:
          for x in op.inputs:
            assign_out_to_in[y.name].append(x.name)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        return split_tokens
    
        self.assertAllEqual(
        tokenization.convert_tokens_to_ids(
            vocab, ['un', '##want', '##ed', 'runn', '##ing']), [7, 4, 5, 8, 9])
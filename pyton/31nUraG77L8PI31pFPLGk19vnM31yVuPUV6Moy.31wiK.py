
        
            # ensure the instance folder exists
    try:
        os.makedirs(app.instance_path)
    except OSError:
        pass
    
    
class AuthActions(object):
    def __init__(self, client):
        self._client = client
    
        auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
        if current_app.config['JSONIFY_PRETTYPRINT_REGULAR'] or current_app.debug:
        indent = 2
        separators = (', ', ': ')
    
    
fig = plt.figure(figsize=(6, 1.25))
    
    
@pytest.mark.parametrize('grps', [
    ['qux'], ['qux', 'quux']])
@pytest.mark.parametrize('vals', [
    [2, 2, 8, 2, 6],
    [pd.Timestamp('2018-01-02'), pd.Timestamp('2018-01-02'),
     pd.Timestamp('2018-01-08'), pd.Timestamp('2018-01-02'),
     pd.Timestamp('2018-01-06')]])
@pytest.mark.parametrize('ties_method,ascending,pct,exp', [
    ('average', True, False, [2., 2., 5., 2., 4.]),
    ('average', True, True, [0.4, 0.4, 1.0, 0.4, 0.8]),
    ('average', False, False, [4., 4., 1., 4., 2.]),
    ('average', False, True, [.8, .8, .2, .8, .4]),
    ('min', True, False, [1., 1., 5., 1., 4.]),
    ('min', True, True, [0.2, 0.2, 1.0, 0.2, 0.8]),
    ('min', False, False, [3., 3., 1., 3., 2.]),
    ('min', False, True, [.6, .6, .2, .6, .4]),
    ('max', True, False, [3., 3., 5., 3., 4.]),
    ('max', True, True, [0.6, 0.6, 1.0, 0.6, 0.8]),
    ('max', False, False, [5., 5., 1., 5., 2.]),
    ('max', False, True, [1., 1., .2, 1., .4]),
    ('first', True, False, [1., 2., 5., 3., 4.]),
    ('first', True, True, [0.2, 0.4, 1.0, 0.6, 0.8]),
    ('first', False, False, [3., 4., 1., 5., 2.]),
    ('first', False, True, [.6, .8, .2, 1., .4]),
    ('dense', True, False, [1., 1., 3., 1., 2.]),
    ('dense', True, True, [1. / 3., 1. / 3., 3. / 3., 1. / 3., 2. / 3.]),
    ('dense', False, False, [3., 3., 1., 3., 2.]),
    ('dense', False, True, [3. / 3., 3. / 3., 1. / 3., 3. / 3., 2. / 3.]),
])
def test_rank_args(grps, vals, ties_method, ascending, pct, exp):
    key = np.repeat(grps, len(vals))
    vals = vals * len(grps)
    df = DataFrame({'key': key, 'val': vals})
    result = df.groupby('key').rank(method=ties_method,
                                    ascending=ascending, pct=pct)
    
        with tm.ensure_clean() as path:
        df.to_json(path, compression=compression)
        with open(path, 'rb') as f:
            s3_resource.Bucket('pandas-test').put_object(Key='test-1', Body=f)
    
    import io
    
        def test_insertion_sort(self):
        insertion_sort = InsertionSort()
    
    
if __name__ == '__main__':
  testutils.main()

    
    if __name__ == '__main__':
  main()

    
    SetParseFn and SetParseFns allow you to set the functions Fire uses for parsing
command line arguments to client code.
'''
    
      def testNonComparable(self):
    with self.assertRaises(ValueError):
      tc.NonComparable() != 2  # pylint: disable=expression-not-assigned
    with self.assertRaises(ValueError):
      tc.NonComparable() == 2  # pylint: disable=expression-not-assigned
    
        Args:
      arg1: arg1_description
      arg2: arg2_description
    '''
    docstring_info = docstrings.parse(docstring)
    expected_docstring_info = DocstringInfo(
        summary='One line description.',
        args=[
            ArgInfo(name='arg1', description='arg1_description'),
            ArgInfo(name='arg2', description='arg2_description'),
        ]
    )
    self.assertEqual(docstring_info, expected_docstring_info)
    
      def testFloatForExpectedInt(self):
    self.assertEqual(
        fire.Fire(tc.MixedDefaults,
                  command=['sum', '--alpha', '2.2', '--beta', '3.0']), 8.2)
    self.assertEqual(
        fire.Fire(
            tc.NumberDefaults,
            command=['integer_reciprocal', '--divisor', '5.0']), 0.2)
    self.assertEqual(
        fire.Fire(tc.NumberDefaults, command=['integer_reciprocal', '4.0']),
        0.25)
    
      def SplitLine(self, line, width):
    '''Splits line into width length chunks.
    
    '''A module for dealing with unknown string and environment encodings.'''
    
    # Usage
# curl -H 'Host: example.com' localhost:8000
# curl -H 'Host: sub.example.com' localhost:8000
# curl -H 'Host: bp.example.com' localhost:8000/question
# curl -H 'Host: bp.example.com' localhost:8000/answer
    
    
def test_http_web_a_is_forwarded(docker_compose, nginxproxy):
    r = nginxproxy.get('http://webA.nginx-proxy/port', allow_redirects=False)
    assert r.status_code == 200
    assert 'answer from port 81\n' == r.text
    
    
raw_version = docker.from_env().version()['Version']
pytestmark = pytest.mark.skipif(
    versiontuple(raw_version) < (1, 13),
    reason='Docker compose syntax v3 requires docker engine v1.13 or later (got %s)' % raw_version)
    
    
##### Testing the handling of X-Forwarded-Ssl #####
    
    def test_X_Forwarded_Ssl_is_generated(docker_compose, nginxproxy):
    r = nginxproxy.get('https://web.nginx-proxy.tld/headers')
    assert r.status_code == 200
    assert 'X-Forwarded-Ssl: on\n' in r.text
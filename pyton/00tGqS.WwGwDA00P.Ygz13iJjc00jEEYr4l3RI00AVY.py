
def check_entry(line_num, segments):
    # START Title
    title = segments[index_title].upper()
    if title.endswith(' API'):
        add_error(line_num, 'Title should not contain 'API'')
    # END Title
    # START Description
    # first character should be capitalized
    char = segments[index_desc][0]
    if char.upper() != char:
        add_error(line_num, 'first character of description is not capitalized')
    # last character should not punctuation
    char = segments[index_desc][-1]
    if char in punctuation:
        add_error(line_num, 'description should not end with {}'.format(char))
    desc_length = len(segments[index_desc])
    if desc_length > 100:
        add_error(line_num, 'description should not exceed 100 characters (currently {})'.format(desc_length))
    # END Description
    # START Auth
    # values should conform to valid options only
    auth = segments[index_auth]
    if auth != 'No' and (not auth.startswith('`') or not auth.endswith('`')):
        add_error(line_num, 'auth value is not enclosed with `backticks`')
    if auth.replace('`', '') not in auth_keys:
        add_error(line_num, '{} is not a valid Auth option'.format(auth))
    # END Auth
    # START HTTPS
    # values should conform to valid options only
    https = segments[index_https]
    if https not in https_keys:
        add_error(line_num, '{} is not a valid HTTPS option'.format(https))
    # END HTTPS
    # START CORS
    # values should conform to valid options only
    cors = segments[index_cors]
    if cors not in cors_keys:
        add_error(line_num, '{} is not a valid CORS option'.format(cors))
    # END CORS
    # START Link
    # url should be wrapped in '[Go!]()' Markdown syntax
    link = segments[index_link]
    if not link.startswith('[Go!](http') or not link.endswith(')'):
        add_error(line_num, 'link syntax should be '[Go!](LINK)'')
    if link in previous_links:
        add_error(line_num, 'duplicate link - entries should only be included in one section')
    else:
        previous_links.append(link)
    # END Link
    
      def testImmutabilityOfArguments(self):
    '''Tests that training schedule generation does not change its arguments.'''
    pretrain_steps = [1, 2, 3]
    train_steps = [5, 5, 5]
    trainer_lib.generate_target_per_step_schedule(pretrain_steps, train_steps)
    self.assertEqual(pretrain_steps, [1, 2, 3])
    self.assertEqual(train_steps, [5, 5, 5])
    
    py_binary(
    name = 'build_pip_package',
    srcs = ['build_pip_package.py'],
    data = ['oss_setup.py'],
    deps = [
        ':all_in_one_components',
    ],
)
    
        target = parser.add_mutually_exclusive_group()
    
        def test_get_gcp_resource_from_methodId(self):
        input_data = 'compute.urlMaps.list'
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertEqual('urlMaps', actual)
        input_data = None
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
        input_data = 666
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
    
        return results

    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
        elif isinstance( candidate, str ) or isinstance( candidate, bytes ):
      new_candidates.append(
        { 'abbr': candidate,
          'word': NewCandidateInsertionText( candidate, text_after_cursor ) } )
  return new_candidates
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    
if __name__ == '__main__':
    main()

    
    
# TwistedResolver produces consistent errors in our test cases so we
# could test the regular and error cases in the same class. However,
# in the error cases it appears that cleanup of socket objects is
# handled asynchronously and occasionally results in 'unclosed socket'
# warnings if not given time to shut down (and there is no way to
# explicitly shut it down). This makes the test flaky, so we do not
# test error cases here.
@skipIfNoNetwork
@unittest.skipIf(twisted is None, 'twisted module not present')
@unittest.skipIf(getattr(twisted, '__version__', '0.0') < '12.1', 'old version of twisted')
class TwistedResolverTest(AsyncTestCase, _ResolverTestMixin):
    def setUp(self):
        super(TwistedResolverTest, self).setUp()
        self.resolver = TwistedResolver()
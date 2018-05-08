
        
        
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
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
class BlackJackHand(Hand):
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        def _find_available_spot(self, vehicle):
        '''Find an available spot where vehicle can fit, or return None'''
        pass
    
    
class RequestStatus(Enum):
    
    
from __future__ import absolute_import, print_function, unicode_literals

        
        containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
def check_format(filename):
    '''
    validates that each line is formatted correctly,
    appending to error list as needed
    '''
    with open(filename) as fp:
        lines = list(line.rstrip() for line in fp)
    check_alphabetical(lines)
    # START Check Entries
    num_in_category = min_entries_per_section + 1
    category = ''
    category_line = 0
    anchor_re = re.compile('###\s\S+')
    for line_num, line in enumerate(lines):
        # check each section for the minimum number of entries
        if line.startswith(anchor):
            if not anchor_re.match(line):
                add_error(line_num, 'section header is not formatted correctly')
            if num_in_category < min_entries_per_section:
                add_error(category_line, '{} section does not have the minimum {} entries (only has {})'.format(
                    category, min_entries_per_section, num_in_category))
            category = line.split(' ')[1]
            category_line = line_num
            num_in_category = 0
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        num_in_category += 1
        segments = line.split('|')[1:-1]
        # START Global
        for segment in segments:
            # every line segment should start and end with exactly 1 space
            if len(segment) - len(segment.lstrip()) != 1 or len(segment) - len(segment.rstrip()) != 1:
                add_error(line_num, 'each segment must start and end with exactly 1 space')
        # END Global
        segments = [seg.strip() for seg in segments]
        check_entry(line_num, segments)
    # END Check Entries
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
    
    
        def reducer(self, key, value):
        '''Sum values for each key.
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}  # key: query, value: node
        self.linked_list = LinkedList()
    
      # Remove old YCM libs if present so that YCM can start.
  old_libs = (
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_core.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_client_support.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*clang*.*') ) )
  for lib in old_libs:
    os.remove( lib )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: in this class's implementation, we ask vimsupport for
    #  the current filetypes and delegate automatically; it is probably,
    #  more efficient, however, to call SubsetForTypes() and reuse
    #  the returned DiagnosticFilter if it will be checked repeatedly.
    filetypes = vimsupport.CurrentFiletypes()
    return self.SubsetForTypes( filetypes ).IsAllowed( diagnostic )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        config['pylons.h'] = r2.lib.helpers
    config['routes.map'] = make_map(config)
    
        `app_conf`
        The application's local configuration. Normally specified in the
        [app:<name>] section of the Paste ini file (where <name> defaults to
        main).
    '''
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'))
    def GET_winners(self, award):
        if award is None:
            abort(404, 'page not found')
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
        def GET_blog(self):
        return self.redirect('https://blog.%s/' %
                             get_domain(subreddit=False, no_www=True))
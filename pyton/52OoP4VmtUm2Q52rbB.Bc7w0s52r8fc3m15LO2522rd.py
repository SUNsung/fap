
        
        FLAGS = flags.FLAGS
    
    # We provide more than 19 entries here in case of boards larger than 19 x 19.
_SGF_COLUMNS = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
_KGS_COLUMNS = 'ABCDEFGHJKLMNOPQRSTUVWXYZ'
    
        self.assertEqual(coords.to_sgf((0, 8)), 'ia')
    self.assertEqual(coords.to_flat(utils_test.BOARD_SIZE, (0, 8)), 8)
    self.assertEqual(coords.to_kgs(utils_test.BOARD_SIZE, (0, 8)), 'J9')
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (0, 8)), (9, 9))
    
    tf.logging.set_verbosity(tf.logging.ERROR)
    
        self.assertEqualNPArray(f[:, :, 1], utils_test.load_board('''
      X.X......
      .X.......''' + EMPTY_ROW * 7))
    
    TEST_SGF = '''(;CA[UTF-8]SZ[9]PB[Murakawa Daisuke]PW[Iyama Yuta]KM[6.5]
           HA[0]RE[W+1.5]GM[1];B[fd];W[cf])'''
    
      def to_sgf(self, use_comments=True):
    assert self.result_string is not None
    pos = self.root.position
    if use_comments:
      comments = self.comments or ['No comments.']
      comments[0] = ('Resign Threshold: %0.3f\n' %
                     self.resign_threshold) + comments[0]
    else:
      comments = []
    return sgf_wrapper.make_sgf(
        self.board_size, pos.recent, self.result_string,
        white_name=os.path.basename(self.network.save_file) or 'Unknown',
        black_name=os.path.basename(self.network.save_file) or 'Unknown',
        comments=comments)
    
        self.assertEqualNPArray(
        lib_tracker1.liberty_cache, lib_tracker2.liberty_cache)
    
    
def get_args(args_list):
    parser = argparse.ArgumentParser(
        description='ansible inventory script reading from serf cluster')
    mutex_group = parser.add_mutually_exclusive_group(required=True)
    help_list = 'list all hosts from serf cluster'
    mutex_group.add_argument('--list', action='store_true', help=help_list)
    help_host = 'display variables for a host'
    mutex_group.add_argument('--host', help=help_host)
    return parser.parse_args(args_list)
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
            url = 'https://api.shippable.com/runs?projectIds=%s&runNumbers=%s' % (project_id, run_number)
    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
    
    def traceIn(self, ruleName, ruleIndex):
        inputSymbol = '%s line=%d:%s' % (self.input.LT(1),
                                         self.getLine(),
                                         self.getCharPositionInLine()
                                         )
        
        BaseRecognizer.traceIn(self, ruleName, ruleIndex, inputSymbol)
    
                                s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
        packages = find_packages('src'),
    package_dir = {'' : 'src'},
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    from .tudou import tudou_download_by_id
from .youku import youku_download_by_vid
from xml.dom.minidom import parseString
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
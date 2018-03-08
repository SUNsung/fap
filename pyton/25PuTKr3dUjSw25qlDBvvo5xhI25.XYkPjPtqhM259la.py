
        
        import numpy as np
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        gc.collect()
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
            clf1 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage='auto').fit(X, y)
        clf2 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage=None).fit(X, y)
    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
        @mock.patch('certbot.display.enhancements.util')
    def test_secure(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call())
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_smtp_failure(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
        test_suite = 'tests',
    
    import ssl
    
    __all__ = ['kuwo_download']
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
            # construct available streams
        if orig_img: self.streams['original'] = {'url': orig_img}
        if twit_img: self.streams['small'] = {'url': twit_img}
    
    
#----------------------------------------------------------------------
def showroom_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    ''''''
    if re.match( r'(\w+)://www.showroom-live.com/([-\w]+)', url):
        room_url_key = match1(url, r'\w+://www.showroom-live.com/([-\w]+)')
        room_id = showroom_get_roomid_by_room_url_key(room_url_key)
        showroom_download_by_room_id(room_id, output_dir, merge,
                                    info_only)
    
        @administrator
    def post(self):
        key = self.get_argument('key', None)
        if key:
            entry = Entry.get(key)
            entry.title = self.get_argument('title')
            entry.body_source = self.get_argument('body_source')
            entry.html = tornado.escape.linkify(
                self.get_argument('body_source'))
        else:
            title = self.get_argument('title')
            slug = unicodedata.normalize('NFKD', title).encode(
                'ascii', 'ignore')
            slug = re.sub(r'[^\w]+', ' ', slug)
            slug = '-'.join(slug.lower().strip().split())
            if not slug:
                slug = 'entry'
            while True:
                existing = db.Query(Entry).filter('slug =', slug).get()
                if not existing or str(existing.key()) == key:
                    break
                slug += '-2'
            entry = Entry(
                author=self.current_user,
                title=title,
                slug=slug,
                body_source=self.get_argument('body_source'),
                html=tornado.escape.linkify(self.get_argument('body_source')),
            )
        entry.put()
        self.redirect('/entry/' + entry.slug)
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
    from tornado.auth import TwitterMixin
from tornado.escape import json_decode, json_encode
from tornado.ioloop import IOLoop
from tornado import gen
from tornado.options import define, options, parse_command_line, parse_config_file
from tornado.web import Application, RequestHandler, authenticated
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    
class TestPool(unittest.TestCase):
    
        def test_bear_eng_localization(self):
        self.assertEqual(self.e.get('bear'), 'bear')
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    print()
    
        def prepareReporting(self):
        rvalue = self._db.insert()
        if rvalue == -1:
            self._tc.setProblem(1)
            self._reporter.prepare()
    
        def not_specification(self):
        raise NotImplementedError()
    
        def simple_event(self, name):
        stats = self.stacked_proxy_safe_get(g, 'stats', None)
        if stats:
            return stats.simple_event(name)

    
    tpm = tp_manager.tp_manager()
    
    from pylons import request
from pylons import tmpl_context as c
from pylons import app_globals as g
    
        @csrf_exempt
    @json_validate(
        signature=VSigned(),
        user=VThrottledLogin(['user', 'passwd']),
    )
    def POST_login(self, responder, user, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            user=user,
        ))
        return handle_login(**kwargs)
    
                if srname:
                c.site = Subreddit._by_name(srname)
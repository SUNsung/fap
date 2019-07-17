
        
            def _real_initialize(self):
        self._conn_id = self._download_json(
            'https://www.vvvvid.it/user/login',
            None, headers=self.geo_verification_headers())['data']['conn_id']
    
        def _download_init_page(self, video_id):
        return self._download_webpage(
            'https://www.vlive.tv/video/init/view',
            video_id, note='Downloading live webpage',
            data=urlencode_postdata({'videoSeq': video_id}),
            headers={
                'Referer': 'https://www.vlive.tv/video/%s' % video_id,
                'Content-Type': 'application/x-www-form-urlencoded'
            })
    
    
class SouthParkIE(MTVServicesInfoExtractor):
    IE_NAME = 'southpark.cc.com'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.cc\.com/(?:clips|(?:full-)?episodes|collections)/(?P<id>.+?)(\?|#|$))'
    
        _TESTS = [{
        'url': 'http://www.cbs.com/shows/garth-brooks/video/_u7W953k6la293J7EPTd9oHkSPs6Xn6_/connect-chat-feat-garth-brooks/',
        'info_dict': {
            'id': '_u7W953k6la293J7EPTd9oHkSPs6Xn6_',
            'ext': 'mp4',
            'title': 'Connect Chat feat. Garth Brooks',
            'description': 'Connect with country music singer Garth Brooks, as he chats with fans on Wednesday November 27, 2013. Be sure to tune in to Garth Brooks: Live from Las Vegas, Friday November 29, at 9/8c on CBS!',
            'duration': 1495,
            'timestamp': 1385585425,
            'upload_date': '20131127',
            'uploader': 'CBSI-NEW',
        },
        'params': {
            # m3u8 download
            'skip_download': True,
        },
        '_skip': 'Blocked outside the US',
    }, {
        'url': 'http://colbertlateshow.com/video/8GmB0oY0McANFvp2aEffk9jZZZ2YyXxy/the-colbeard/',
        'only_matching': True,
    }, {
        'url': 'http://www.colbertlateshow.com/podcasts/dYSwjqPs_X1tvbV_P2FcPWRa_qT6akTC/in-the-bad-room-with-stephen/',
        'only_matching': True,
    }]
    
            return {
            'id': video_id,
            'title': title,
            'formats': formats,
            'thumbnails': thumbnails,
            'description': video_data.get('short_description'),
            'like_count': int_or_none(video_data.get('like_count')),
            'timestamp': parse_iso8601(video_data.get('released_at')),
            'series': series,
            'episode': episode,
            'season': season,
            'season_id': season_id,
            'season_number': season_number,
            'episode_number': episode_number,
            'subtitles': subtitles,
            'age_limit': parse_age_limit(video_data.get('rating')),
        }

    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        @cached_property
    def num_pages(self):
        '''Return the total number of pages.'''
        if self.count == 0 and not self.allow_empty_first_page:
            return 0
        hits = max(1, self.count - self.orphans)
        return ceil(hits / self.per_page)
    
        @override_settings(AUTH_USER_MODEL='auth_tests.IsActiveTestUser1')
    def test_is_active_field_default(self):
        '''
        tests that the default value for is_active is provided
        '''
        UserModel = get_user_model()
        user = UserModel(username='foo')
        self.assertIs(user.is_active, True)
        # you can set the attribute - but it will not save
        user.is_active = False
        # there should be no problem saving - but the attribute is not saved
        user.save()
        user_fetched = UserModel._default_manager.get(pk=user.pk)
        # the attribute is always true for newly retrieved instance
        self.assertIs(user_fetched.is_active, True)
    
    from django.db.models.fields import DecimalField, FloatField, IntegerField
from django.db.models.functions import Cast
    
        def test_invalid_pages_per_range(self):
        with self.assertRaisesMessage(ValueError, 'pages_per_range must be None or a positive integer'):
            BrinIndex(fields=['title'], name='test_title_brin', pages_per_range=0)
    
              # We can also increment through all of the fields
          #  attached to this feature.
          for field in feature:
              # Get the name of the field (e.g. 'description')
              nm = field.name
    
    from django.contrib.gis.gdal.base import GDALBase
from django.contrib.gis.gdal.error import GDALException
from django.contrib.gis.gdal.prototypes import ds as vcapi, raster as rcapi
from django.utils.encoding import force_bytes, force_str
    
        @property
    def type_name(self):
        'Return the OGR field type name for this Field.'
        return capi.get_field_type_name(self.type)
    
        def __init__(self, layer_ptr, ds):
        '''
        Initialize on an OGR C pointer to the Layer and the `DataSource` object
        that owns this layer.  The `DataSource` object is required so that a
        reference to it is kept with this Layer.  This prevents garbage
        collection of the `DataSource` while this Layer is still active.
        '''
        if not layer_ptr:
            raise GDALException('Cannot create Layer, invalid pointer given')
        self.ptr = layer_ptr
        self._ds = ds
        self._ldefn = capi.get_layer_defn(self._ptr)
        # Does the Layer support random reading?
        self._random_read = self.test_capability(b'RandomRead')
    
                    # Update the previous file
                if _filename:
                    with open(_filename, 'w') as _file:
                        _file.write(_contents)
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
        def download_request(self, request, spider):
        p = urlparse_cached(request)
        scheme = 'https' if request.meta.get('is_secure') else 'http'
        bucket = p.hostname
        path = p.path + '?' + p.query if p.query else p.path
        url = '%s://%s.s3.amazonaws.com%s' % (scheme, bucket, path)
        if self.anon:
            request = request.replace(url=url)
        elif self._signer is not None:
            import botocore.awsrequest
            awsrequest = botocore.awsrequest.AWSRequest(
                method=request.method,
                url='%s://s3.amazonaws.com/%s%s' % (scheme, bucket, path),
                headers=request.headers.to_unicode_dict(),
                data=request.body)
            self._signer.add_auth(awsrequest)
            request = request.replace(
                url=url, headers=awsrequest.headers.items())
        else:
            signed_headers = self.conn.make_request(
                    method=request.method,
                    bucket=bucket,
                    key=unquote(p.path),
                    query_args=unquote(p.query),
                    headers=request.headers,
                    data=request.body)
            request = request.replace(url=url, headers=signed_headers)
        return self._download_http(request, spider)

    
            body = tar_file.extractfile(tar_file.members[0]).read()
        respcls = responsetypes.from_args(filename=tar_file.members[0].name, body=body)
        return response.replace(body=body, cls=respcls)
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        '''
    Has the following members
    - nS: number of states
    - nA: number of actions
    - P: transitions (*)
    - isd: initial state distribution (**)
    
            di, dj = self.locs[dest_idx]
        out[1 + di][2 * dj + 1] = utils.colorize(out[1 + di][2 * dj + 1], 'magenta')
        outfile.write('\n'.join([''.join(row) for row in out]) + '\n')
        if self.lastaction is not None:
            outfile.write('  ({})\n'.format(['South', 'North', 'East', 'West', 'Pickup', 'Dropoff'][self.lastaction]))
        else: outfile.write('\n')
    
        def _calculate_transition_prob(self, current, delta):
        '''
        Determine the outcome for an action. Transition Prob is always 1.0.
        :param current: Current position on the grid as (row, col)
        :param delta: Change in position for transition
        :return: (1.0, new_state, reward, done)
        '''
        new_position = np.array(current) + np.array(delta)
        new_position = self._limit_coordinates(new_position).astype(int)
        new_state = np.ravel_multi_index(tuple(new_position), self.shape)
        if self._cliff[tuple(new_position)]:
            return [(1.0, self.start_state_index, -100, False)]
    
        def render(self, mode='human'):
        from gym.envs.classic_control import rendering
    
        def mock_login(self, name='test', cookie='cookievaluehere'):
        '''Context manager for mocking login.
    
        def test_mixed_experiment_disable(self, num_users=2000):
        '''Test a combination of loggedin/out users disables properly.'''
        self.assert_no_experiment(
            (
                self.get_loggedin_users(num_users / 2) +
                self.get_loggedout_users(num_users / 2)
            ),
            experiment={
                'loggedin': True,
                'loggedout': True,
                'variants': {'larger': 5, 'smaller': 10},
                'enabled': False,
            }
        )

    
    import unittest
    
            width = 108
        url = self.provider.resize_image(image, width, max_ratio=max_ratio)
        self.assertEqual(url,
                ('https://example.com/a.jpg?fit=crop&crop=%s&arh=%s&w=%s'
                    % (crop, max_ratio, width)))
    
    import unittest
    
        def test_narwhal_detector(self):
        user_agent = 'narwhal-iOS/2306 by det0ur'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'],
                         NarwhalForRedditDetector.name)
    
        def test_different_paths(self):
        u = UrlParser('http://example.com')
        u2 = UrlParser('http://example.com/a')
        u3 = UrlParser('http://example.com/b')
        self.assertNotEquals(u, u2)
        self.assertNotEquals(u2, u3)
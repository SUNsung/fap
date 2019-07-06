
        
        \tDid you mean `build`?
'''
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
            pemfile = '/etc/ssl/certs/CA.pem'
        new_certfile = '/usr/local/share/ca-certificates/CA.crt'
        if not os.path.exists(pemfile) or not CertUtil.file_is_same(certfile, new_certfile):
            if os.system('cp '%s' '%s' && update-ca-certificates' % (certfile, new_certfile)) != 0:
                xlog.warning('install root certificate failed, Please run as administrator/root/sudo')
    
    from front_base.openssl_wrap import SSLContext
from front_base.connect_creator import ConnectCreator
from front_base.host_manager import HostManagerBase
import front_base.check_ip
from config import config
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    
    
def run(cmd):
    cmd = shlex.split(cmd)
    
            total = sum(self._freq_counter)
        if total < 0.01:
            confidence = 0.0
        else:
            confidence = ((self._freq_counter[3] - self._freq_counter[1] * 20.0)
                          / total)
        if confidence < 0.0:
            confidence = 0.0
        # lower the confidence of latin1 so that other more accurate
        # detector can take priority.
        confidence = confidence * 0.73
        return confidence

    
        def feed(self, byte_str):
        byte_str = self.filter_with_english_letters(byte_str)
        for c in byte_str:
            char_class = Latin1_CharToClass[c]
            freq = Latin1ClassModel[(self._last_char_class * CLASS_NUM)
                                    + char_class]
            if freq == 0:
                self._state = ProbingState.NOT_ME
                break
            self._freq_counter[freq] += 1
            self._last_char_class = char_class
    
        def reset(self):
        super(MultiByteCharSetProber, self).reset()
        if self.coding_sm:
            self.coding_sm.reset()
        if self.distribution_analyzer:
            self.distribution_analyzer.reset()
        self._last_char = [0, 0]
    
        def reset(self):
        super(MultiByteCharSetProber, self).reset()
        if self.coding_sm:
            self.coding_sm.reset()
        if self.distribution_analyzer:
            self.distribution_analyzer.reset()
        self._last_char = [0, 0]
    
            # If we have seen non-ASCII, return the best that met MINIMUM_THRESHOLD
        elif self._input_state == InputState.HIGH_BYTE:
            prober_confidence = None
            max_prober_confidence = 0.0
            max_prober = None
            for prober in self._charset_probers:
                if not prober:
                    continue
                prober_confidence = prober.get_confidence()
                if prober_confidence > max_prober_confidence:
                    max_prober_confidence = prober_confidence
                    max_prober = prober
            if max_prober and (max_prober_confidence > self.MINIMUM_THRESHOLD):
                charset_name = max_prober.charset_name
                lower_charset_name = max_prober.charset_name.lower()
                confidence = max_prober.get_confidence()
                # Use Windows encoding name instead of ISO-8859 if we saw any
                # extra Windows-specific bytes
                if lower_charset_name.startswith('iso-8859'):
                    if self._has_win_bytes:
                        charset_name = self.ISO_WIN_MAP.get(lower_charset_name,
                                                            charset_name)
                self.result = {'encoding': charset_name,
                               'confidence': confidence,
                               'language': max_prober.language}
    
        def test_prefetch_related_excluding_instance_from_original_queryset(self):
        '''
        Regression test for https://github.com/encode/django-rest-framework/issues/4661
        '''
        view = UserUpdate.as_view()
        pk = self.user.pk
        groups_pk = self.groups[0].pk
        request = factory.put('/', {'username': 'exclude', 'groups': [groups_pk]}, format='json')
        response = view(request, pk=pk)
        assert User.objects.get(pk=pk).groups.count() == 1
        expected = {
            'id': pk,
            'username': 'exclude',
            'groups': [1],
            'email': 'tom@example.com'
        }
        assert response.data == expected

    
            self.expected_response_data = {
            'char': [{
                'message': 'This field is required.',
                'code': 'required',
            }],
            'integer': [{
                'message': 'This field is required.',
                'code': 'required'
            }],
        }
    
        def is_allowed_version(self, version):
        if not self.allowed_versions:
            return True
        return ((version is not None and version == self.default_version) or
                (version in self.allowed_versions))
    
    
@override_settings(ROOT_URLCONF='tests.browsable_api.no_auth_urls')
class NoDropdownWithoutAuthTests(TestCase):
    '''Tests correct dropdown behaviour with Auth views NOT enabled.'''
    def setUp(self):
        self.client = APIClient(enforce_csrf_checks=True)
        self.username = 'john'
        self.email = 'lennon@thebeatles.com'
        self.password = 'password'
        self.user = User.objects.create_user(
            self.username,
            self.email,
            self.password
        )
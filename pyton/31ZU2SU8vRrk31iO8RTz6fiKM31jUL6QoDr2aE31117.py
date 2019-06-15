
        
            def _hash_function(self, key):
        return key % self.size
    
    
class Cache(object):
    
            self.assertTrue(refund_transaction.called)
        self.assertTrue(promotion_log_add.called)
        queries_unset.assert_called_once_with(self.campaign)
        emailer_refunded_promo.assert_called_once_with(self.link)
        self.assertTrue(success)
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_different_queries(self):
        u = UrlParser('http://example.com/')
        u2 = UrlParser('http://example.com/?foo')
        u3 = UrlParser('http://example.com/?foo=bar')
        self.assertNotEquals(u, u2)
        self.assertNotEquals(u2, u3)
    
            self.assertEqual(response.status_code, status.HTTP_400_BAD_REQUEST)
        self.assertTrue('non_field_errors' in response.data)
    
        def __str__(self):
        global str_called
        str_called = True
        return 'An example'
    
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

    
            # data_1
        serializer = Serializer(instance, data=input_data_1, partial=True)
        assert serializer.is_valid()
        assert len(serializer.validated_data) == 1
        assert serializer.validated_data['extra_field'] == 2
        assert serializer.errors == {}
    
    
class FileUploadParser(BaseParser):
    '''
    Parser for file upload data.
    '''
    media_type = '*/*'
    errors = {
        'unhandled': 'FileUpload parse error - none of upload handlers can handle the stream',
        'no_filename': 'Missing filename. Request should include a Content-Disposition header with a filename parameter.',
    }
    
        def __init__(self, detail=None, code=None, available_renderers=None):
        self.available_renderers = available_renderers
        super().__init__(detail, code)
    
    
class EUCTWDistributionAnalysis(CharDistributionAnalysis):
    def __init__(self):
        CharDistributionAnalysis.__init__(self)
        self._mCharToFreqOrder = EUCTWCharToFreqOrder
        self._mTableSize = EUCTW_TABLE_SIZE
        self._mTypicalDistributionRatio = EUCTW_TYPICAL_DISTRIBUTION_RATIO
    
        def get_confidence(self):
        st = self.get_state()
        if st == constants.eFoundIt:
            return 0.99
        elif st == constants.eNotMe:
            return 0.01
        bestConf = 0.0
        self._mBestGuessProber = None
        for prober in self._mProbers:
            if not prober:
                continue
            if not prober.active:
                if constants._debug:
                    sys.stderr.write(prober.get_charset_name()
                                     + ' not active\n')
                continue
            cf = prober.get_confidence()
            if constants._debug:
                sys.stderr.write('%s confidence = %s\n' %
                                 (prober.get_charset_name(), cf))
            if bestConf < cf:
                bestConf = cf
                self._mBestGuessProber = prober
        if not self._mBestGuessProber:
            return 0.0
        return bestConf
#        else:
#            self._mBestGuessProber = self._mProbers[0]
#            return self._mBestGuessProber.get_confidence()

    
        def get_charset_name(self):
        return None
    
        def next_state(self, c):
        # for each byte we get its class
        # if it is first byte, we also get byte length
        # PY3K: aBuf is a byte stream, so c is an int, not a byte
        byteCls = self._mModel['classTable'][wrap_ord(c)]
        if self._mCurrentState == eStart:
            self._mCurrentBytePos = 0
            self._mCurrentCharLen = self._mModel['charLenTable'][byteCls]
        # from byte's class and stateTable, we get its next state
        curr_state = (self._mCurrentState * self._mModel['classFactor']
                      + byteCls)
        self._mCurrentState = self._mModel['stateTable'][curr_state]
        self._mCurrentBytePos += 1
        return self._mCurrentState
    
    # 128  --> 0.79
# 256  --> 0.92
# 512  --> 0.986
# 1024 --> 0.99944
# 2048 --> 0.99999
#
# Idea Distribution Ratio = 0.98653 / (1-0.98653) = 73.24
# Random Distribution Ration = 512 / (2350-512) = 0.279.
# 
# Typical Distribution Ratio  
    
    GB2312_TABLE_SIZE = 3760
    
    # 0 : illegal
# 1 : very unlikely
# 2 : normal
# 3 : very likely
Latin1ClassModel = (
    # UDF OTH ASC ASS ACV ACO ASV ASO
    0,  0,  0,  0,  0,  0,  0,  0,  # UDF
    0,  3,  3,  3,  3,  3,  3,  3,  # OTH
    0,  3,  3,  3,  3,  3,  3,  3,  # ASC
    0,  3,  3,  3,  1,  1,  3,  3,  # ASS
    0,  3,  3,  3,  1,  2,  1,  2,  # ACV
    0,  3,  3,  3,  3,  3,  3,  3,  # ACO
    0,  3,  1,  3,  1,  1,  1,  3,  # ASV
    0,  3,  1,  3,  1,  1,  3,  3,  # ASO
)
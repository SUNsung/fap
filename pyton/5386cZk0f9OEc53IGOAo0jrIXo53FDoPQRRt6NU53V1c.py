
        
        # 128  --> 0.77094
# 256  --> 0.85710
# 512  --> 0.92635
# 1024 --> 0.97130
# 2048 --> 0.99431
#
# Ideal Distribution Ratio = 0.92635 / (1-0.92635) = 12.58
# Random Distribution Ration = 512 / (2965+62+83+86-512) = 0.191
#
# Typical Distribution Ratio, 25% of IDR
    
    win1250HungarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 28, 40, 54, 45, 32, 50, 49, 38, 39, 53, 36, 41, 34, 35, 47,
 46, 72, 43, 33, 37, 57, 48, 64, 68, 55, 52,253,253,253,253,253,
253,  2, 18, 26, 17,  1, 27, 12, 20,  9, 22,  7,  6, 13,  4,  8,
 23, 67, 10,  5,  3, 21, 19, 65, 62, 16, 11,253,253,253,253,253,
161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,
177,178,179,180, 78,181, 69,182,183,184,185,186,187,188,189,190,
191,192,193,194,195,196,197, 76,198,199,200,201,202,203,204,205,
 81,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,
221, 51, 83,222, 80,223,224,225,226, 44,227,228,229, 61,230,231,
232,233,234, 58,235, 66, 59,236,237,238, 60, 70, 63,239,240,241,
 84, 14, 75,242, 71, 82,243, 73,244, 15, 85, 79, 86, 30, 77, 87,
245,246,247, 25, 74, 42, 24,248,249,250, 31, 56, 29,251,252,253,
)
    
            self._last_char[0] = byte_str[-1]
    
    SJIS_CLS = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    2,2,2,2,2,2,2,2,  # 40 - 47
    2,2,2,2,2,2,2,2,  # 48 - 4f
    2,2,2,2,2,2,2,2,  # 50 - 57
    2,2,2,2,2,2,2,2,  # 58 - 5f
    2,2,2,2,2,2,2,2,  # 60 - 67
    2,2,2,2,2,2,2,2,  # 68 - 6f
    2,2,2,2,2,2,2,2,  # 70 - 77
    2,2,2,2,2,2,2,1,  # 78 - 7f
    3,3,3,3,3,2,2,3,  # 80 - 87
    3,3,3,3,3,3,3,3,  # 88 - 8f
    3,3,3,3,3,3,3,3,  # 90 - 97
    3,3,3,3,3,3,3,3,  # 98 - 9f
    #0xa0 is illegal in sjis encoding, but some pages does
    #contain such byte. We need to be more error forgiven.
    2,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,2,2,2,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,2,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    3,3,3,3,3,3,3,3,  # e0 - e7
    3,3,3,3,3,4,4,4,  # e8 - ef
    3,3,3,3,3,3,3,3,  # f0 - f7
    3,3,3,3,3,0,0,0)  # f8 - ff
    
    from .mbcharsetprober import MultiByteCharSetProber
from .codingstatemachine import CodingStateMachine
from .chardistribution import SJISDistributionAnalysis
from .jpcntx import SJISContextAnalysis
from .mbcssm import SJIS_SM_MODEL
from .enums import ProbingState, MachineState
    
        def test_del_msg_failure_with_null_msg(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id
        message.del_on_recipient = False
    
        @patch('r2.lib.authorize.interaction.Bid._new')
    def test_auth_freebie_transaction(self, _new):
        '''Test auth_freebie_transaction'''
        link = Mock(spec=Link)
        link._id = 99
        amount = 100
        campaign_id = 99
    
    import unittest
    
        def test_filtered_modules_do_not_include_filtered_sources(self):
        test_files = ['foo.js', 'bar.js']
        filtered_files = ['baz.js', 'qux.js']
        all_files = test_files + filtered_files
        filter_module = TestModule('filter_module', *filtered_files)
        test_module = TestModule('test_module', filter_module=filter_module, *all_files)
        self.assertEqual(test_module.build(), concat_sources(test_files))

    
        def test_ftue_nocreate(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {}
        loid = LoId.load(request, context, create=False)
        self.assertFalse(loid.new)
        self.assertFalse(loid.serializable)
        loid.save()
        self.assertFalse(bool(context.cookies.add.called))
    
            post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg/b''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')

    
    
    
        @patch('r2.models.Subreddit.user_subreddits')
    def test_multi_logged_in(self, user_subreddits):
        user_subreddits.return_value = subscriptions
        multi = MultiReddit(path='/user/test/m/multi_test', srs=multi_subreddits)
        srnames = srnames_from_site(self.logged_in, multi)
    
        def test_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://example.com/a.jpg?w=%d' % width)
    
    from r2.lib.providers.image_resizing.unsplashit import UnsplashitImageResizingProvider
    
        def test_invalid_comment(self):
        testcase = '<!--[if IE 6]>WHAT YEAR IS IT?<![endif]-->'
        self.assertFragmentRaises(testcase, SoupUnexpectedCommentError)
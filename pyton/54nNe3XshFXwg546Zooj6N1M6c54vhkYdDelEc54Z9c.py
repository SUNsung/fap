
        
            def send_friend_request(self, friend_id):
        pass
    
        def __init__(self, level, row, spot_number, spot_size, vehicle_size):
        self.level = level
        self.row = row
        self.spot_number = spot_number
        self.spot_size = spot_size
        self.vehicle_size = vehicle_size
        self.vehicle = None
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
            Transform key and value to the form:
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    class Iqiyi(VideoExtractor):
    name = '爱奇艺 (Iqiyi)'
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        stream_types = [  # we do now know for now, as we have to check the
                      # output from the API
    ]
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
        @classmethod
    def checksum(cls, sha1_str):
        if len(sha1_str) != 41:
            return False
        if not re.match(r'[0-9A-Za-z]{41}', sha1_str):
            return False
        sha1 = sha1_str[:-1]
        if (15 & sum([int(char, 16) for char in sha1])) == int(sha1_str[-1], 16):
            return True
        return False
    
        返回聚类中心及聚类结果
    '''
    # 样本数
    n = len(data)
    
    from nltk.tokenize import RegexpTokenizer
from nltk import PorterStemmer
    
    
def linear_dense(x, n_unit, name=None, reuse=None):
    '''线性全连接层
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit]
    
    
def multi_highway_conv2d(x, kernel_size, n_layer,
                         act_fn=relu,
                         strides=1,
                         padding='SAME',
                         carry_bias=-1.0,
                         name=None):
    '''多层 highway_conv2d'''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * n_layer
    
            # The format of the exponent is inherited from the platform C library.
        # Known cases are 'e-007' (Windows) and 'e-07' (not Windows).  Since
        # we're only showing 11 digits, and the 12th isn't close to 5, the
        # rest of the output should be platform-independent.
        self.assertRegex(repr(eval(s)), '-3.2171603427[0-9]*e-0+7')
    
        def loads(self, buf, **kwds):
        class PersUnpickler(self.unpickler):
            def persistent_load(subself, obj):
                return self.persistent_load(obj)
        f = io.BytesIO(buf)
        u = PersUnpickler(f, **kwds)
        return u.load()
    
        This handler is not appropriate for use under Windows, because
    under Windows open files cannot be moved or renamed - logging
    opens the files with exclusive locks - and so there is no need
    for such a handler. Furthermore, ST_INO is not supported under
    Windows; stat always returns zero for this value.
    
        _dispatch[_collections.UserList.__repr__] = _pprint_user_list
    
        if args:
        vals = []
        for name in args:
            vals.append(_config_vars.get(name))
        return vals
    else:
        return _config_vars
    
    def __dict_replace(s, d):
    '''Replace substrings of a string using a dictionary.'''
    for key, value in d.items():
        s = s.replace(key, value)
    return s
    
        def test_mro_entry_none(self):
        tested = []
        class A: ...
        class B: ...
        class C:
            def __mro_entries__(self, bases):
                tested.append(bases)
                return ()
        c = C()
        self.assertEqual(tested, [])
        class D(A, c, B): ...
        self.assertEqual(tested[-1], (A, c, B))
        self.assertEqual(D.__bases__, (A, B))
        self.assertEqual(D.__orig_bases__, (A, c, B))
        self.assertEqual(D.__mro__, (D, A, B, object))
        class E(c): ...
        self.assertEqual(tested[-1], (c,))
        self.assertEqual(E.__bases__, (object,))
        self.assertEqual(E.__orig_bases__, (c,))
        self.assertEqual(E.__mro__, (E, object))
    
    
def test_iloc_nonunique():
    s = Series([0, 1, 2], index=[0, 1, 0])
    assert s.iloc[2] == 2

    
    
def test_get_indexer_nearest():
    midx = MultiIndex.from_tuples([('a', 1), ('b', 2)])
    msg = 'method='nearest' not implemented yet for MultiIndex; see GitHub issue 9365'
    with pytest.raises(NotImplementedError, match=msg):
        midx.get_indexer(['a'], method='nearest')
    msg = 'tolerance not implemented yet for MultiIndex'
    with pytest.raises(NotImplementedError, match=msg):
        midx.get_indexer(['a'], method='pad', tolerance=2)
    
            with tm.assert_produces_warning(FutureWarning, check_stacklevel=False):
            # GH#22535
            result = other - rng
            tm.assert_index_equal(result, -expected)
    
    STOP_WORDS = frozenset(('a', 'an', 'and', 'are', 'as', 'at', 'be', 'by', 'can',
                        'for', 'from', 'have', 'if', 'in', 'is', 'it', 'may',
                        'not', 'of', 'on', 'or', 'tbd', 'that', 'the', 'this',
                        'to', 'us', 'we', 'when', 'will', 'with', 'yet',
                        'you', 'your', '的', '了', '和'))
    
    
def get_top_states(t_state_v, K=4):
    return sorted(t_state_v, key=t_state_v.__getitem__, reverse=True)[:K]
    
    print('='*40)
print('4. 词性标注')
print('-'*40)
    
    default_encoding='utf-8'

        
        
# I have written my code naively same as definition of primitive root
# however every time I run this program, memory exceeded...
# so I used 4.80 Algorithm in Handbook of Applied Cryptography(CRC Press, ISBN : 0-8493-8523-7, October 1996)
# and it seems to run nicely!
def primitiveRoot(p_val):
    print('Generating primitive root of p')
    while True:
        g = random.randrange(3,p_val)
        if pow(g, 2, p_val) == 1:
            continue
        if pow(g, p_val, p_val) == 1:
            continue
        return g
    
            while self.values[new_key] is not None and self.values[new_key] != key:
            new_key = self.__hash_double_function(key, data, i) if \
                self.balanced_factor() >= self.lim_charge else None
            if new_key is None: break 
            else: i += 1
    
        def _set_value(self, key, data):
        self.values[key] = data
        self._keys[key] = data
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
        def test_additive(self):
        # Additive
        self.check_tokenize('x = 1 - y + 15 - 1 + 0x124 + z + a[5]', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '1'           (1, 4) (1, 5)
    OP         '-'           (1, 6) (1, 7)
    NAME       'y'           (1, 8) (1, 9)
    OP         '+'           (1, 10) (1, 11)
    NUMBER     '15'          (1, 12) (1, 14)
    OP         '-'           (1, 15) (1, 16)
    NUMBER     '1'           (1, 17) (1, 18)
    OP         '+'           (1, 19) (1, 20)
    NUMBER     '0x124'       (1, 21) (1, 26)
    OP         '+'           (1, 27) (1, 28)
    NAME       'z'           (1, 29) (1, 30)
    OP         '+'           (1, 31) (1, 32)
    NAME       'a'           (1, 33) (1, 34)
    OP         '['           (1, 34) (1, 35)
    NUMBER     '5'           (1, 35) (1, 36)
    OP         ']'           (1, 36) (1, 37)
    ''')
    
        def _default_update(self):
        def f():
            '''This is a test'''
            pass
        f.attr = 'This is also a test'
        f.__wrapped__ = 'This is still a bald faced lie'
        @functools.wraps(f)
        def wrapper():
            pass
        return wrapper, f
    
    
def getsize(filename):
    '''Return the size of a file, reported by os.stat().'''
    return os.stat(filename).st_size
    
    import pickle
import sqlite3
from collections import namedtuple
    
    import getopt
import os
import platform
import sys
from .version import script_name, __version__
from .util import git, log
    
    from ..common import *
from ..extractor import VideoExtractor
import xml.etree.ElementTree as ET
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
        aids = matchall(content, bilibili_embed_patterns)
    for aid in aids:
        found = True
        url = 'http://www.bilibili.com/video/av%s/' % aid
        bilibili_download(url, output_dir=output_dir, merge=merge, info_only=info_only)
    
        title = match1(html, r'&title=([^&]+)')
    
                    code = hit.group(1)
                base = hit.group(2)
                size = hit.group(3)
                names = hit.group(4).split('|')
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
            for blk in blocks:
            if re_han_internal.match(blk):
                for word in cut_blk(blk):
                    yield word
            else:
                tmp = re_skip_internal.split(blk)
                for x in tmp:
                    if re_skip_internal.match(x):
                        yield pair(x, 'x')
                    else:
                        for xx in x:
                            if re_num.match(xx):
                                yield pair(xx, 'm')
                            elif re_eng.match(x):
                                yield pair(xx, 'eng')
                            else:
                                yield pair(xx, 'x')
    
    content = open(file_name, 'rb').read()
    
    
test_contents = [
    '这是一个伸手不见五指的黑夜。我叫孙悟空，我爱北京，我爱Python和C++。',
    '我不喜欢日本和服。',
    '雷猴回归人间。',
    '工信处女干事每月经过下属科室都要亲口交代24口交换机等技术性器件的安装工作',
    '我需要廉租房',
    '永和服装饰品有限公司',
    '我爱北京天安门',
    'abc',
    '隐马尔可夫',
    '雷猴是个好网站',
    '“Microsoft”一词由“MICROcomputer（微型计算机）”和“SOFTware（软件）”两部分组成',
    '草泥马和欺实马是今年的流行词汇',
    '伊藤洋华堂总府店',
    '中国科学院计算技术研究所',
    '罗密欧与朱丽叶',
    '我购买了道具和服装',
    'PS: 我觉得开源有一个好处，就是能够敦促自己不断改进，避免敞帚自珍',
    '湖北省石首市',
    '湖北省十堰市',
    '总经理完成了这件事情',
    '电脑修好了',
    '做好了这件事情就一了百了了',
    '人们审美的观点是不同的',
    '我们买了一个美的空调',
    '线程初始化时我们要注意',
    '一个分子是由好多原子组织成的',
    '祝你马到功成',
    '他掉进了无底洞里',
    '中国的首都是北京',
    '孙君意',
    '外交部发言人马朝旭',
    '领导人会议和第四届东亚峰会',
    '在过去的这五年',
    '还需要很长的路要走',
    '60周年首都阅兵',
    '你好人们审美的观点是不同的',
    '买水果然后来世博园',
    '买水果然后去世博园',
    '但是后来我才知道你是对的',
    '存在即合理',
    '的的的的的在的的的的就以和和和',
    'I love你，不以为耻，反以为rong',
    '因',
    '',
    'hello你好人们审美的观点是不同的',
    '很好但主要是基于网页形式',
    'hello你好人们审美的观点是不同的',
    '为什么我不能拥有想要的生活',
    '后来我才',
    '此次来中国是为了',
    '使用了它就可以解决一些问题',
    ',使用了它就可以解决一些问题',
    '其实使用了它就可以解决一些问题',
    '好人使用了它就可以解决一些问题',
    '是因为和国家',
    '老年搜索还支持',
    '干脆就把那部蒙人的闲法给废了拉倒！RT @laoshipukong : 27日，全国人大常委会第三次审议侵权责任法草案，删除了有关医疗损害责任“举证倒置”的规定。在医患纠纷中本已处于弱势地位的消费者由此将陷入万劫不复的境地。 ',
    '大',
    '',
    '他说的确实在理',
    '长春市长春节讲话',
    '结婚的和尚未结婚的',
    '结合成分子时',
    '旅游和服务是最好的',
    '这件事情的确是我的错',
    '供大家参考指正',
    '哈尔滨政府公布塌桥原因',
    '我在机场入口处',
    '邢永臣摄影报道',
    'BP神经网络如何训练才能在分类时增加区分度？',
    '南京市长江大桥',
    '应一些使用者的建议，也为了便于利用NiuTrans用于SMT研究',
    '长春市长春药店',
    '邓颖超生前最喜欢的衣服',
    '胡锦涛是热爱世界和平的政治局常委',
    '程序员祝海林和朱会震是在孙健的左面和右面, 范凯在最右面.再往左是李松洪',
    '一次性交多少钱',
    '两块五一套，三块八一斤，四块七一本，五块六一条',
    '小和尚留了一个像大和尚一样的和尚头',
    '我是中华人民共和国公民;我爸爸是共和党党员; 地铁和平门站',
    '张晓梅去人民医院做了个B超然后去买了件T恤',
    'AT&T是一件不错的公司，给你发offer了吗？',
    'C++和c#是什么关系？11+122=133，是吗？PI=3.14159',
    '你认识那个和主席握手的的哥吗？他开一辆黑色的士。',
    '枪杆子中出政权']
    
    from __future__ import unicode_literals
import sys
sys.path.append('../')
    
    
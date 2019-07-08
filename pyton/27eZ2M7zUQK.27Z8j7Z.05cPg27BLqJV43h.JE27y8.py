
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
        # close and remove the temporary database
    os.close(db_fd)
    os.unlink(db_path)
    
    
@pytest.mark.parametrize(
    ('username', 'password', 'message'),
    (
        ('', '', b'Username is required.'),
        ('a', '', b'Password is required.'),
        ('test', 'test', b'already registered'),
    ),
)
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register', data={'username': username, 'password': password}
    )
    assert message in response.data
    
    
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        app.url_map.converters['list'] = ListConverter
    
        This makes it safe to embed such strings in any place in HTML with the
    notable exception of double quoted attributes.  In that case single
    quote your attributes or HTML escape it in addition.
    
        def start_requests(self):
        url = self.benchurl
        if self.latency is not None:
            url += '?latency={0}'.format(self.latency)
    
        def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
            'A TLS/SSL connection established with [this method] may
         understand the SSLv3, TLSv1, TLSv1.1 and TLSv1.2 protocols.'
        '''
    
        Other objects like lists, arrays, and DataFrames are just passed through.
    
    
from .pandas_vb_common import setup  # noqa: F401

    
    from __future__ import absolute_import, unicode_literals
import sys
from operator import itemgetter
from collections import defaultdict
import jieba.posseg
from .tfidf import KeywordExtractor
from .._compat import *
    
    seg_list = jieba.cut_for_search('小明硕士毕业于中国科学院计算所，后在日本京都大学深造')  # 搜索引擎模式
print(', '.join(seg_list))
    
    tags = jieba.analyse.extract_tags(content, topK=topK)
    
    import jieba
import time
import glob
import sys
import os
import random
    
    if opt.topK==None:
    topK=10
else:
    topK = int(opt.topK)
    
    
def euler2mat(euler):
    ''' Convert Euler Angles to Rotation Matrix.  See rotation.py for notes '''
    euler = np.asarray(euler, dtype=np.float64)
    assert euler.shape[-1] == 3, 'Invalid shaped euler {}'.format(euler)
    
    def test_no_frames():
    env = BrokenRecordableEnv()
    rec = VideoRecorder(env)
    rec.close()
    assert rec.empty
    assert rec.functional
    assert not os.path.exists(rec.path)
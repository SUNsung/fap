
        
        
@functools.lru_cache()
def get_citext_oids(connection_alias):
    '''Return citext array OIDs.'''
    with connections[connection_alias].cursor() as cursor:
        cursor.execute('SELECT typarray FROM pg_type WHERE typname = 'citext'')
        return tuple(row[0] for row in cursor)
    
    
class ArrayMaxLengthValidator(MaxLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no more than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no more than %(limit_value)d.',
        'limit_value')
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
                # Wipe prior inserts within range
            for j, iop in self.getKindOfOps(rewrites, InsertBeforeOp, i):
                if iop.index >= rop.index and iop.index <= rop.lastIndex:
                    rewrites[j] = None  # delete insert as it's a no-op.
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    
    def download_by_id(self, vid = '', title = None, output_dir='.', merge=True, info_only=False,**kwargs):
        '''self, str->None
        
        Keyword arguments:
        self: self
        vid: The video ID for BokeCC cloud, something like
        FE3BB999594978049C33DC5901307461
        
        Calls the prepare() to download the video.
        
        If no title is provided, this method shall try to find a proper title
        with the information providin within the
        returned content of the API.'''
    
    def rebuilt_url(url):
    path = urllib.parse.urlparse(url).path
    aid = path.split('/')[-1].split('_')[0]
    return 'http://www.dailymotion.com/embed/video/{}?autoplay=1'.format(aid)
    
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
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        type = 'video/mp4'
    ext = 'mp4'
    
        def get_flashvars(self):
        patt = r'var flashvars\s*=\s*(\{(?:.|\n)+?\});'
        hit = re.search(patt, self.page)
        if hit is None:
            raise Exception('Cannot find flashvars')
        flashvar_str = hit.group(1)
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    ('index', 'face_recognition',
     u'Face Recognition Documentation',
     u'Adam Geitgey',
     'face_recognition',
     'One line description of project.',
     'Miscellaneous'),
]
    
    setup_face_landmarks = '''
import face_recognition
    
    # Initialize some variables
face_locations = []
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    frames = []
frame_count = 0
    
    # Loop through each person in the training directory
for person in train_dir:
    pix = os.listdir('/train_dir/' + person)
    
    # Loop through each training image for the current person
    for person_img in pix:
        # Get the face encodings for the face in each image file
        face = face_recognition.load_image_file('/train_dir/' + person + '/' + person_img)
        face_enc = face_recognition.face_encodings(pic)[0]
        
        # Add face encoding for current image with corresponding label (name) to the training data
        encodings.append(face_enc)
        names.append(person)
        
# Create and train the SVC classifier
clf = svm.SVC(gamma='scale')
clf.fit(encodings,names)
    
    setup(
    name='face_recognition',
    version='1.2.3',
    description='Recognize faces from Python or from the command line',
    long_description=readme + '\n\n' + history,
    author='Adam Geitgey',
    author_email='ageitgey@gmail.com',
    url='https://github.com/ageitgey/face_recognition',
    packages=[
        'face_recognition',
    ],
    package_dir={'face_recognition': 'face_recognition'},
    package_data={
        'face_recognition': ['models/*.dat']
    },
    entry_points={
        'console_scripts': [
            'face_recognition=face_recognition.face_recognition_cli:main',
            'face_detection=face_recognition.face_detection_cli:main'
        ]
    },
    install_requires=requirements,
    license='MIT license',
    zip_safe=False,
    keywords='face_recognition',
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    test_suite='tests',
    tests_require=test_requirements
)

    
    
def load_data(file_path):
    '''加载数据
        源数据格式为多行，每行为两个浮点数，分别表示 (x,y)
    '''
    data = []
    with open(file_path, 'r', encoding='utf-8') as fr:
        for line in fr.read().splitlines():
            line_float = list(map(float, line.split('\t')))
            data.append(line_float)
    data = np.array(data)
    return data
    
    
def leaky_relu(x, alpha=0.1):
    '''渗透 ReLU
    `o = max(alpha * x, x)`
    '''
    return tf.nn.leaky_relu(x, alpha)
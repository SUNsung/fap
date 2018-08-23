
        
            data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
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
    
        def extractInformationFromTreeNodeStream(self, nodes):
        from antlr3.tree import Tree, CommonTree
        from antlr3.tokens import CommonToken
        
        self.node = nodes.LT(1)
        adaptor = nodes.adaptor
        payload = adaptor.getToken(self.node)
        if payload is not None:
            self.token = payload
            if payload.line <= 0:
                # imaginary node; no line/pos info; scan backwards
                i = -1
                priorNode = nodes.LT(i)
                while priorNode is not None:
                    priorPayload = adaptor.getToken(priorNode)
                    if priorPayload is not None and priorPayload.line > 0:
                        # we found the most recent real line / pos info
                        self.line = priorPayload.line
                        self.charPositionInLine = priorPayload.charPositionInLine
                        self.approximateLineInfo = True
                        break
                    
                    i -= 1
                    priorNode = nodes.LT(i)
                    
            else: # node created from real token
                self.line = payload.line
                self.charPositionInLine = payload.charPositionInLine
                
        elif isinstance(self.node, Tree):
            self.line = self.node.line
            self.charPositionInLine = self.node.charPositionInLine
            if isinstance(self.node, CommonTree):
                self.token = self.node.token
    
    
class FailedPredicateException(RecognitionException):
    '''@brief A semantic predicate failed during validation.
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    from .theplatform import theplatform_download_by_pid
    
    __all__ = ['ehow_download']
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    import json
    
        __metaclass__ = abc.ABCMeta
    
    
class Active(Inservice):
    
    
class TestData(unittest.TestCase):
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    
if __name__ == '__main__':
    reporter = Reporter()
    db = DB()
    tm = TestManager()
    tm.setReporter(reporter)
    tm.setDB(db)
    reporter.setTM(tm)
    db.setTM(tm)
    # For simplification we are looping on the same test.
    # Practically, it could be about various unique test classes and their
    # objects
    for i in range(3):
        tc = TC()
        tc.setTM(tm)
        tm.setTC(tc)
        tc.setup()
        tc.execute()
        tc.tearDown()
    
        '''Base state. This is to share functionality'''
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_small_frame = small_frame[:, :, ::-1]
    
            if file.filename == '':
            return redirect(request.url)
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
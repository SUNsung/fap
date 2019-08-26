
        
        flags.DEFINE_boolean(
    'train_vggish', True,
    'If True, allow VGGish parameters to change during training, thus '
    'fine-tuning VGGish. If False, VGGish parameters are fixed, thus using '
    'VGGish as a fixed feature extractor.')
    
      Returns:
    output_ranks: 1D NumPy array with index image indices, sorted from the most
      to the least similar according to the geometric verification and initial
      scores.
    
    import matplotlib.image as mpimg
import matplotlib.pyplot as plt
import numpy as np
from scipy import spatial
from skimage import feature
from skimage import measure
from skimage import transform
import tensorflow as tf
    
      # Read solution.
  print('Reading solution...')
  public_solution, private_solution, ignored_ids = dataset_file_io.ReadSolution(
      cmd_args.solution_path, dataset_file_io.RECOGNITION_TASK_ID)
  print('done!')
    
      # Mean average precision.
  print('**********************************************')
  print('(Public)  Mean Average Precision: %f' %
        metrics.MeanAveragePrecision(public_predictions, public_solution))
  print('(Private) Mean Average Precision: %f' %
        metrics.MeanAveragePrecision(private_predictions, private_solution))
    
        print('--- Fitting the IsolationForest estimator...')
    model = IsolationForest(n_jobs=-1, random_state=random_state)
    tstart = time()
    model.fit(X_train)
    fit_time = time() - tstart
    tstart = time()
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    plt.matshow(np.outer(np.sort(model.row_labels_) + 1,
                     np.sort(model.column_labels_) + 1),
            cmap=plt.cm.Blues)
plt.title('Checkerboard structure of rearranged data')
    
    Two consequences of imposing a connectivity can be seen. First clustering
with a connectivity matrix is much faster.
    
    ax.w_xaxis.set_ticklabels([])
ax.w_yaxis.set_ticklabels([])
ax.w_zaxis.set_ticklabels([])
ax.set_xlabel('Petal width')
ax.set_ylabel('Sepal length')
ax.set_zlabel('Petal length')
ax.set_title('Ground Truth')
ax.dist = 12
    
    plt.figure(figsize=(12, 12))
    
        def appid_exist(self, appids):
        for appid in appids.split('|'):
            if appid == '':
                continue
            if appid in self.config.GAE_APPIDS:
                return True
        return False
    
    
class CheckAllIp(object):
    
        def _test_host(self, url):
        try:
            header = {
                'user-agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Safari/537.36',
                'accept': 'application/json, text/javascript, */*; q=0.01',
                'accept-encoding': 'gzip, deflate, sdch',
                'accept-language': 'en-US,en;q=0.8,ja;q=0.6,zh-CN;q=0.4,zh;q=0.2',
                'connection': 'keep-alive'
                }
            response = self.http_client.request('HEAD', url, header, '', read_payload=False)
            if response:
                return True
        except Exception as e:
            if __name__ == '__main__':
                xlog.exception('test %s e:%r', url, e)
    
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
    
            if isinstance(index, Token):
            # index is a Token, grap the stream index from it
            index = index.index
    
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
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        if title is None:
      title = url[0]
    
        stream_id_pattern = r'id='html_stream' value='(\w+)''
    stream_id = match1(html, stream_id_pattern)
    
    
def main():
    '''Script main program.'''
    import argparse
    
                    fp = BytesIO()
                plistlib.dump(
                    pl, fp, fmt=fmt, skipkeys=True, sort_keys=False)
                data = fp.getvalue()
                pl2 = plistlib.loads(fp.getvalue())
                self.assertEqual(pl2, {'snake': 'aWord'})
    
            self.assertEqual(c.contents, [])
        self.assertEqual(c.buffer, data)
    
                self.assertIsNone(srv._sockets)
            self.assertIsNone(srv._waiters)
            self.assertFalse(srv.is_serving())
    
        def test_unbuffered_output(self):
        # Test expected operation of the '-u' switch
        for stream in ('stdout', 'stderr'):
            # Binary is unbuffered
            code = ('import os, sys; sys.%s.buffer.write(b'x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'binary %s not unbuffered' % stream)
            # Text is unbuffered
            code = ('import os, sys; sys.%s.write('x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'text %s not unbuffered' % stream)
    
            # Invalid positive position
        handler.pos = 3
        self.assertRaises(IndexError, b'\xff0'.decode, 'ascii', 'test.posreturn')
    
            response.read()
    
    from test.fork_wait import ForkWait
from test.support import reap_children, get_attribute, verbose
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'
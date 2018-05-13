
        
            def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    ratio = scikits_time / scipy_time
    
    import gc
import sys
import optparse
from datetime import datetime
import operator
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
            if event == 'clear':
            self.ax.clear()
            self.ax.set_xticks([])
            self.ax.set_yticks([])
            self.contours = []
            self.c_labels = None
            self.plot_kernels()
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    plt.title('Change of predicted probabilities after sigmoid calibration')
plt.xlabel('Probability class 1')
plt.ylabel('Probability class 2')
plt.xlim(-0.05, 1.05)
plt.ylim(-0.05, 1.05)
plt.legend(loc='best')
    
    n_classifiers = len(classifiers)
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
            print_info(site_info, title, type_, size_full)
        if not info_only:
            download_urls(url_list, title, ext, total_size=size_full, output_dir=output_dir, merge=merge, headers=fake_headers)
    else:
        raise NotImplementedError(flashvars)
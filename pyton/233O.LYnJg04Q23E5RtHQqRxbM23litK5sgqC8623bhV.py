versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    import io
import sys
import re
    
            uploader = self._search_regex(
            r'Added by\s*:\s*<a[^>]+>([^<]+)</a>', webpage, 'uploader', default=None)
        upload_date = unified_strdate(self._search_regex(
            r'Added on\s*:\s*([\d-]+)', webpage, 'upload date', default=None))
    
        cmd = cmd.split()
    
            # split the paragraph into fake smaller paragraphs to make the
        # problem harder e.g. more similar to tweets
        if lang in ('zh', 'ja'):
        # FIXME: whitespace tokenizing does not work on chinese and japanese
            continue
        words = content.split()
        n_groups = len(words) / n_words_per_short_text
        if n_groups < 1:
            continue
        groups = np.array_split(words, n_groups)
    
    from sklearn.datasets import make_blobs
from sklearn.ensemble import RandomForestClassifier
from sklearn.calibration import CalibratedClassifierCV
from sklearn.metrics import log_loss
    
    
# Random labeling with varying n_clusters against ground class labels
# with fixed number of clusters
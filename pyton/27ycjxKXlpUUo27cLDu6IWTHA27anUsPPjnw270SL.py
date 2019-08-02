
        
            def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    
class Node(object):
    
        # Live videos get deleted soon. See http://www.cbsnews.com/live/ for the latest examples
    _TEST = {
        'url': 'http://www.cbsnews.com/live/video/clinton-sanders-prepare-to-face-off-in-nh/',
        'info_dict': {
            'id': 'clinton-sanders-prepare-to-face-off-in-nh',
            'ext': 'mp4',
            'title': 'Clinton, Sanders Prepare To Face Off In NH',
            'duration': 334,
        },
        'skip': 'Video gone',
    }
    
    
class CBSBaseIE(ThePlatformFeedIE):
    def _parse_smil_subtitles(self, smil, namespace=None, subtitles_lang='en'):
        subtitles = {}
        for k, ext in [('sMPTE-TTCCURL', 'tt'), ('ClosedCaptionURL', 'ttml'), ('webVTTCaptionURL', 'vtt')]:
            cc_e = find_xpath_attr(smil, self._xpath_ns('.//param', namespace), 'name', k)
            if cc_e is not None:
                cc_url = cc_e.get('value')
                if cc_url:
                    subtitles.setdefault(subtitles_lang, []).append({
                        'ext': ext,
                        'url': cc_url,
                    })
        return subtitles
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
            # Arguments
            weights: a list of Numpy arrays. The number
                of arrays and their shape must match
                number of the dimensions of the weights
                of the layer (i.e. it should match the
                output of `get_weights`).
    
    batch_size = 64  # Batch size for training.
epochs = 100  # Number of epochs to train for.
num_samples = 10000  # Number of samples to train on.
# Path to the data txt file on disk.
data_path = 'fra-eng/fra.txt'
    
            for function in functions:
            blocks.append(render_function(function, method=False))
    
    
def sparse_top_k_categorical_accuracy(y_true, y_pred, k=5):
    # If the shape of y_true is (num_samples, 1), flatten to (num_samples,)
    return K.cast(K.in_top_k(y_pred, K.cast(K.flatten(y_true), 'int32'), k),
                  K.floatx())
    
        def build(self, input_shape):
        self.embeddings = self.add_weight(
            shape=(self.input_dim, self.output_dim),
            initializer=self.embeddings_initializer,
            name='embeddings',
            regularizer=self.embeddings_regularizer,
            constraint=self.embeddings_constraint,
            dtype=self.dtype)
        self.built = True
    
            if api_url:
            self.clc.defaults.ENDPOINT_URL_V2 = api_url
    
            self.firewall_dict = {
            'location': location,
            'source_account_alias': source_account_alias,
            'destination_account_alias': destination_account_alias,
            'firewall_policy_id': firewall_policy_id,
            'ports': ports,
            'source': source,
            'destination': destination,
            'wait': wait,
            'state': state,
            'enabled': enabled}
    
        def remove_lbpool_nodes(
            self, alias, location, lb_id, pool_id, nodes_to_remove):
        '''
        Removes nodes from the provided pool
        :param alias: the account alias
        :param location: the datacenter the load balancer resides in
        :param lb_id: the id string of the load balancer
        :param pool_id: the id string of the pool
        :param nodes_to_remove: a list of dictionaries containing the nodes to remove
        :return: (changed, result) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
        '''
        changed = False
        result = {}
        nodes = self._get_lbpool_nodes(alias, location, lb_id, pool_id)
        for node in nodes_to_remove:
            if not node.get('status'):
                node['status'] = 'enabled'
            if node in nodes:
                changed = True
                nodes.remove(node)
        if changed is True and not self.module.check_mode:
            result = self.set_loadbalancernodes(
                alias,
                location,
                lb_id,
                pool_id,
                nodes)
        return changed, result
    
        # Checks for channel/device
    if device is None and channel is None:
        module.fail_json(msg='You need to provide a channel or a device.')
    
            # Merge results with previous results
        rawoutput = resp.read()
        result = merge(result, imc_response(module, rawoutput, rawinput=data))
        result['response'] = info['msg']
        result['status'] = info['status']
    
        def feed(self, byte_str):
        byte_str = self.filter_with_english_letters(byte_str)
        for c in byte_str:
            char_class = Latin1_CharToClass[c]
            freq = Latin1ClassModel[(self._last_char_class * CLASS_NUM)
                                    + char_class]
            if freq == 0:
                self._state = ProbingState.NOT_ME
                break
            self._freq_counter[freq] += 1
            self._last_char_class = char_class
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
    UCS2BE_CHAR_LEN_TABLE = (2, 2, 2, 0, 2, 2)
    
    EUCTW_SM_MODEL = {'class_table': EUCTW_CLS,
                'class_factor': 7,
                'state_table': EUCTW_ST,
                'char_len_table': EUCTW_CHAR_LEN_TABLE,
                'name': 'x-euc-tw'}
    
        # add the text classifier to the pipeline if it doesn't exist
    # nlp.create_pipe works for built-ins that are registered with spaCy
    if 'textcat' not in nlp.pipe_names:
        textcat = nlp.create_pipe(
            'textcat',
            config={
                'exclusive_classes': True,
                'architecture': 'simple_cnn',
            }
        )
        nlp.add_pipe(textcat, last=True)
    # otherwise, get it, so we can add labels to it
    else:
        textcat = nlp.get_pipe('textcat')
    
    
def _train_parser(parser):
    fix_random_seed(1)
    parser.add_label('left')
    parser.begin_training([], **parser.cfg)
    sgd = Adam(NumpyOps(), 0.001)
    
    import plac
import os
from pathlib import Path
import tqdm
from thinc.neural._classes.model import Model
from timeit import default_timer as timer
import shutil
import srsly
from wasabi import Printer
import contextlib
import random
    
    from ..errors import Errors
    
    
def read_snli(path):
    texts1 = []
    texts2 = []
    labels = []
    with open(path, 'r') as file_:
        for line in file_:
            eg = json.loads(line)
            label = eg['gold_label']
            if label == '-':  # per Parikh, ignore - SNLI entries
                continue
            texts1.append(eg['sentence1'])
            texts2.append(eg['sentence2'])
            labels.append(LABELS[label])
    return texts1, texts2, to_categorical(np.asarray(labels, dtype='int32'))
    
    
def get_position_label(i, words, tags, heads, labels, ents):
    '''Return labels indicating the position of the word in the document.
    '''
    if len(words) < 20:
        return 'short-doc'
    elif i == 0:
        return 'first-word'
    elif i < 10:
        return 'early-word'
    elif i < 20:
        return 'mid-word'
    elif i == len(words) - 1:
        return 'last-word'
    else:
        return 'late-word'
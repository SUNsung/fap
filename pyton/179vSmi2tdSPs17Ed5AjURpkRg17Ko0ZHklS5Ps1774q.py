
        
        from flaskr import create_app
from flaskr.db import get_db
from flaskr.db import init_db
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
        with open(filename) as f:
        contents = re.sub(
            r'^(\s*%s\s*=\s*')(.+?)(')' % pattern,
            inject_version,
            f.read(),
            flags=re.DOTALL | re.MULTILINE,
        )
    
    
def _dump_arg_defaults(kwargs, app=None):
    '''Inject default arguments for dump functions.'''
    if app is None:
        app = current_app
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
        def is_null_session(self, obj):
        '''Checks if a given object is a null session.  Null sessions are
        not asked to be saved.
    
    
def get_im_prefix(name):
    '''Retrieve the image prefix for the dataset.'''
    return _DATASETS[name][_IM_PREFIX] if _IM_PREFIX in _DATASETS[name] else ''
    
    
def add_residual_block(
    model,
    prefix,
    blob_in,
    dim_in,
    dim_out,
    dim_inner,
    dilation,
    stride_init=2,
    inplace_sum=False
):
    '''Add a residual block to the model.'''
    # prefix = res<stage>_<sub_stage>, e.g., res2_3
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def _mkanchors(ws, hs, x_ctr, y_ctr):
    '''Given a vector of widths (ws) and heights (hs) around a center
    (x_ctr, y_ctr), output a set of anchors (windows).
    '''
    ws = ws[:, np.newaxis]
    hs = hs[:, np.newaxis]
    anchors = np.hstack(
        (
            x_ctr - 0.5 * (ws - 1),
            y_ctr - 0.5 * (hs - 1),
            x_ctr + 0.5 * (ws - 1),
            y_ctr + 0.5 * (hs - 1)
        )
    )
    return anchors
    
    '''Optimization operator graph construction.'''
    
    '''RetinaNet model heads and losses. See: https://arxiv.org/abs/1708.02002.'''
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args
    
    
class BatchPermutationOpTest(unittest.TestCase):
    def _run_op_test(self, X, I, check_grad=False):
        with core.DeviceScope(core.DeviceOption(caffe2_pb2.CUDA, 0)):
            op = core.CreateOperator('BatchPermutation', ['X', 'I'], ['Y'])
            workspace.FeedBlob('X', X)
            workspace.FeedBlob('I', I)
        workspace.RunOperatorOnce(op)
        Y = workspace.FetchBlob('Y')
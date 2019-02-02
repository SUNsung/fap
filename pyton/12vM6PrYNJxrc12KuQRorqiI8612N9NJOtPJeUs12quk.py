
        
                # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
            if converter:
            self.mime, body = converter.convert(body)
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
        if n == 1:
        return '1 B'
    
    
install_requires = [
    'requests>=2.18.4',
    'Pygments>=2.1.3'
]
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        def test_POST_no_data_no_auto_headers(self, httpbin):
        # JSON headers shouldn't be automatically set for POST with no data.
        r = http('POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Accept': '*/*'' in r
        assert ''Content-Type': 'application/json' not in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
            Input blobs: [rpn_rois_fpn<min>, ..., rpn_rois_fpn<max>,
                      rpn_roi_probs_fpn<min>, ..., rpn_roi_probs_fpn<max>]
          - rpn_rois_fpn<i> are the RPN proposals for FPN level i; see rpn_rois
            documentation from GenerateProposals.
          - rpn_roi_probs_fpn<i> are the RPN objectness probabilities for FPN
            level i; see rpn_roi_probs documentation from GenerateProposals.
    
        fc_dim = cfg.FAST_RCNN.MLP_HEAD_DIM
    model.FC(current, 'fc6', dim_in * roi_size * roi_size, fc_dim)
    model.Relu('fc6', 'fc6')
    return 'fc6', fc_dim

    
    
def add_mask_rcnn_blobs(blobs, sampled_boxes, roidb, im_scale, batch_idx):
    '''Add Mask R-CNN specific blobs to the input blob dictionary.'''
    # Prepare the mask targets by associating one gt mask to each training roi
    # that has a fg (non-bg) class label.
    M = cfg.MRCNN.RESOLUTION
    polys_gt_inds = np.where(
        (roidb['gt_classes'] > 0) & (roidb['is_crowd'] == 0)
    )[0]
    polys_gt = [roidb['segms'][i] for i in polys_gt_inds]
    boxes_from_polys = segm_utils.polys_to_boxes(polys_gt)
    fg_inds = np.where(blobs['labels_int32'] > 0)[0]
    roi_has_mask = blobs['labels_int32'].copy()
    roi_has_mask[roi_has_mask > 0] = 1
    
    # Example usage:
# data_loader_benchmark.par \
#   NUM_GPUS 2 \
#   TRAIN.DATASETS '('voc_2007_trainval',)' \
#   TRAIN.PROPOSAL_FILES /path/to/voc_2007_trainval/proposals.pkl \
#   DATA_LOADER.NUM_THREADS 4 \
#   DATA_LOADER.MINIBATCH_QUEUE_SIZE 64 \
#   DATA_LOADER.BLOBS_QUEUE_CAPACITY 8
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
        def get_confidence(self):
        r = 0.01
        if self._total_seqs > 0:
            r = ((1.0 * self._seq_counters[SequenceLikelihood.POSITIVE]) /
                 self._total_seqs / self._model['typical_positive_ratio'])
            r = r * self._freq_char / self._total_char
            if r >= 1.0:
                r = 0.99
        return r

    
    
@app.route('/lambda/<functionName>/code', methods=['POST'])
def get_lambda_code(functionName):
    ''' Get source code for Lambda function.
        ---
        operationId: 'getLambdaCode'
        parameters:
            - name: functionName
              in: path
            - name: request
              in: body
    '''
    data = get_payload(request)
    env = Environment.from_string(data.get('awsEnvironment'))
    result = infra.get_lambda_code(func_name=functionName, env=env)
    return jsonify(result)
    
    # action headers
ACTION_PREFIX = 'Kinesis_20131202'
ACTION_PUT_RECORD = '%s.PutRecord' % ACTION_PREFIX
ACTION_PUT_RECORDS = '%s.PutRecords' % ACTION_PREFIX
ACTION_CREATE_STREAM = '%s.CreateStream' % ACTION_PREFIX
ACTION_DELETE_STREAM = '%s.DeleteStream' % ACTION_PREFIX
    
    
def get_or_create_file(config_file):
    if os.path.exists(config_file):
        return config_file
    try:
        save_file(config_file, '{}')
        return config_file
    except Exception:
        pass
    
    
def get_kcl_app_command(java, multi_lang_daemon_class, properties, paths=[]):
    '''
    Generates a command to run the MultiLangDaemon.
    
        def test_put_parameters(self):
        ssm_client = aws_stack.connect_to_service('ssm')
    
    import json
import uuid
import time
import logging
import base64
import traceback
from flask import Flask, jsonify, request
from six import iteritems
from localstack.constants import TEST_AWS_ACCOUNT_ID
from localstack.services import generic_proxy
from localstack.utils.common import short_uid, to_str
from localstack.utils.aws import aws_responses
from localstack.utils.aws.aws_stack import get_s3_client, firehose_stream_arn, connect_elasticsearch
from boto3.dynamodb.types import TypeDeserializer
from localstack.utils.kinesis import kinesis_connector
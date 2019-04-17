
        
        
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
            # Verify we receive an Authorization header in response, then redirect.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_302)
    
            # In general, we want to try IDNA encoding the hostname if the string contains
        # non-ASCII characters. This allows users to automatically get the correct IDNA
        # behaviour. For strings containing only ASCII characters, we need to also verify
        # it doesn't start with a wildcard (*), before allowing the unencoded hostname.
        if not unicode_is_ascii(host):
            try:
                host = self._get_idna_encoded_host(host)
            except UnicodeError:
                raise InvalidURL('URL has an invalid label.')
        elif host.startswith(u'*'):
            raise InvalidURL('URL has an invalid label.')
    
            :param url: URL for the new :class:`Request` object.
        :param data: (optional) Dictionary, list of tuples, bytes, or file-like
            object to send in the body of the :class:`Request`.
        :param json: (optional) json to send in the body of the :class:`Request`.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
    
def patch(url, data=None, **kwargs):
    r'''Sends a PATCH request.
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform == 'linux' or sys.platform == 'linux2':
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
    
        ANTLR generates code that throws exceptions upon recognition error and
    also generates code to catch these exceptions in each rule.  If you
    want to quit upon first error, you can turn off the automatic error
    handling mechanism using rulecatch action, but you still need to
    override methods mismatch and recoverFromMismatchSet.
    
    In general, the recognition exceptions can track where in a grammar a
    problem occurred and/or what was the expected input.  While the parser
    knows its state (such as current input symbol and line info) that
    state can change before the exception is reported so current token index
    is computed and stored at exception time.  From this info, you can
    perhaps print an entire line of input not just a single token, for example.
    Better to just say the recognizer had a problem and then let the parser
    figure out a fancy report.
    
    '''
    
        # Get IoU overlap between each ex ROI and gt ROI
    ex_gt_overlaps = box_utils.bbox_overlaps(
        rois[ex_inds, :].astype(dtype=np.float32, copy=False),
        rois[gt_inds, :].astype(dtype=np.float32, copy=False))
    
    
def _write_voc_results_files(json_dataset, all_boxes, salt):
    filenames = []
    image_set_path = voc_info(json_dataset)['image_set_path']
    assert os.path.exists(image_set_path), \
        'Image set path does not exist: {}'.format(image_set_path)
    with open(image_set_path, 'r') as f:
        image_index = [x.strip() for x in f.readlines()]
    # Sanity check that order of images in json dataset matches order in the
    # image set
    roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        index = os.path.splitext(os.path.split(entry['image'])[1])[0]
        assert index == image_index[i]
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        logger.info('Writing VOC results for: {}'.format(cls))
        filename = _get_voc_results_file_template(json_dataset,
                                                  salt).format(cls)
        filenames.append(filename)
        assert len(all_boxes[cls_ind]) == len(image_index)
        with open(filename, 'wt') as f:
            for im_ind, index in enumerate(image_index):
                dets = all_boxes[cls_ind][im_ind]
                if type(dets) == list:
                    assert len(dets) == 0, \
                        'dets should be numpy.ndarray or empty list'
                    continue
                # the VOCdevkit expects 1-based indices
                for k in range(dets.shape[0]):
                    f.write('{:s} {:.3f} {:.1f} {:.1f} {:.1f} {:.1f}\n'.
                            format(index, dets[k, -1],
                                   dets[k, 0] + 1, dets[k, 1] + 1,
                                   dets[k, 2] + 1, dets[k, 3] + 1))
    return filenames
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
from detectron.utils.net import get_group_gn
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
    # array([[ -83.,  -39.,  100.,   56.],
#        [-175.,  -87.,  192.,  104.],
#        [-359., -183.,  376.,  200.],
#        [ -55.,  -55.,   72.,   72.],
#        [-119., -119.,  136.,  136.],
#        [-247., -247.,  264.,  264.],
#        [ -35.,  -79.,   52.,   96.],
#        [ -79., -167.,   96.,  184.],
#        [-167., -343.,  184.,  360.]])
    
            if cfg.FPN.FPN_ON:
            # After adding the RPN head, restrict FPN blobs and scales to
            # those used in the RoI heads
            blob_conv, spatial_scale_conv = _narrow_to_fpn_roi_levels(
                blob_conv, spatial_scale_conv
            )
    
    from detectron.core.config import cfg
from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
import detectron.modeling.FPN as fpn
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.utils.blob as blob_utils
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      # See ':h group-name' for details on how the initial group hierarchy is built.
  group_name_to_group = {
    'Boolean': SyntaxGroup( 'Boolean' ),
    'Identifier': identifier_group,
    'Statement': statement_group,
    'PreProc': preproc_group,
    'Type': type_group
  }
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerResponse ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      post_vim_message.assert_has_exact_calls( [
        call( 'Exception: message', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': contains( has_entries( {
            'word': 'insertion_text',
            'abbr': 'menu_text',
            'menu': 'extra_menu_info',
            'info': 'detailed_info\ndoc_string',
            'kind': 'k',
            'dup': 1,
            'empty': 1
          } ) ),
          'completion_start_column': 3
        } )
      )
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '2.1.3'
# The full version, including alpha/beta/rc tags.
release = '2.1.3'
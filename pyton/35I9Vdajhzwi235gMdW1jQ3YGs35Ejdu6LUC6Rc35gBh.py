
        
        # The master toctree document.
master_doc = 'index'
    
            data = {
            'kind': 'dns#change',
            'deletions': [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': record_contents,
                    'ttl': record_ttl,
                },
            ],
        }
    
        roi_data_loader.register_sigint_handler()
    roi_data_loader.start(prefill=True)
    total_time = 0
    for i in range(opts.num_batches):
        start_t = time.time()
        for _ in range(opts.x_factor):
            workspace.RunNetOnce(net)
        total_time += (time.time() - start_t) / opts.x_factor
        logger.info(
            '{:d}/{:d}: Averge dequeue time: {:.3f}s  [{:d}/{:d}]'.format(
                i + 1, opts.num_batches, total_time / (i + 1),
                roi_data_loader._minibatch_queue.qsize(),
                cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE
            )
        )
        # Sleep to simulate the time taken by running a little network
        time.sleep(opts.sleep_time)
        # To inspect:
        # blobs = workspace.FetchBlobs(all_blobs)
        # from IPython import embed; embed()
    logger.info('Shutting down data loader...')
    roi_data_loader.shutdown()
    
    
  def _HandleBasicResponse( self ):
    vimsupport.PostVimMessage( self._response, warning = False )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
class MessagesPoll( BaseRequest ):
  def __init__( self ):
    super( MessagesPoll, self ).__init__()
    self._request_data = BuildRequestData()
    self._response_future = None
    
    from ycm.tests import PathToTestFile, YouCompleteMeInstance
from ycmd.responses import ServerError
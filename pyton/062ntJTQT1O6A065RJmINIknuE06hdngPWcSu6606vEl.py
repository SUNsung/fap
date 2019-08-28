
        
        - We start with input sequences from a domain (e.g. English sentences)
    and corresponding target sequences from another domain
    (e.g. French sentences).
- An encoder LSTM turns input sequences to 2 state vectors
    (we keep the last LSTM state and discard the outputs).
- A decoder LSTM is trained to turn the target sequences into
    the same sequence but offset by one timestep in the future,
    a training process called 'teacher forcing' in this context.
    It uses as initial state the state vectors from the encoder.
    Effectively, the decoder learns to generate `targets[t+1...]`
    given `targets[...t]`, conditioned on the input sequence.
- In inference mode, when we want to decode unknown input sequences, we:
    - Encode the input sequence into state vectors
    - Start with a target sequence of size 1
        (just the start-of-sequence character)
    - Feed the state vectors and 1-char target sequence
        to the decoder to produce predictions for the next character
    - Sample the next character using these predictions
        (we simply use argmax).
    - Append the sampled character to the target sequence
    - Repeat until we generate the end-of-sequence character or we
        hit the character limit.
    
        # Generate empty target sequence of length 1.
    target_seq = np.zeros((1, 1, num_decoder_tokens))
    # Populate the first character of target sequence with the start character.
    target_seq[0, 0, target_token_index['\t']] = 1.
    
    Run the script with:
```python
python deep_dream.py path_to_your_base_image.jpg prefix_for_results
```
e.g.:
```python
python deep_dream.py img/mypic.jpg results/dream
```
'''
from __future__ import print_function
    
    - RNNs are tricky. Choice of batch size is important,
choice of loss and optimizer is critical, etc.
Some configurations won't converge.
    
        # check that output changes after states are reset
    # (even though the model itself didn't change)
    layer.reset_states()
    out3 = model.predict(np.ones_like(inputs))
    assert(out2.max() != out3.max())
    
        with pytest.raises(ValueError):
        conv_utils.normalize_tuple(None, 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple([2, 3, 4], 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple(['str', 'impossible'], 2, 'kernel_size')
    
        def __iter__(self):
        return iter(self.callbacks)
    
    
class Sequential(Model):
    '''Linear stack of layers.
    
            params = self._canonical_to_params(
            weights=[
                self.kernel_r,
                self.kernel_z,
                self.kernel_h,
                self.recurrent_kernel_r,
                self.recurrent_kernel_z,
                self.recurrent_kernel_h,
            ],
            biases=[
                self.bias_r_i,
                self.bias_z_i,
                self.bias_h_i,
                self.bias_r,
                self.bias_z,
                self.bias_h,
            ],
        )
        outputs, h = self._cudnn_gru(
            inputs,
            input_h=input_h,
            params=params,
            is_training=True)
    
        long_description = README,
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    __all__ = ['giphy_download']
    
        stream_types = [
        {'id': 'original'},
        {'id': 'thumbnail'},
    ]
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from ycm.client.base_request import BaseRequest
    
      keywords = []
  for word in words:
    if nextgroup_at_start and word in SYNTAX_NEXTGROUP_ARGUMENTS:
      continue
    
    
def HandlePollResponse_NoMessages_test():
  assert_that( _HandlePollResponse( True, None ), equal_to( True ) )
    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):
    
            Returns:
            An iterator equivalent to: map(func, *iterables) but the calls may
            be evaluated out-of-order.
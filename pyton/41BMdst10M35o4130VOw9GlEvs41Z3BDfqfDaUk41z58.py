
        
          Args:
    pairs: the word pairs (list of tuple of two strings).
    labels: the gold-standard labels for these pairs (array of rel ID).
    predictions: the predicted labels for these pairs (array of rel ID).
    classes: a list of relation names.
    predictions_file: where to save the predictions.
  '''
  with open(predictions_file, 'w') as f_out:
    for pair, label, pred in zip(pairs, labels, predictions):
      w1, w2 = pair
      f_out.write('\t'.join([w1, w2, classes[label], classes[pred]]) + '\n')

    
    rates_train, rates_valid = split_list_by_inds(rates, train_inds, valid_inds)
spikes_train, spikes_valid = split_list_by_inds(spikes, train_inds, valid_inds)
condition_labels_train, condition_labels_valid = split_list_by_inds(
    condition_labels, train_inds, valid_inds)
ext_input_train, ext_input_valid = split_list_by_inds(
    ext_input, train_inds, valid_inds)
    
    
def linear(x, out_size, do_bias=True, alpha=1.0, identity_if_possible=False,
           normalized=False, name=None, collections=None):
  '''Linear (affine) transformation, y = x W + b, for a variety of
  configurations.
    
      Args:
    gen_logits: Generator logits.
    gen_labels:  Labels for the correct token.
    dis_predictions:  Discriminator predictions.
    is_real_input:  Tensor indicating whether the label is present.
    
      # Common elements to Generator and Discriminator.
  embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) + '/rnn/embedding'
  ][0]
  lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat'
  ][0]
  lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat'
  ][0]
    
          Args:
        query: A Tensor of shape [batch_size, num_units].
        keys: A Tensor of shape [batch_size, attention_length, num_units].
        values: A Tensor of shape [batch_size, attention_length, num_units].
    
          predictions = tf.transpose(predictions, [1, 0, 2])
      return tf.squeeze(predictions, axis=2)

    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    colors = cycle('bgrcmykbgrcmykbgrcmykbgrcmyk')
for k, col in zip(range(n_clusters_), colors):
    my_members = labels == k
    cluster_center = cluster_centers[k]
    plt.plot(X[my_members, 0], X[my_members, 1], col + '.')
    plt.plot(cluster_center[0], cluster_center[1], 'o', markerfacecolor=col,
             markeredgecolor='k', markersize=14)
plt.title('Estimated number of clusters: %d' % n_clusters_)
plt.show()

    
                if (arr[i-1] <= j):
                dp[i][j] = dp[i][j] or dp[i-1][j-arr[i-1]]
    
    	for m in getBlock(bs):
		A = a0 
		B = b0
		C = c0
		D = d0
		for i in range(64):
			if i <= 15:
				#f = (B & C) | (not32(B) & D)
				f = D ^ (B & (C ^ D))
				g = i
			elif i<= 31:
				#f = (D & B) | (not32(D) & C)
				f = C ^ (D & (B ^ C))
				g = (5*i+1) % 16
			elif i <= 47:
				f = B ^ C ^ D
				g = (3*i+5) % 16
			else:
				f = C ^ (B | not32(D))
				g = (7*i) % 16
			dtemp = D
			D = C
			C = B
			B = sum32(B,leftrot32((A + f + tvals[i] + m[g]) % 2**32, s[i]))
			A = dtemp
		a0 = sum32(a0, A)
		b0 = sum32(b0, B)
		c0 = sum32(c0, C)
		d0 = sum32(d0, D)
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def generate_anchors(
    stride=16, sizes=(32, 64, 128, 256, 512), aspect_ratios=(0.5, 1, 2)
):
    '''Generates a matrix of anchor boxes in (x1, y1, x2, y2) format. Anchors
    are centered on stride / 2, have (approximate) sqrt areas of the specified
    sizes, and aspect ratios as given.
    '''
    return _generate_anchors(
        stride,
        np.array(sizes, dtype=np.float) / stride,
        np.array(aspect_ratios, dtype=np.float)
    )
    
        for i in range(cfg.KRCNN.NUM_STACKED_CONVS):
        current = model.Conv(
            current,
            'conv_fcn' + str(i + 1),
            dim_in,
            hidden_dim,
            kernel_size,
            stride=1,
            pad=pad_size,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.01}),
            bias_init=('ConstantFill', {'value': 0.})
        )
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
        # Select foreground RoIs as those with >= FG_THRESH overlap
    fg_inds = np.where(max_overlaps >= cfg.TRAIN.FG_THRESH)[0]
    # Guard against the case when an image has fewer than fg_rois_per_image
    # foreground RoIs
    fg_rois_per_this_image = np.minimum(fg_rois_per_image, fg_inds.size)
    # Sample foreground regions without replacement
    if fg_inds.size > 0:
        fg_inds = npr.choice(
            fg_inds, size=fg_rois_per_this_image, replace=False
        )
    
            if check_grad:
            gc = gradient_checker.GradientChecker(
                stepsize=0.1,
                threshold=0.001,
                device_option=core.DeviceOption(caffe2_pb2.CUDA, 0)
            )
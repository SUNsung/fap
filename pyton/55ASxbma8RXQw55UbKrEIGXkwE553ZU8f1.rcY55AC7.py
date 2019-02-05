
        
            dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test),
          shuffle=True)
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))

    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    from time import time
    
      * scikit-learn
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    Second, when using a connectivity matrix, single, average and complete
linkage are unstable and tend to create a few clusters that grow very
quickly. Indeed, average and complete linkage fight this percolation behavior
by considering all the distances between two clusters when merging them (
while single linkage exaggerates the behaviour by considering only the
shortest distance between clusters). The connectivity graph breaks this
mechanism for average and complete linkage, making them resemble the more
brittle single linkage. This effect is more pronounced for very sparse graphs
(try decreasing the number of neighbors in kneighbors_graph) and with
complete linkage. In particular, having a very small number of neighbors in
the graph, imposes a geometry that is close to that of single linkage,
which is well known to have this percolation instability. '''
# Authors: Gael Varoquaux, Nelle Varoquaux
# License: BSD 3 clause
    
    We add observation noise to these waveforms. We generate very sparse
noise: only 6% of the time points contain noise. As a result, the
l1 norm of this noise (ie 'cityblock' distance) is much smaller than it's
l2 norm ('euclidean' distance). This can be seen on the inter-class
distance matrices: the values on the diagonal, that characterize the
spread of the class, are much bigger for the Euclidean distance than for
the cityblock distance.
    
    ax.w_xaxis.set_ticklabels([])
ax.w_yaxis.set_ticklabels([])
ax.w_zaxis.set_ticklabels([])
ax.set_xlabel('Petal width')
ax.set_ylabel('Sepal length')
ax.set_zlabel('Petal length')
ax.set_title('Ground Truth')
ax.dist = 12
    
        if not model.train or cfg.MODEL.FASTER_RCNN:
        # Proposals are needed during:
        #  1) inference (== not model.train) for RPN only and Faster R-CNN
        #  OR
        #  2) training for Faster R-CNN
        # Otherwise (== training for RPN only), proposals are not needed
        model.net.Sigmoid('rpn_cls_logits', 'rpn_cls_probs')
        model.GenerateProposals(
            ['rpn_cls_probs', 'rpn_bbox_pred', 'im_info'],
            ['rpn_rois', 'rpn_roi_probs'],
            anchors=anchors,
            spatial_scale=spatial_scale
        )
    
        if len(data.shape) == 1:
        ret = np.empty((count, ), dtype=data.dtype)
        ret.fill(fill)
        ret[inds] = data
    else:
        ret = np.empty((count, ) + data.shape[1:], dtype=data.dtype)
        ret.fill(fill)
        ret[inds, :] = data
    return ret
    
    logger = logging.getLogger(__name__)
    
                if k.find('retnet_cls_labels') >= 0:
                tmp = []
                # concat anchors within an image
                for i in range(0, len(v), A):
                    tmp.append(np.concatenate(v[i: i + A], axis=1))
                # concat images
                blobs[k] = np.concatenate(tmp, axis=0)
            else:
                # for the bbox branch elements [per FPN level],
                #  we have the targets and the fg boxes locations
                # in the shape: M x 4 where M is the number of fg locations in a
                # given image at the current FPN level. For the given level,
                # the bbox predictions will be. The elements in the list are in
                # order [[a0, ..., a9], [a0, ..., a9]]
                # Concatenate them to form M x 4
                blobs[k] = np.concatenate(v, axis=0)
    return True
    
    
def main(opts):
    logger = logging.getLogger(__name__)
    roidb = combined_roidb_for_training(
        cfg.TRAIN.DATASETS, cfg.TRAIN.PROPOSAL_FILES)
    logger.info('{:d} roidb entries'.format(len(roidb)))
    roi_data_loader = RoIDataLoader(
        roidb,
        num_loaders=cfg.DATA_LOADER.NUM_THREADS,
        minibatch_queue_size=cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE,
        blobs_queue_capacity=cfg.DATA_LOADER.BLOBS_QUEUE_CAPACITY
    )
    blob_names = roi_data_loader.get_output_names()
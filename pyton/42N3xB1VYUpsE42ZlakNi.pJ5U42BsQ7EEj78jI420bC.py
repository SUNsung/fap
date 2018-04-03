
        
        # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
        Args:
      inputs: A Tensor of shape [batch_size, length].
      hparams: Object containing hyperparameters.
      scope: Name of the variable scope.
    
    
if __name__ == '__main__':
  tf.test.main()

    
      @unittest.skipUnless(tf.test.is_built_with_cuda(), 'requires GPU')
  def test_tensor_shapes_resnet_18_with_gpu_v2(self):
    self.tensor_shapes_helper(18, version=2, with_gpu=True)
    
      def test_cifar10model_shape(self):
    batch_size = 135
    num_classes = 246
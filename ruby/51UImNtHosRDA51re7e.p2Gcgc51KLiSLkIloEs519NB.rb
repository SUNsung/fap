
        
          platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:test)
  end
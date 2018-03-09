    projects
  end
end

    
    gem 'responders', '~> 2.1'
    
      # Checks whether it's a devise mapped resource or not.
  def assert_is_devise_resource! #:nodoc:
    unknown_action! <<-MESSAGE unless devise_mapping
Could not find devise mapping for path #{request.fullpath.inspect}.
This may happen for two reasons:
    
      # Makes the set compare its elements by their identity and returns
  # self.  This method may not be supported by all subclasses of Set.
  def compare_by_identity
    if @hash.respond_to?(:compare_by_identity)
      @hash.compare_by_identity
      self
    else
      raise NotImplementedError, '#{self.class.name}\##{__method__} is not implemented'
    end
  end
    
      def test_shared_substring
    bug12475 = '[ruby-dev:49655] [Bug #12475]'
    n = [*'0'..'9'].join('')*3
    e0 = ENV[n0 = 'E#{n}']
    e1 = ENV[n1 = 'E#{n}.']
    ENV[n0] = nil
    ENV[n1] = nil
    ENV[n1.chop] = 'T#{n}.'.chop
    ENV[n0], e0 = e0, ENV[n0]
    ENV[n1], e1 = e1, ENV[n1]
    assert_equal('T#{n}', e0, bug12475)
    assert_nil(e1, bug12475)
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '@\x15333333@\x22ffffff'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
      it 'implicitly has a count of one when no count modifier is passed' do
    '\xc2\x80\xc2\x81\xc2\x82\xc2\x83'.unpack('U1').should == [0x80]
  end
    
      Ruby = Struct.new(:version, :platform)
    
        it 'propagates inner exception to Thread.join if there is an outer ensure clause' do
      thread = ThreadSpecs.dying_thread_with_outer_ensure(@method) { }
      lambda { thread.join }.should raise_error(RuntimeError, 'In dying thread')
    end

        
            # This will detect the proper guest OS for the machine and set up
    # the class to actually execute capabilities.
    def detect!
      guest_name = @machine.config.vm.guest
      initialize_capabilities!(guest_name, @guests, @capabilities, @machine)
    rescue Errors::CapabilityHostExplicitNotDetected => e
      raise Errors::GuestExplicitNotDetected, value: e.extra_data[:value]
    rescue Errors::CapabilityHostNotDetected
      raise Errors::GuestNotDetected
    end
    
              if name != UNSET_VALUE
            # Validate the name of the command
            if name.to_s !~ /^[-a-z0-9]+$/i
              raise InvalidCommandName, 'Commands can only contain letters, numbers, and hyphens'
            end
    
              # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
        t.wakeup
    t.value.should == 5
  end
end
    
      ruby_version_is '2.6' do
    it 'raises RuntimeError when `exception: true` is given and the command exits with a non-zero exit status' do
      lambda { @object.system(ruby_cmd('exit 1'), exception: true) }.should raise_error(RuntimeError)
    end
    
      it 'raises an UncaughtThrowError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(UncaughtThrowError)
  end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
        context 'on a public post from a stranger' do
      before do
        @post = stranger.post :status_message, :text => 'something', :public => true, :to => 'all'
      end
    
        it 'requires authentication' do
      post_request!
      expect(response).not_to be_success
    end
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
        page = @wiki.page('k')
    assert_equal '한글 text', utf8(page.raw_data)
    assert_equal 'def', page.version.message
  end
    
      s.rdoc_options = ['--charset=UTF-8']
  s.extra_rdoc_files = %w[README.md LICENSE]
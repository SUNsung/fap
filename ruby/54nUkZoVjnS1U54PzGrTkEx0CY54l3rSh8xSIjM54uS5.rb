
        
                # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # This method is automatically called when the system is available (when
        # Vagrant can successfully SSH into the machine) to give the system a chance
        # to determine the distro and return a distro-specific system.
        #
        # If this method returns nil, then this instance is assumed to be
        # the most specific guest implementation.
        def distro_dispatch
        end
    
              @registered.each do |plugin|
            plugin.config.each do |key, klass|
              result[key] = klass
            end
          end
    
            # Defines additional command line commands available by key. The key
        # becomes the subcommand, so if you register a command 'foo' then
        # 'vagrant foo' becomes available.
        #
        # @param [String] name Subcommand key.
        def self.command(name=UNSET_VALUE, &block)
          data[:command] ||= Registry.new
    
                  # Break so we don't find the next non flag and shift our
              # main args.
              break
            end
          end
    
            # This returns all the registered communicators.
        #
        # @return [Hash]
        def communicators
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.communicator)
            end
          end
        end
    
            -> () {
          format('%s', obj)
        }.should raise_error(NoMethodError)
      end
    end
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      it 'calls #to_int on seed' do
    srand(3.8)
    srand.should == 3
    
      it 'calls #to_path on second argument when passed ?e and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?e, p)
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
            -> { w.f4('foo', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: foo|)
        -> { w.f4('foo', 1) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f1_call_lineno}: warning: foo|)
        -> { w.f4('foo', 2) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f2_call_lineno}: warning: foo|)
        -> { w.f4('foo', 3) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f3_call_lineno}: warning: foo|)
      end
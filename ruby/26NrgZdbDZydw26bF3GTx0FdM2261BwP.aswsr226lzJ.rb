
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
            def test_spec_name_with_inline_config
          spec = spec('adapter' => 'sqlite3')
          assert_equal 'primary', spec.name, 'should default to primary id'
        end
      end
    end
  end
end

    
        # Abstract representation of a column definition. Instances of this type
    # are typically created by methods in TableDefinition, and added to the
    # +columns+ attribute of said TableDefinition object, in order to be used
    # for generating a number of table creation or table changing SQL statements.
    ColumnDefinition = Struct.new(:name, :type, :options, :sql_type) do # :nodoc:
      def primary_key?
        options[:primary_key]
      end
    
        def get_latest
      transmit data: 'latest'
    end
    
            assert_equal 1, connection.transmissions.size
      end
    end
  end
    
      def wait_for_async
    wait_for_executor Concurrent.global_io_executor
  end
    
        def test_quit
      Timeout.timeout(TIMEOUT) do
        @worker_in.puts 'quit'
        assert_match(/^bye$/m,@worker_out.read)
      end
    end
  end
    
      def test_close_in_block
    PTY.open {|master, slave|
      slave.close
      master.close
      assert(slave.closed?)
      assert(master.closed?)
    }
  rescue RuntimeError
    skip $!
  else
    assert_nothing_raised {
      PTY.open {|master, slave|
        slave.close
        master.close
      }
    }
  end
    
        it 'expand_path for commoms unix path  give a full path' do
      File.expand_path('/tmp/').should =='/tmp'
      File.expand_path('/tmp/../../../tmp').should == '/tmp'
      File.expand_path('').should == Dir.pwd
      File.expand_path('./////').should == Dir.pwd
      File.expand_path('.').should == Dir.pwd
      File.expand_path(Dir.pwd).should == Dir.pwd
      File.expand_path('~/').should == @home
      File.expand_path('~/..badfilename').should == '#{@home}/..badfilename'
      File.expand_path('~/a','~/b').should == '#{@home}/a'
      File.expand_path('..').should == File.dirname(Dir.pwd)
    end
    
          rm_r filename
    end
  end
    
          after :each do
        rm_r @fifo
      end
    
      describe 'rb_cv_set' do
    it 'sets a class variable' do
      o = CApiClassSpecs::CVars.new
      o.new_cv.should be_nil
      @s.rb_cv_set(CApiClassSpecs::CVars, '@@new_cv', 1)
      o.new_cv.should == 1
      CApiClassSpecs::CVars.remove_class_variable :@@new_cv
    end
  end
  def test_truncate_rbuf
    Tempfile.create('test-truncate') {|f|
      f.puts 'abc'
      f.puts 'def'
      f.rewind
      assert_equal('abc\n', f.gets)
      f.truncate(3)
      assert_equal(nil, f.gets, '[ruby-dev:24197]')
    }
  end
    
      def self.status_of_completed_thread
    t = completed_thread
    t.join
    Status.new t
  end
    
      it 'is deferred if ensure clause does Thread.stop' do
    ThreadSpecs.wakeup_dying_sleeping_thread(@method) { Thread.stop; ScratchPad.record :after_sleep }
    ScratchPad.recorded.should == :after_sleep
  end
    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
          describe 'setting an internal hosts filter' do
        subject { dsl.roles(:app) }
        it 'is ignored' do
          dsl.set :filter, hosts: 'example3.com'
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end
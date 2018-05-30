
        
              # Override `Kernel#puts` to prepend four spaces to each line.
      def puts(string=nil)
        $stdout.puts(string.to_s.gsub(/^/, '    '))
      end
    
      desc 'Started'
  task :started do
  end
    
          it 'filters by roles from the :filter variable' do
        hosts = dsl.roles(:web)
        all = dsl.roles(:all)
        SSHKit::Coordinator.expects(:new).with(hosts).returns(@coordinator)
        dsl.set :filter, roles: 'web'
        dsl.on(all)
      end
    
      subject { described_class.new(lambda {}) }
    
      # Many RSpec users commonly either run the entire suite or an individual
  # file, and it's useful to allow more verbose output when running an
  # individual spec file.
  if config.files_to_run.one?
    # Use the documentation formatter for detailed output,
    # unless a formatter has already been configured
    # (e.g. via a command-line flag).
    config.default_formatter = 'doc'
  end
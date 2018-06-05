
        
            projects
  end
end

    
    msfenv_real_pathname = Pathname.new(__FILE__).realpath
root = msfenv_real_pathname.parent.parent
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]
    
          def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
      desc 'Published'
  task :published do
  end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
          describe 'setting an internal roles filter' do
        subject { dsl.roles(:app) }
        it 'ignores it' do
          dsl.set :filter, roles: :web
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
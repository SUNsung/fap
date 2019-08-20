
        
                  # Remove the -p option if --archive is enabled (--archive equals -rlptgoD)
          # otherwise new files will not have the destination-default permissions
          args << '--no-perms' if args.include?('--archive') || args.include?('-a')
        end
    
            it 'should not use the --chown flag' do
          expect(Vagrant::Util::Subprocess).to receive(:execute) { |*args|
            expect(args.detect{|a| a.include?('--chown')}).to be_falsey
            rsync_result
          }
          subject.rsync_single(machine, ssh_info, opts)
        end
      end
    
          def build_rsync_chown(opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        if(opts[:exclude] && !Array(opts[:exclude]).empty?)
          exclude_base = Pathname.new(opts[:guestpath])
          exclusions = Array(opts[:exclude]).map do |ex_path|
            ex_path = ex_path.slice(1, ex_path.size) if ex_path.start_with?(File::SEPARATOR)
            '-path #{Shellwords.escape(exclude_base.join(ex_path))} -prune'
          end.join(' -o ') + ' -o '
        end
        'find #{guest_path} #{exclusions}' \
          ''!' -type l -a ' \
          ''(' ! -user #{opts[:owner]} -or ! -group #{opts[:group]} ')' -exec ' \
          'chown #{opts[:owner]}:#{opts[:group]} '{}' +'
      end
    end
  end
end

    
        it 'returns the host machine object' do
      allow(machine.provider_config).to receive(:vagrant_vagrantfile).and_return('/path/to/Vagrantfile')
      allow(machine.provider_config).to receive(:vagrant_machine).and_return(:default)
      allow(machine).to receive(:env).and_return(true)
      allow(machine.env).to receive(:root_path).and_return('/.vagrant.d')
      allow(machine.env).to receive(:home_path).and_return('/path/to')
      allow(machine.env).to receive(:ui_class).and_return(true)
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        # Returns the configuration for a single machine.
    #
    # When loading a box Vagrantfile, it will be prepended to the
    # key order specified when initializing this class. Sub-machine
    # and provider-specific overrides are appended at the end. The
    # actual order is:
    #
    # - box
    # - keys specified for #initialize
    # - sub-machine
    # - provider
    #
    # The return value is a hash with the following keys (symbols)
    # and values:
    #
    #   - box: the {Box} backing the machine
    #   - config: the actual configuration
    #   - config_errors: list of errors, if any
    #   - config_warnings: list of warnings, if any
    #   - provider_cls: class of the provider backing the machine
    #   - provider_options: options for the provider
    #
    # @param [Symbol] name Name of the machine.
    # @param [Symbol] provider The provider the machine should
    #   be backed by (required for provider overrides).
    # @param [BoxCollection] boxes BoxCollection to look up the
    #   box Vagrantfile.
    # @param [Pathname] data_path Machine data path
    # @return [Hash<Symbol, Object>] Various configuration parameters for a
    #   machine. See the main documentation body for more info.
    def machine_config(name, provider, boxes, data_path=nil, validate_provider=true)
      keys = @keys.dup
    
          context 'file exists' do
        let(:meta_file_content) { '{'name':'base','version':'1.0'}' }
    
      describe '#machine' do
    # A helper to register a provider for use in tests.
    def register_provider(name, config_class=nil, options=nil)
      provider_cls = Class.new(VagrantTests::DummyProvider)
    
        after{ subject.update(plugins, specific) }
    
            # Apply any changes made to the composition
        def apply_composition!(*args)
          block = args.detect{|arg| arg.is_a?(Proc) }
          execute_args = ['up', '--remove-orphans']
          if args.include?(:detach)
            execute_args << '-d'
          end
          machine.env.lock('compose', retry: true) do
            if block
              compose_execute(*execute_args, &block)
            else
              compose_execute(*execute_args)
            end
          end
        end
    
        it 'performs the check on the running containers list' do
      subject.running?(cid)
      expect(cmd_executed).to match(/docker ps \-q/)
      expect(cmd_executed).to_not include('-a')
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters
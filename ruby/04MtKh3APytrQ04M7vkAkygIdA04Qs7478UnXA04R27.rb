
        
                cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          it 'works given a path to the directory containing compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint'
            )
          end').runner.execute(:test)
    
            it 'supports lint mode option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              mode: :lint
            )
          end').runner.execute(:test)
    
      def active?(key)
    if params.present?
      params.include? key
    else
      key == EventFilter.all
    end
  end
end

    
            def self.ldap_attributes(config)
          [
            'dn',
            config.uid,
            *config.attributes['name'],
            *config.attributes['email'],
            *config.attributes['username']
          ].compact.uniq
        end
    
          attr_reader :request
    
          def perform(start_id, stop_id)
        status_sql = Build
          .where('ci_builds.commit_id = ci_stages.pipeline_id')
          .where('ci_builds.stage = ci_stages.name')
          .status_sql
    
              @sha = @project.commit(@ref).try(:sha)
        end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
        # Returns the user ID that created this machine. This is specific to
    # the host machine that this was created on.
    #
    # @return [String]
    def uid
      path = uid_file
      return nil if !path
      return nil if !path.file?
      return uid_file.read.chomp
    end
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
            protected
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
              # Require that names be an array
          names ||= []
          names = [names] if !names.is_a?(Array)
    
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

    
              execute_command 'rm -rf Pods'
          execute_command '#{pod_command} install --verbose --no-repo-update'
    
        # Returns a new {Installer} parametrized from the {Config}.
    #
    # @return [Installer]
    #
    def installer_for_config
      Installer.new(config.sandbox, config.podfile, config.lockfile)
    end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
                              # apply filters
                          specs = specs.select{|spec| gemfile.find(spec.name)} if installed?
                          specs = specs.select{|spec| spec.name =~ /#{plugin}/i} if plugin
                          specs = specs.select{|spec| spec.metadata['logstash_group'] == group} if group
    
      gem.add_runtime_dependency 'logstash-core', LOGSTASH_CORE_VERSION.gsub('-', '.')
    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
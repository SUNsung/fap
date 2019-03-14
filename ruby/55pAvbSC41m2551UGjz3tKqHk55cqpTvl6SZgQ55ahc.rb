
        
                message = '#{tag} (fastlane)'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', frameworks: ['myframework', 'myframework2'])
                end').runner.execute(:test)
            end.to raise_error('Frameworks option is available only for 'archive' command.')
          end
        end
    
        context 'with a postfix block' do
      it 'yields the status, result and command' do
        expect_command('ls', '-la')
        Fastlane::Actions.sh('ls', '-la') do |status, result, command|
          expect(status.exitstatus).to eq(0)
          expect(result).to be_empty
          expect(command).to eq('ls -la')
        end
      end
    
            it 'deprecated boolean changes the description' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo. use bar instead',
                                                     deprecated: true)
          expect(config_item.description).to eq('**DEPRECATED!** foo. use bar instead')
        end
    
    exec_arr = ['fastlane', tool_name] + ARGV
    
        def initial_page?
      root_page? || context[:initial_paths].include?(subpath)
    end
    
        def initialize
      @pages = {}
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
          puts user_feedback_string_for('halting', args[:platform], machines, {'experimental' => experimental})
      options = {:debug => ENV['LS_QA_DEBUG']}
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
    __END__
    
        def self.enable_delay!
      if defined?(::ActiveSupport)
        require 'sidekiq/extensions/active_record'
        require 'sidekiq/extensions/action_mailer'
    
        # Creating the Redis#brpop command takes into account any
    # configured queue weights. By default Redis#brpop returns
    # data from the first queue that has pending elements. We
    # recreate the queue command each time we invoke Redis#brpop
    # to honor weights and avoid queue starvation.
    def queues_cmd
      if @strictly_ordered_queues
        @queues
      else
        queues = @queues.shuffle.uniq
        queues << TIMEOUT
        queues
      end
    end
    
        def self.with_job_hash_context(job_hash, &block)
      with_context(job_hash_context(job_hash), &block)
    end
    
        def identity
      @@identity ||= '#{hostname}:#{$$}:#{process_nonce}'
    end
    
        # Set attribute defaults based on flags
    # This allows you to define command line options with default values
    # that also are obeyed if fpm is used programmatically.
    self.class.default_attributes do |attribute, value|
      attributes[attribute] = value
    end
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile
    
      def install_script
    path = build_path('installer.sh')
    File.open(path, 'w') do |file|
      file.write template('sh.erb').result(binding)
    end
    path
  end

        
              File.write(new_path, '1')
      false
    end
    
          it 'adds verbose flag to command if verbose is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              verbose: true
            )
          end').runner.execute(:test)
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
          it 'works with select regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /AppDelegate/
            )
          end').runner.execute(:test)
    
        it 'shell-escapes environment variable values' do
      message = 'A message'
      path = '/usr/my local/bin'
      command = command_from_args({ 'PATH' => path }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=#{path.shellescape} git commit -m #{message.shellescape}')
    end
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
            def create_labels
          time = Time.zone.now
          rows = []
          target_id = find_target_id
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
      it 'seeds the RNG correctly and repeatably' do
    srand(10)
    x = rand
    srand(10)
    rand.should == x
  end
    
        $?.should be_an_instance_of Process::Status
    $?.success?.should == true
    $?.exitstatus.should == 0
  end
    
          def create_worker_file
        template 'worker.rb.erb', File.join('app/workers', class_path, '#{file_name}_worker.rb')
      end
    
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
    
        def self.job_hash_context(job_hash)
      # If we're using a wrapper class, like ActiveJob, use the 'wrapped'
      # attribute to expose the underlying thing.
      klass = job_hash['wrapped'] || job_hash['class']
      bid = job_hash['bid']
      '#{klass} JID-#{job_hash['jid']}#{' BID-#{bid}' if bid}'
    end
    
        def call(env)
      app.call(env)
    end
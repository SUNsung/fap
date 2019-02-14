
        
                cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'works with keychain-settings and name and password' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
          })
        end').runner.execute(:test)
    
      describe 'on other OSs (macOS, Linux)' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(false)
    end
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
              # Handle the case that argv was empty or didn't contain any subcommand
          main_args = argv.dup if main_args.nil?
    
            # Defines a capability for the given provider. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] provider The name of the provider
        # @param [String] cap The name of the capability
        def self.provider_capability(provider, cap, &block)
          components.provider_capabilities[provider.to_sym].register(cap.to_sym, &block)
          nil
        end
    
        def self.job_hash_context(job_hash)
      # If we're using a wrapper class, like ActiveJob, use the 'wrapped'
      # attribute to expose the underlying thing.
      klass = job_hash['wrapped'] || job_hash['class']
      bid = job_hash['bid']
      '#{klass} JID-#{job_hash['jid']}#{' BID-#{bid}' if bid}'
    end
    
      Sidekiq::WebAction.class_eval 'def _render\n#{ERB.new(File.read(Web::LAYOUT)).src}\nend'
end
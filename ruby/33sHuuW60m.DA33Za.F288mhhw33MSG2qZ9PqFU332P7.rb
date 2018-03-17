
        
          </body>
</html>
HTML
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
            next unless HOMEBREW_CELLAR.directory?
    
      # Make it so that network access from the vagrant guest is able to
  # use SSH private keys that are present on the host without copying
  # them into the VM.
  config.ssh.forward_agent = true
    
          topic.feature_topic_users(args)
    end
    
          message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
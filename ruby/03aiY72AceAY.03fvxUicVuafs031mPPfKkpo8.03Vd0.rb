
        
                adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
                    on.unsubscribe do |chan, count|
                  if count == 0
                    @subscription_lock.synchronize do
                      @raw_client = nil
                    end
                  end
                end
              end
            end
          end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
          # Calls this block after #reset is called on the instance. Used for resetting external collaborators, like Time.zone.
      def resets(&block)
        set_callback :reset, :after, &block
      end
    
          body.each do |part|
        assert part.is_a?(String), 'Each part of the body must be a String'
        string << part
      end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
        # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
      def app
    APP
  end
    
          plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
        diff.each_line do |line|
      status, *paths = line.split
      src = Pathname.new paths.first
      dst = Pathname.new paths.last
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
                  # Check if data is actually ready on this IO device.
              # We have to do this since `readpartial` will actually block
              # until data is available, which can cause blocking forever
              # in some cases.
              results = ::IO.select([io], nil, nil, 1.0)
              break if !results || results[0].empty?
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
    module VagrantPlugins
  module CommandCap
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'checks and executes capability'
      end
    
      def test_time_time()
    assert_equal(Time.utc(2000, 3, 21, 3, 30)  \
                -Time.utc(2000, 3, 21, 0, 30), 3*3600)
    assert_equal(Time.utc(2000, 3, 21, 0, 30)  \
                -Time.utc(2000, 3, 21, 3, 30), -3*3600)
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
        10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep1.should == false # t should be blocked on the first sleep
    t.send(@method)
    
        def define_remote_file_task(task, target_roles)
      Capistrano::UploadTask.define_task(task) do |t|
        prerequisite_file = t.prerequisites.first
        file = shared_path.join(t.name)
    
    When /^(?:|I )check '([^']*)'$/ do |field|
  check(field)
end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        # True if the dimensions represent a horizontal rectangle
    def horizontal?
      height < width
    end
    
          def validate_before_processing(validator_class, options)
        options = options.dup
        attributes = options.delete(:attributes)
        attributes.each do |attribute|
          options[:attributes] = [attribute]
          create_validating_before_filter(attribute, validator_class, options)
        end
      end
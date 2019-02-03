
        
                tag = options[:tag] || '#{options[:grouping]}/#{lane_name}/#{options[:prefix]}#{options[:build_number]}#{options[:postfix]}'
        message = options[:message] || '#{tag} (fastlane)'
    
          it 'works with name and password that contain spaces or `\'`' do
        password = '\'test password\''
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: '#{password}',
          })
        end').runner.execute(:test)
    
          context 'the `ignore_exit_status` option' do
        context 'by default' do
          it 'should raise if swiftlint completes with a non-zero exit status' do
            allow(FastlaneCore::UI).to receive(:important)
            expect(FastlaneCore::UI).to receive(:important).with(/If you want fastlane to continue anyway/)
            # This is simulating the exception raised if the return code is non-zero
            expect(Fastlane::Actions).to receive(:sh).and_raise('fake error')
            expect(FastlaneCore::UI).to receive(:user_error!).with(/SwiftLint finished with errors/).and_call_original
    
        it 'shell-escapes environment variable values' do
      message = 'A message'
      path = '/usr/my local/bin'
      command = command_from_args({ 'PATH' => path }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=#{path.shellescape} git commit -m #{message.shellescape}')
    end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelperXcode8.swift')
  warn('You modified `SnapshotHelperXcode8.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
        # Iterate over every machine in the index. The yielded {Entry} objects
    # will NOT be locked, so you'll have to call {#get} manually to acquire
    # the lock on them.
    def each(reload=false)
      if reload
        @lock.synchronize do
          with_index_lock do
            unlocked_reload
          end
        end
      end
    
            # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)

        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
            cmd = ['git tag']
    
            it 'supports lint mode option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              mode: :lint
            )
          end').runner.execute(:test)
    
        it 'recognizes an array as the first element of a command' do
      message = 'A message'
      command = command_from_args(['/usr/local/bin/git', 'git'], 'commit', '-m', message)
      expect(command).to eq('/usr/local/bin/git commit -m #{message.shellescape}')
    end
  end
end
    
            it 'auto converts '0' to the integer 0' do
          c = [
            FastlaneCore::ConfigItem.new(key: :int_value,
                                         type: Integer)
          ]
          config = FastlaneCore::Configuration.create(c, {
            int_value: '0'
          })
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end

        
          # Most of the tests mess with the validations of Topic, so lets repair it all the time.
  # Other classes we mess with will be dealt with in the specific tests
  repair_validations(Topic)
    
          def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
          # Run the command
      #
      def run
        if updates.empty?
          UI.puts 'No pod updates are available.'.yellow
        else
          UI.section 'The color indicates what happens when you run `pod update`' do
            UI.puts '#{'<green>'.green}\t - Will be updated to the newest version'
            UI.puts '#{'<blue>'.blue}\t - Will be updated, but not to the newest version because of specified version in Podfile'
            UI.puts '#{'<red>'.red}\t - Will not be updated because of specified version in Podfile'
            UI.puts ''
          end if ansi_output?
          UI.section 'The following pod updates are available:' do
            updates.each do |(name, from_version, matching_version, to_version)|
              color = :blue
              if matching_version == to_version
                color = :green
              elsif from_version == matching_version
                color = :red
              end
              # For the specs, its necessary that to_s is called here even though it is redundant
              # https://github.com/CocoaPods/CocoaPods/pull/7204#issuecomment-342512015
              UI.puts '- #{name} #{from_version.to_s.send(color)} -> #{matching_version.to_s.send(color)} ' \
              '(latest version #{to_version.to_s})' # rubocop:disable Lint/StringConversionInInterpolation
            end
          end
        end
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
          # A title opposed to a section is always visible
      #
      # @param [String] title
      #        The title to print
      #
      # @param [String] verbose_prefix
      #        See #message
      #
      # @param [FixNum] relative_indentation
      #        The indentation level relative to the current,
      #        when the message is printed.
      #
      def title(title, verbose_prefix = '', relative_indentation = 2)
        if @treat_titles_as_messages
          message(title, verbose_prefix)
        else
          title = verbose_prefix + title if config.verbose?
          title = '\n#{title}' if @title_level < 2
          if (color = @title_colors[@title_level])
            title = title.send(color)
          end
          puts '#{title}'
        end
    
        it 'should use the given template URL' do
      template_url = 'https://github.com/custom/template.git'
      @sut.any_instance.expects(:git!).with(['clone', template_url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod', '--template-url=#{template_url}')
    end
    
                existing = config.base_configuration_reference
    
              # @!group Private Helpers
    
      it 'returns a plist containg the licenses' do
    @generator.plist_hash.should == {
      :Title => 'Acknowledgements',
      :StringsTable => 'Acknowledgements',
      :PreferenceSpecifiers => @generator.licenses,
    }
  end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

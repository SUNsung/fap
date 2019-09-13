
        
              def get_type
        return if root_page?
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = 0
      super
    end
    
            @doc = at_css('#api-doc, .content')
    
      def test_module_ivar
    assert_raise(TypeError) {Marshal.load('\x04\x08Im\x1cTestMarshal::TestModule\x06:\x0e@ivar_bug\'\x08bug')}
    assert_raise(TypeError) {Marshal.load('\x04\x08IM\x1cTestMarshal::TestModule\x06:\x0e@ivar_bug\'\x08bug')}
    assert_not_operator(TestModule, :instance_variable_defined?, :@bug)
  end
    
    
if ARGV.delete '--print' then
  $raccs_print_type = true
  printonly = true
else
  printonly = false
end
    
      before :each do
    @data = '{'a':1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not prepend anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == '12345abcde'
        end
    
          def updates
        @updates ||= begin
          ensure_external_podspecs_present!
          spec_sets.map do |set|
            spec = set.specification
            source_version = set.versions.first
            pod_name = spec.root.name
            lockfile_version = lockfile.version(pod_name)
            if source_version > lockfile_version
              matching_spec = unlocked_pods.find { |s| s.name == pod_name }
              matching_version =
                matching_spec ? matching_spec.version : '(unused)'
              [pod_name, lockfile_version, matching_version, source_version]
            end
          end.compact.uniq
        end
      end
    
            # @return [Bool] Bool indicating if this project is a pod target subproject.
        # Used by `generate_multiple_pod_projects` installation option.
        #
        attr_reader :pod_target_subproject
    
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
    
      # spec.public_header_files = 'Classes/**/*.h'
    
          require 'open3'
      command = command.map(&:to_s)
      case capture
      when :merge then Open3.capture2e(env, [bin, bin], *command, **kwargs)
      when :both then Open3.capture3(env, [bin, bin], *command, **kwargs)
      when :out then Open3.capture3(env, [bin, bin], *command, **kwargs).values_at(0, -1)
      when :err then Open3.capture3(env, [bin, bin], *command, **kwargs).drop(1)
      when :none then Open3.capture3(env, [bin, bin], *command, **kwargs).last
      end
    end
    
              file = AppTargetHelper.create_app_host_main_file(project, :ios)
          file.basename.to_s.should == 'main.m'
          file.read.should == AppTargetHelper::IOS_APP_HOST_MAIN_CONTENTS
        end
    
    World(RemoteCommandHelpers)

    
          def keys
        values.keys
      end
    
          def calculate_column_widths(rows)
        num_columns = rows.map { |row| row.values.length }.max
        Array.new(num_columns) do |col|
          rows.map { |row| row.values[col].to_s.length }.max
        end
      end
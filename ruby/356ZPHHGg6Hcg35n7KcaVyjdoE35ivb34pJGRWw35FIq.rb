
        
            assert_kind_of Integer, m1.my_house_population
    assert_equal 3, m1.my_house_population
    
        class InvertibleByPartsMigration < SilentMigration
      attr_writer :test
      def change
        create_table('new_horses') do |t|
          t.column :breed, :string
        end
        reversible do |dir|
          @test.yield :both
          dir.up    { @test.yield :up }
          dir.down  { @test.yield :down }
        end
        revert do
          create_table('horses') do |t|
            t.column :content, :text
            t.column :remind_at, :datetime
          end
        end
      end
    end
    
        config.action_mailbox.queues = ActiveSupport::InheritableOptions.new \
      incineration: :action_mailbox_incineration, routing: :action_mailbox_routing
    
      # Mount Action Cable outside main process or domain
  # config.action_cable.mount_path = nil
  # config.action_cable.url = 'wss://example.com/cable'
  # config.action_cable.allowed_request_origins = [ 'http://example.com', /http:\/\/example.*/ ]
    
      def perform_failure(project_id, user_id, error)
    project = Project.find(project_id)
    user = User.find(user_id)
    
            filters = @filters.each_with_object([]) do |filter, parsed_filters|
          match = @raw_query.split.find { |part| part =~ /\A#{filter[:name]}:/ }
          next unless match
    
      def output_chronic_duration_attribute(source_attribute)
    value = attributes[source_attribute.to_s]
    ChronicDuration.output(value, format: :short) if value
  end
end

    
            def self.nfs_checkexports!
          r = Vagrant::Util::Subprocess.execute('nfsd', 'checkexports')
          if r.exit_code != 0
            raise Vagrant::Errors::NFSBadExports, output: r.stderr
          end
        end
      end
    end
  end
end

    
            def windows?
          @machine.config.vm.communicator == :winrm
        end
      end
    end
  end
end

    
    require File.expand_path('../../../../../base', __FILE__)
    
            # @return [Set<String>] the names of the pods that were changed.
        #
        attr_reader :changed
    
          # @return [Bool] whether this resolved specification is by non-library targets.
      #
      attr_reader :used_by_non_library_targets_only
      alias used_by_non_library_targets_only? used_by_non_library_targets_only
    
            # Initialize a new instance
        #
        # @param [Sandbox] sandbox @see #sandbox
        # @param [String] path @see #path
        # @param [Array<PodTarget>] pod_targets @see #pod_targets
        # @param [Hash{String=>Symbol}] build_configurations @see #build_configurations
        # @param [Array<Platform>] platforms @see #platforms
        # @param [String] object_version @see #object_version
        # @param [String] podfile_path @see #podfile_path
        #
        def initialize(sandbox, path, pod_targets, build_configurations, platforms,
                       object_version, podfile_path = nil, pod_target_subproject: false)
          @sandbox = sandbox
          @path = path
          @pod_targets = pod_targets
          @build_configurations = build_configurations
          @platforms = platforms
          @object_version = object_version
          @podfile_path = podfile_path
          @pod_target_subproject = pod_target_subproject
        end
    
            self.indentation_level += 2
        @treat_titles_as_messages = true
        yield if block_given?
      ensure
        @treat_titles_as_messages = false
        self.indentation_level -= 2
      end
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
          [ scale_geometry, crop_geometry ]
    end
    
        # Hash access of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[] name
      method(name)
    end
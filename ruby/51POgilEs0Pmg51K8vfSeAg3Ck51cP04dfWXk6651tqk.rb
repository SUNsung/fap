
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(2)
      expect(limit_reached_for(user.id, dt)).to eq(true)
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
            include ::EachBatch
      end
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Returns true if the given value is present in the set.
      #
      # raw_key - The key of the set to check.
      # value - The value to check for.
      def self.set_includes?(raw_key, value)
        key = cache_key_for(raw_key)
    
          def milestones(*args)
        each_object(:milestones, *args)
      end
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
              waiter.jobs_remaining += 1
        end
    
          private
    
                platform = target.platform_name
            case platform
            when :osx
              execute_command 'xcodebuild -workspace '#{workspace_path}' -scheme '#{scheme_name}' clean build'
            when :ios
              test_flag = (scheme_name.start_with? 'Test') ? 'test' : ''
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
    Then(/^the release is created$/) do
  run_vagrant_command('ls -g #{TestApp.releases_path}')
end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def append(key, *values)
      set(key, Array(fetch(key)).concat(values))
    end
    
          def self.[](host)
        host.is_a?(Server) ? host : new(host)
      end
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
          # Checks whether the `when` node has a `then` keyword.
      #
      # @return [Boolean] whether the `when` node has a `then` keyword
      def then?
        loc.begin && loc.begin.is?('then')
      end
    
        def cop_enabled_at_line?(cop, line_number)
      cop = cop.cop_name if cop.respond_to?(:cop_name)
      disabled_line_ranges = cop_disabled_line_ranges[cop]
      return true unless disabled_line_ranges
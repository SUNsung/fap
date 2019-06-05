
        
              if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
        Discourse.plugins.each(&:notify_before_auth)
    
      def self.find_draft(user, key)
    if user.is_a?(User)
      find_by(user_id: user.id, draft_key: key)
    else
      find_by(user_id: user, draft_key: key)
    end
  end
    
        private
    
          limiter10 = RateLimiter.new(
        nil,
        'global_ip_limit_10_#{ip}',
        GlobalSetting.max_reqs_per_ip_per_10_seconds,
        10,
        global: true
      )
    
          if SvgSprite.version(theme_ids) != params[:version]
        return redirect_to path(SvgSprite.path(theme_ids))
      end
    
              if Rails.configuration.try(:lograge).try(:enabled)
            if timings
              db_runtime = 0
              if timings[:sql]
                db_runtime = timings[:sql][:duration]
              end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-package-url \'http://docset-package-url.com\' --exit-threshold \'2\' input/dir')
      end
    
          it 'sets the platform to (downcase) ios' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'ios'
            )
          end').runner.execute(:test)
    
            def representation_class
          Representation::DiffNote
        end
    
            def collection_method
          :issues
        end
    
            def execute
          create_labels
        end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        def path
      @path ||= url.path
    end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
          default_options :authenticity_param => 'authenticity_token',
                      :allow_if => nil
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'
    
      # Configure public file server for tests with Cache-Control for performance.
  config.public_file_server.enabled = true
  config.public_file_server.headers = {
    'Cache-Control' => 'public, max-age=#{1.hour.to_i}'
  }
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end

        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
        Jekyll::Commands::Build.process({'source' => 'docs'})
    
          theme.create!
      Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
        ' is ready for you in #{theme.path.to_s.cyan}!'
      Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
    end
    # rubocop:enable Metrics/AbcSize
  end
end

    
        def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
        def execute(args)
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        delegate :empty?, :blank?, to: :pages
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
          def stack
        UI::ErrorReport.stack
      end
    
            # Split out the targets into app and test targets
        test_targets, app_targets = project.native_targets.
                              sort_by { |t| t.name.downcase }.
                              partition(&:test_target_type?)
    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
          it 'filters by roles from the :filter variable' do
        hosts = dsl.roles(:web)
        all = dsl.roles(:all)
        SSHKit::Coordinator.expects(:new).with(hosts).returns(@coordinator)
        dsl.set :filter, roles: 'web'
        dsl.on(all)
      end
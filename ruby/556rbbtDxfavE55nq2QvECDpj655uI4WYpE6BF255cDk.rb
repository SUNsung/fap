
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    #
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
            def sidekiq_worker_class
          ImportNoteWorker
        end
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            # Builds an issue from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the issue
        #         details.
        def self.from_api_response(issue)
          user =
            if issue.user
              Representation::User.from_api_response(issue.user)
            end
    
            expose_attribute :iid, :title, :description, :source_branch,
                         :source_branch_sha, :target_branch, :target_branch_sha,
                         :milestone_number, :author, :assignee, :created_at,
                         :updated_at, :merged_at, :source_repository_id,
                         :target_repository_id, :source_repository_owner
    
          def all_success_and_clean?
        all_success? && all_stderr_empty?
      end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def index
      authorize :custom_emoji, :index?
      @custom_emojis = filtered_custom_emojis.eager_load(:local_counterpart).page(params[:page])
    end
    
        def set_report
      @report = Report.find(params[:report_id])
    end
  end
end

    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
        def write_cached_files(path, files)
      full_path = './#@cache_path/#@branch_sha/#{path}'
      files.each do |name, content|
        FileUtils.mkdir_p File.dirname(File.join(full_path, name))
        File.open('#{full_path}/#{name}', 'wb') { |f| f.write content }
      end
    end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
      # Pre release
  #-----------------------------------------------------------------------------#
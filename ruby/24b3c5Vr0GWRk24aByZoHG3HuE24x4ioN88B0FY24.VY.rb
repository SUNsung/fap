
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
      def scope_for_collection
    case params[:id]
    when 'featured'
      @account.statuses.permitted_for(@account, signed_request_account).tap do |scope|
        scope.merge!(@account.pinned_statuses)
      end
    else
      raise ActiveRecord::NotFound
    end
  end
    
            render template: 'admin/accounts/show'
      end
    end
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
        def index
      authorize :email_domain_block, :index?
      @email_domain_blocks = EmailDomainBlock.page(params[:page])
    end
    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
        s = StringIO.new
    SystemConfig.dump_verbose_config s
    # Dummy summary file, asciibetically first, to control display title of gist
    files['# #{f.name} - #{timestamp}.txt'] = { content: brief_build_info(f) }
    files['00.config.out'] = { content: s.string }
    files['00.doctor.out'] = { content: Utils.popen_read('#{HOMEBREW_PREFIX}/bin/brew', 'doctor', err: :out) }
    unless f.core_formula?
      tap = <<~EOS
        Formula: #{f.name}
        Tap: #{f.tap}
        Path: #{f.path}
      EOS
      files['00.tap.out'] = { content: tap }
    end
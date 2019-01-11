
        
                def collection_options
          { state: 'all', sort: 'created', direction: 'asc' }
        end
      end
    end
  end
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
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
              user = Representation::User.from_api_response(pr.user) if pr.user
          hash = {
            iid: pr.number,
            title: pr.title,
            description: pr.body,
            source_branch: pr.head.ref,
            target_branch: pr.base.ref,
            source_branch_sha: pr.head.sha,
            target_branch_sha: pr.base.sha,
            source_repository_id: pr.head&.repo&.id,
            target_repository_id: pr.base&.repo&.id,
            source_repository_owner: pr.head&.user&.login,
            state: pr.state == 'open' ? :opened : :closed,
            milestone_number: pr.milestone&.number,
            author: user,
            assignee: assignee,
            created_at: pr.created_at,
            updated_at: pr.updated_at,
            merged_at: pr.merged_at
          }
    
      it 'returns the previous seed value' do
    srand(10)
    srand(20).should == 10
  end
    
        $Kernel_trace_var_global = 'foo'
    
    script_binding = binding
    
      if fast_forwards.include?(name)
    puts '#{name}: TEMP IGNORE'
    unavailable.push(Struct::Blog.new(name, web_url, nil))
    next
  end
    
          def public_url(name, sourcemap_directory)
        file_pathname = Sass::Util.cleanpath(File.absolute_path(name, @root))
        return Sass::Util.file_uri_from_path(file_pathname) if sourcemap_directory.nil?
    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
          def echo?
        (options || {}).fetch(:echo, true)
      end
    end
  end
end

    
    MESSAGE
      end
    end
  end
end

    
            true
      end
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      frames = frames = exception.backtrace.map { |line|
        frame = OpenStruct.new
        if line =~ /(.*?):(\d+)(:in `(.*)')?/
          frame.filename = $1
          frame.lineno = $2.to_i
          frame.function = $4
    }
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          it 'allows closing brace on separate line from last multiline element' do
        expect_no_offenses(construct(true, a, make_multi(multi), true))
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
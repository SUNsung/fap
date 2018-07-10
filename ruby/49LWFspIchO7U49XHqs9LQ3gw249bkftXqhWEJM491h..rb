
        
              # If you don't want confirmation to be sent on create, neither a code
      # to be generated, call skip_confirmation!
      def skip_confirmation!
        self.confirmed_at = Time.now.utc
      end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
            def_node_matcher :only_truthiness_matters?, <<-PATTERN
          ^({if while until case while_post until_post} equal?(%0) ...)
        PATTERN
    
            def parent_block_node(node)
          node.each_ancestor(:block).first
        end
      end
    end
  end
end

    
            def immutable_literal?(node)
          return true if node.immutable_literal?